#define GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <max.h>
#include "ApexTuner_utils.h"

void print_help(const char *prog_name) {
    printf("\033[H\033[J");
    printf(FG_ELECTRIC_CYAN BOLD "+--------------------------------------+" RESET "\n");
    printf(FG_ELECTRIC_CYAN BOLD "|     CPU GOVERNOR CLI & TUI HELP      |" RESET "\n");
    printf(FG_ELECTRIC_CYAN BOLD "+--------------------------------------+" RESET "\n\n");
    printf(ITALIC FG_GOLD "Usage:" RESET "\n");
    printf(FG_WHEAT "  %s [1-5]  (Direct execution)" RESET "\n", prog_name);
    printf(FG_WHEAT "  %s       (Interactive TUI mode)" RESET "\n\n", prog_name);
    printf(BOLD FG_SHOCKING_PINK "Quick Arguments & Menu Mapping:" RESET "\n");
    printf(FG_LIME "  1 " FG_CELADON "-> Performance (Max clock speed)" RESET "\n");
    printf(FG_LIME "  2 " FG_CELADON "-> Schedutil   (Dynamic scaling)" RESET "\n");
    printf(FG_LIME "  3 " FG_CELADON "-> Powersave   (Battery saver)" RESET "\n");
    printf(FG_LIME "  4 " FG_CELADON "-> Default     (OEM sugov_ext)" RESET "\n");
    printf(FG_LIME "  5 " FG_CELADON "-> Conservative(Smooth curve)" RESET "\n");
    printf(FG_YELLOW "  -h " FG_VIVID_YELLOW "-> Show this help menu" RESET "\n");
    printf(FG_RED   "  q  " FG_VIVID_RED   "-> Quit TUI app safely" RESET "\n\n");
}

void get_current_governor(char *buf, size_t size) {
    FILE *f = fopen("/sys/devices/system/cpu/cpufreq/policy0/scaling_governor", "r");
    if (f) {
        if (fgets(buf, size, f)) {
            buf[strcspn(buf, "\n")] = 0;
        } else {
            snprintf(buf, size, "unknown");
        }
        fclose(f);
    } else {
        snprintf(buf, size, "restricted (root needed)");
    }
}

void enable_raw_mode(struct termios *orig_termios) {
    tcgetattr(STDIN_FILENO, orig_termios);
    struct termios raw = *orig_termios;
    raw.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

void disable_raw_mode(struct termios *orig_termios) {
    tcsetattr(STDIN_FILENO, TCSANOW, orig_termios);
}

int execute_governor_choice(char choice, int verbose) {
    switch (choice) {
        case '1':
            setgovernor("performance");
            setgpugovernor("performance");
            setgpufreq(1000000000);
	    setschedular("none");
	    setsyskb(256);
	    setzram(4294967296ULL);
	    setswap(100);
	    setzramalg("zstd");


            if (verbose) printf(FG_BLACK BG_GREEN BOLD " ⚡ Performance mode engaged! 🚀 " RESET "\n");
            return 1;
        case '2':
            setgovernor("schedutil");
	    setgpugovernor("simple_ondemand");
	    setgpufreq(900000000);
	    setschedular("bfq");
	    setsyskb(128);

            if (verbose) printf(FG_WHITE BG_BLUE BOLD " ⚖️ Schedutil mode engaged! 🎯 " RESET "\n");
            return 1;
        case '3':
            setgovernor("powersave");
	    setgpugovernor("powersave");
	    setgpufreq(315000000);
	    setschedular("mq-deadline");

            if (verbose) printf(FG_WHITE BG_NAVY BOLD " 🔋 Powersave mode engaged! 🌿 " RESET "\n");
            return 1;
        case '4':
            setgovernor("sugov_ext");
	    setgpugovernor("dummy");
	    setgpufreq(925000000);
	    setschedular("none");
	    setswap(180);
	    setzramalg("zstd");

            if (verbose) printf(FG_WHITE BG_PURPLE BOLD " 🔄 Default policy engaged! 🛠️ " RESET "\n");
            return 1;
        case '5':
            setgovernor("conservative");
	    setgpugovernor("userspace");
	    setgpufreq(349000000);
	    setschedular("kyber");

            if (verbose) printf(FG_WHITE BG_OLIVE BOLD " 🍃 Conservative mode engaged! 📈 " RESET "\n");
            return 1;
        default:
            if (verbose) printf(FG_WHITE BG_RED BOLD " ❓ Invalid choice! Check options. 💡 " RESET "\n");
            return 0;
    }
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
            print_help(argv[0]);
            return 0;
        } else {
            if (execute_governor_choice(argv[1][0], 1)) {
                char current_gov[64];
                get_current_governor(current_gov, sizeof(current_gov));
                printf(FG_SHADE_15 "Active governor verified: %s\n" RESET, current_gov);
                return 0;
            } else {
                print_help(argv[0]);
                return 1;
            }
        }
    }

    char selection;
    struct termios orig_termios;
    char current_gov[64];

    enable_raw_mode(&orig_termios);

    while (1) {
        printf("\033[H\033[J");
        get_current_governor(current_gov, sizeof(current_gov));

        printf(FG_ELECTRIC_CYAN BOLD "+--------------------------------------+" RESET "\n");
        printf(FG_VIVID_CYAN   BOLD "|         CPU GOVERNOR CONTROL         |" RESET "\n");
        printf(FG_ELECTRIC_CYAN BOLD "+--------------------------------------+" RESET "\n");
        printf(FG_SHADE_19 " Gov: " BOLD FG_GOLD "%s" RESET "\n\n", current_gov);

        printf(FG_SHADE_24 "+--------------------------------------+" RESET "\n");
        printf(FG_SHADE_24 "|" FG_LIME BOLD " [1]" FG_CELADON " Performance                      " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "|" FG_LIME BOLD " [2]" FG_CELADON " Schedutil                        " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "|" FG_LIME BOLD " [3]" FG_CELADON " Powersave                        " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "|" FG_LIME BOLD " [4]" FG_CELADON " Default (sugov_ext)              " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "|" FG_LIME BOLD " [5]" FG_CELADON " Conservative                     " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "+--------------------------------------+" RESET "\n");
        printf(FG_SHADE_24 "|" FG_YELLOW BOLD " [h]" FG_VIVID_YELLOW " Help menu                        " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "|" FG_RED   BOLD " [q]" FG_VIVID_RED   " Quit TUI                         " FG_SHADE_24 "|" RESET "\n");
        printf(FG_SHADE_24 "+--------------------------------------+" RESET "\n\n");

        printf(BOLD FG_WHEAT " Select Option: " RESET);
        fflush(stdout);

        selection = (char)getchar();

        if (selection == 'q' || selection == 'Q') {
            printf("\n\n" FG_SNOW_WHITE BOLD " ✨ Catch you later, legend! 👋 ✨ " RESET "\n\n");
            break;
        }

        printf("\n\n");

        if (selection == 'h' || selection == 'H') {
            print_help(argv[0]);
        } else {
            execute_governor_choice(selection, 1);
        }

        printf("\n" FG_SHADE_15 "Press any key to continue..." RESET);
        fflush(stdout);
        (void)getchar();
    }

    disable_raw_mode(&orig_termios);
    return 0;
}

