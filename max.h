#ifndef CUSTOM_COLORS_H
#define CUSTOM_COLORS_H

/*
 * ================================================================
 *  custom.h — Full ANSI 256-Color Terminal Color Definitions for C
 *
 *  Sections:
 *    1.  Reset & Text Modifiers
 *    2.  Standard Foreground Colors       (0–15)
 *    3.  Standard Background Colors       (0–15)
 *    4.  Blinking Standard Foreground      (0–15)
 *    5.  Color-Cube Foreground            (16–231)
 *    6.  Color-Cube Background            (16–231)
 *    7.  Color-Cube Blinking Foreground   (16–231)
 *    8.  Grayscale Foreground             (232–255)
 *    9.  Grayscale Background             (232–255)
 *    10. Grayscale Blinking Foreground    (232–255)
 *    11. Convenience Utility Macros
 *
 *  Usage:
 *    printf(FG_RED "Error!" RESET "\n");
 *    printf(BG_NAVY FG_WHITE " title " RESET "\n");
 *    printf(BLINK FG_CORAL "alert" RESET "\n");
 *    printf(BOLD FG_GOLD "gold text" RESET "\n");
 *    printf(BLINK_FG_CRIMSON "critical" RESET "\n");
 * ================================================================
 */

/* ================================================================
 *  SECTION 1 — RESET AND TEXT MODIFIERS
 * ================================================================ */

#define RESET                        "\033[0m"
#define BOLD                         "\033[1m"
#define DIM                          "\033[2m"
#define ITALIC                       "\033[3m"
#define UNDERLINE                    "\033[4m"
#define BLINK                        "\033[5m"
#define BLINK_RAPID                  "\033[6m"
#define REVERSE_VIDEO                "\033[7m"
#define HIDDEN                       "\033[8m"
#define STRIKETHROUGH                "\033[9m"

/* ================================================================
 *  SECTION 2 — STANDARD FOREGROUND COLORS (0-15)
 * ================================================================ */

/* Dark standard (0-7) */
#define FG_BLACK                     "\033[38;5;0m"   /* #000000 */
#define FG_MAROON                    "\033[38;5;1m"   /* #800000 */
#define FG_GREEN                     "\033[38;5;2m"   /* #008000 */
#define FG_OLIVE                     "\033[38;5;3m"   /* #808000 */
#define FG_NAVY                      "\033[38;5;4m"   /* #000080 */
#define FG_PURPLE                    "\033[38;5;5m"   /* #800080 */
#define FG_TEAL                      "\033[38;5;6m"   /* #008080 */
#define FG_SILVER                    "\033[38;5;7m"   /* #C0C0C0 */

/* Bright standard (8-15) */
#define FG_GRAY                      "\033[38;5;8m"   /* #808080 */
#define FG_RED                       "\033[38;5;9m"   /* #FF0000 */
#define FG_LIME                      "\033[38;5;10m"  /* #00FF00 */
#define FG_YELLOW                    "\033[38;5;11m"  /* #FFFF00 */
#define FG_BLUE                      "\033[38;5;12m"  /* #0000FF */
#define FG_MAGENTA                   "\033[38;5;13m"  /* #FF00FF */
#define FG_CYAN                      "\033[38;5;14m"  /* #00FFFF */
#define FG_WHITE                     "\033[38;5;15m"  /* #FFFFFF */

/* ================================================================
 *  SECTION 3 — STANDARD BACKGROUND COLORS (0-15)
 * ================================================================ */

#define BG_BLACK                     "\033[48;5;0m"
#define BG_MAROON                    "\033[48;5;1m"
#define BG_GREEN                     "\033[48;5;2m"
#define BG_OLIVE                     "\033[48;5;3m"
#define BG_NAVY                      "\033[48;5;4m"
#define BG_PURPLE                    "\033[48;5;5m"
#define BG_TEAL                      "\033[48;5;6m"
#define BG_SILVER                    "\033[48;5;7m"
#define BG_GRAY                      "\033[48;5;8m"
#define BG_RED                       "\033[48;5;9m"
#define BG_LIME                      "\033[48;5;10m"
#define BG_YELLOW                    "\033[48;5;11m"
#define BG_BLUE                      "\033[48;5;12m"
#define BG_MAGENTA                   "\033[48;5;13m"
#define BG_CYAN                      "\033[48;5;14m"
#define BG_WHITE                     "\033[48;5;15m"

/* ================================================================
 *  SECTION 4 — BLINKING STANDARD FOREGROUND COLORS (0-15)
 * ================================================================ */

#define BLINK_FG_BLACK               "\033[5;38;5;0m"
#define BLINK_FG_MAROON              "\033[5;38;5;1m"
#define BLINK_FG_GREEN               "\033[5;38;5;2m"
#define BLINK_FG_OLIVE               "\033[5;38;5;3m"
#define BLINK_FG_NAVY                "\033[5;38;5;4m"
#define BLINK_FG_PURPLE              "\033[5;38;5;5m"
#define BLINK_FG_TEAL                "\033[5;38;5;6m"
#define BLINK_FG_SILVER              "\033[5;38;5;7m"
#define BLINK_FG_GRAY                "\033[5;38;5;8m"
#define BLINK_FG_RED                 "\033[5;38;5;9m"
#define BLINK_FG_LIME                "\033[5;38;5;10m"
#define BLINK_FG_YELLOW              "\033[5;38;5;11m"
#define BLINK_FG_BLUE                "\033[5;38;5;12m"
#define BLINK_FG_MAGENTA             "\033[5;38;5;13m"
#define BLINK_FG_CYAN                "\033[5;38;5;14m"
#define BLINK_FG_WHITE               "\033[5;38;5;15m"

/* ================================================================
 *  SECTION 5 — 6x6x6 COLOR-CUBE FOREGROUND (16-231)
 *
 *  Index = 16 + 36*R + 6*G + B   (R,G,B each 0-5)
 *  Actual RGB values per level: 0, 95, 135, 175, 215, 255
 * ================================================================ */

/* ---- Red-0  (R=0) ---- */

/*  g=0 */
#define FG_PITCH_BLACK               "\033[38;5;16m"  /* rgb(0,0,0)     */
#define FG_DARK_NAVY                 "\033[38;5;17m"  /* rgb(0,0,95)    */
#define FG_DARK_BLUE                 "\033[38;5;18m"  /* rgb(0,0,135)   */
#define FG_MEDIUM_BLUE               "\033[38;5;19m"  /* rgb(0,0,175)   */
#define FG_ROYAL_BLUE                "\033[38;5;20m"  /* rgb(0,0,215)   */
#define FG_ELECTRIC_BLUE             "\033[38;5;21m"  /* rgb(0,0,255)   */

/*  g=1 */
#define FG_DARK_GREEN                "\033[38;5;22m"  /* rgb(0,95,0)    */
#define FG_DEEP_TEAL                 "\033[38;5;23m"  /* rgb(0,95,95)   */
#define FG_DARK_OCEAN                "\033[38;5;24m"  /* rgb(0,95,135)  */
#define FG_STEEL_BLUE                "\033[38;5;25m"  /* rgb(0,95,175)  */
#define FG_DODGER_BLUE               "\033[38;5;26m"  /* rgb(0,95,215)  */
#define FG_AZURE                     "\033[38;5;27m"  /* rgb(0,95,255)  */

/*  g=2 */
#define FG_FOREST_GREEN              "\033[38;5;28m"  /* rgb(0,135,0)   */
#define FG_SEA_GREEN                 "\033[38;5;29m"  /* rgb(0,135,95)  */
#define FG_DARK_CYAN                 "\033[38;5;30m"  /* rgb(0,135,135) */
#define FG_CERULEAN                  "\033[38;5;31m"  /* rgb(0,135,175) */
#define FG_CORNFLOWER_BLUE           "\033[38;5;32m"  /* rgb(0,135,215) */
#define FG_BRILLIANT_BLUE            "\033[38;5;33m"  /* rgb(0,135,255) */

/*  g=3 */
#define FG_EMERALD                   "\033[38;5;34m"  /* rgb(0,175,0)   */
#define FG_JADE                      "\033[38;5;35m"  /* rgb(0,175,95)  */
#define FG_PERSIAN_GREEN             "\033[38;5;36m"  /* rgb(0,175,135) */
#define FG_MEDIUM_CYAN               "\033[38;5;37m"  /* rgb(0,175,175) */
#define FG_DEEP_SKY_BLUE             "\033[38;5;38m"  /* rgb(0,175,215) */
#define FG_VIVID_SKY_BLUE            "\033[38;5;39m"  /* rgb(0,175,255) */

/*  g=4 */
#define FG_BRIGHT_GREEN              "\033[38;5;40m"  /* rgb(0,215,0)   */
#define FG_SPRING_GREEN              "\033[38;5;41m"  /* rgb(0,215,95)  */
#define FG_MEDIUM_SPRING_GREEN       "\033[38;5;42m"  /* rgb(0,215,135) */
#define FG_MEDIUM_AQUAMARINE         "\033[38;5;43m"  /* rgb(0,215,175) */
#define FG_TURQUOISE                 "\033[38;5;44m"  /* rgb(0,215,215) */
#define FG_ELECTRIC_CYAN             "\033[38;5;45m"  /* rgb(0,215,255) */

/*  g=5 */
#define FG_NEON_GREEN                "\033[38;5;46m"  /* rgb(0,255,0)   */
#define FG_MINT_GREEN                "\033[38;5;47m"  /* rgb(0,255,95)  */
#define FG_LIGHT_SPRING_GREEN        "\033[38;5;48m"  /* rgb(0,255,135) */
#define FG_AQUAMARINE                "\033[38;5;49m"  /* rgb(0,255,175) */
#define FG_LIGHT_AQUA                "\033[38;5;50m"  /* rgb(0,255,215) */
#define FG_VIVID_CYAN                "\033[38;5;51m"  /* rgb(0,255,255) */

/* ---- Red-1  (R=95) ---- */

/*  g=0 */
#define FG_DARK_MAROON               "\033[38;5;52m"  /* rgb(95,0,0)    */
#define FG_DARK_PURPLE               "\033[38;5;53m"  /* rgb(95,0,95)   */
#define FG_INDIGO                    "\033[38;5;54m"  /* rgb(95,0,135)  */
#define FG_DARK_VIOLET               "\033[38;5;55m"  /* rgb(95,0,175)  */
#define FG_BLUE_VIOLET               "\033[38;5;56m"  /* rgb(95,0,215)  */
#define FG_VIVID_VIOLET              "\033[38;5;57m"  /* rgb(95,0,255)  */

/*  g=1 */
#define FG_DARK_OLIVE                "\033[38;5;58m"  /* rgb(95,95,0)   */
#define FG_DIM_GRAY                  "\033[38;5;59m"  /* rgb(95,95,95)  */
#define FG_SLATE_GRAY_BLUE           "\033[38;5;60m"  /* rgb(95,95,135) */
#define FG_SLATE_BLUE                "\033[38;5;61m"  /* rgb(95,95,175) */
#define FG_MEDIUM_SLATE_BLUE         "\033[38;5;62m"  /* rgb(95,95,215) */
#define FG_LIGHT_SLATE_BLUE          "\033[38;5;63m"  /* rgb(95,95,255) */

/*  g=2 */
#define FG_DARK_CHARTREUSE           "\033[38;5;64m"  /* rgb(95,135,0)  */
#define FG_FERN_GREEN                "\033[38;5;65m"  /* rgb(95,135,95) */
#define FG_CADET_BLUE                "\033[38;5;66m"  /* rgb(95,135,135)*/
#define FG_AIR_FORCE_BLUE            "\033[38;5;67m"  /* rgb(95,135,175)*/
#define FG_PERIWINKLE                "\033[38;5;68m"  /* rgb(95,135,215)*/
#define FG_CORNFLOWER                "\033[38;5;69m"  /* rgb(95,135,255)*/

/*  g=3 */
#define FG_AVOCADO                   "\033[38;5;70m"  /* rgb(95,175,0)  */
#define FG_MEDIUM_SEA_GREEN          "\033[38;5;71m"  /* rgb(95,175,95) */
#define FG_OCEAN_GREEN               "\033[38;5;72m"  /* rgb(95,175,135)*/
#define FG_CADET_TEAL                "\033[38;5;73m"  /* rgb(95,175,175)*/
#define FG_PICTON_BLUE               "\033[38;5;74m"  /* rgb(95,175,215)*/
#define FG_MALIBU_BLUE               "\033[38;5;75m"  /* rgb(95,175,255)*/

/*  g=4 */
#define FG_CHARTREUSE_GREEN          "\033[38;5;76m"  /* rgb(95,215,0)  */
#define FG_LIGHT_GREEN               "\033[38;5;77m"  /* rgb(95,215,95) */
#define FG_PASTEL_GREEN              "\033[38;5;78m"  /* rgb(95,215,135)*/
#define FG_SEAFOAM                   "\033[38;5;79m"  /* rgb(95,215,175)*/
#define FG_SKY_CYAN                  "\033[38;5;80m"  /* rgb(95,215,215)*/
#define FG_LIGHT_CORNFLOWER          "\033[38;5;81m"  /* rgb(95,215,255)*/

/*  g=5 */
#define FG_LAWN_GREEN                "\033[38;5;82m"  /* rgb(95,255,0)  */
#define FG_PALE_GREEN                "\033[38;5;83m"  /* rgb(95,255,95) */
#define FG_LIGHT_PASTEL_GREEN        "\033[38;5;84m"  /* rgb(95,255,135)*/
#define FG_MINT                      "\033[38;5;85m"  /* rgb(95,255,175)*/
#define FG_PALE_AQUA                 "\033[38;5;86m"  /* rgb(95,255,215)*/
#define FG_ICE_BLUE                  "\033[38;5;87m"  /* rgb(95,255,255)*/

/* ---- Red-2  (R=135) ---- */

/*  g=0 */
#define FG_BLOOD_RED                 "\033[38;5;88m"  /* rgb(135,0,0)   */
#define FG_DARK_MAGENTA              "\033[38;5;89m"  /* rgb(135,0,95)  */
#define FG_DEEP_MAGENTA              "\033[38;5;90m"  /* rgb(135,0,135) */
#define FG_DARK_ORCHID               "\033[38;5;91m"  /* rgb(135,0,175) */
#define FG_MEDIUM_VIOLET             "\033[38;5;92m"  /* rgb(135,0,215) */
#define FG_VIVID_PURPLE              "\033[38;5;93m"  /* rgb(135,0,255) */

/*  g=1 */
#define FG_DARK_GOLDENROD            "\033[38;5;94m"  /* rgb(135,95,0)  */
#define FG_ROSY_BROWN                "\033[38;5;95m"  /* rgb(135,95,95) */
#define FG_MAUVE                     "\033[38;5;96m"  /* rgb(135,95,135)*/
#define FG_MEDIUM_PURPLE             "\033[38;5;97m"  /* rgb(135,95,175)*/
#define FG_HELIOTROPE                "\033[38;5;98m"  /* rgb(135,95,215)*/
#define FG_LAVENDER_BLUE             "\033[38;5;99m"  /* rgb(135,95,255)*/

/*  g=2 */
#define FG_DARK_KHAKI                "\033[38;5;100m" /* rgb(135,135,0) */
#define FG_KHAKI_GREEN               "\033[38;5;101m" /* rgb(135,135,95)*/
#define FG_BATTLESHIP_GRAY           "\033[38;5;102m" /* rgb(135,135,135)*/
#define FG_COOL_GRAY                 "\033[38;5;103m" /* rgb(135,135,175)*/
#define FG_LIGHT_PERIWINKLE          "\033[38;5;104m" /* rgb(135,135,215)*/
#define FG_LIGHT_LAVENDER            "\033[38;5;105m" /* rgb(135,135,255)*/

/*  g=3 */
#define FG_OLIVE_DRAB                "\033[38;5;106m" /* rgb(135,175,0) */
#define FG_ASPARAGUS                 "\033[38;5;107m" /* rgb(135,175,95)*/
#define FG_SAGE_GREEN                "\033[38;5;108m" /* rgb(135,175,135)*/
#define FG_PEWTER_BLUE               "\033[38;5;109m" /* rgb(135,175,175)*/
#define FG_CAROLINA_BLUE             "\033[38;5;110m" /* rgb(135,175,215)*/
#define FG_BABY_BLUE                 "\033[38;5;111m" /* rgb(135,175,255)*/

/*  g=4 */
#define FG_YELLOW_GREEN              "\033[38;5;112m" /* rgb(135,215,0) */
#define FG_PISTACHIO                 "\033[38;5;113m" /* rgb(135,215,95)*/
#define FG_GRANNY_SMITH              "\033[38;5;114m" /* rgb(135,215,135)*/
#define FG_PEARL_AQUA                "\033[38;5;115m" /* rgb(135,215,175)*/
#define FG_POWDER_BLUE               "\033[38;5;116m" /* rgb(135,215,215)*/
#define FG_COLUMBIA_BLUE             "\033[38;5;117m" /* rgb(135,215,255)*/

/*  g=5 */
#define FG_BRIGHT_CHARTREUSE         "\033[38;5;118m" /* rgb(135,255,0) */
#define FG_VIVID_LIME                "\033[38;5;119m" /* rgb(135,255,95)*/
#define FG_SCREAMIN_GREEN            "\033[38;5;120m" /* rgb(135,255,135)*/
#define FG_CELADON                   "\033[38;5;121m" /* rgb(135,255,175)*/
#define FG_PALE_TURQUOISE            "\033[38;5;122m" /* rgb(135,255,215)*/
#define FG_ELECTRIC_ICE              "\033[38;5;123m" /* rgb(135,255,255)*/

/* ---- Red-3  (R=175) ---- */

/*  g=0 */
#define FG_FIREBRICK                 "\033[38;5;124m" /* rgb(175,0,0)   */
#define FG_ROSE_RED                  "\033[38;5;125m" /* rgb(175,0,95)  */
#define FG_MEDIUM_MAGENTA            "\033[38;5;126m" /* rgb(175,0,135) */
#define FG_DARK_FUCHSIA              "\033[38;5;127m" /* rgb(175,0,175) */
#define FG_PURPLE_VIOLET             "\033[38;5;128m" /* rgb(175,0,215) */
#define FG_ELECTRIC_PURPLE           "\033[38;5;129m" /* rgb(175,0,255) */

/*  g=1 */
#define FG_BRONZE                    "\033[38;5;130m" /* rgb(175,95,0)  */
#define FG_COPPER_ROSE               "\033[38;5;131m" /* rgb(175,95,95) */
#define FG_ORCHID_PINK               "\033[38;5;132m" /* rgb(175,95,135)*/
#define FG_PLUM                      "\033[38;5;133m" /* rgb(175,95,175)*/
#define FG_RICH_LILAC                "\033[38;5;134m" /* rgb(175,95,215)*/
#define FG_MEDIUM_ORCHID             "\033[38;5;135m" /* rgb(175,95,255)*/

/*  g=2 */
#define FG_DARK_GOLD                 "\033[38;5;136m" /* rgb(175,135,0) */
#define FG_CAMEL                     "\033[38;5;137m" /* rgb(175,135,95)*/
#define FG_DUSTY_ROSE                "\033[38;5;138m" /* rgb(175,135,135)*/
#define FG_LILAC                     "\033[38;5;139m" /* rgb(175,135,175)*/
#define FG_WISTERIA                  "\033[38;5;140m" /* rgb(175,135,215)*/
#define FG_BRIGHT_LILAC              "\033[38;5;141m" /* rgb(175,135,255)*/

/*  g=3 */
#define FG_CITRON                    "\033[38;5;142m" /* rgb(175,175,0) */
#define FG_DARK_TAN                  "\033[38;5;143m" /* rgb(175,175,95)*/
#define FG_WARM_GRAY                 "\033[38;5;144m" /* rgb(175,175,135)*/
#define FG_SILVER_CHALICE            "\033[38;5;145m" /* rgb(175,175,175)*/
#define FG_LIGHT_STEEL_BLUE          "\033[38;5;146m" /* rgb(175,175,215)*/
#define FG_SOFT_LAVENDER             "\033[38;5;147m" /* rgb(175,175,255)*/

/*  g=4 */
#define FG_PEAR_GREEN                "\033[38;5;148m" /* rgb(175,215,0) */
#define FG_DOLLAR_BILL               "\033[38;5;149m" /* rgb(175,215,95)*/
#define FG_CELADON_GREEN             "\033[38;5;150m" /* rgb(175,215,135)*/
#define FG_PALE_GREEN_MIST           "\033[38;5;151m" /* rgb(175,215,175)*/
#define FG_LIGHT_BLUE_GRAY           "\033[38;5;152m" /* rgb(175,215,215)*/
#define FG_PALE_CORNFLOWER           "\033[38;5;153m" /* rgb(175,215,255)*/

/*  g=5 */
#define FG_VIVID_CHARTREUSE          "\033[38;5;154m" /* rgb(175,255,0) */
#define FG_LIME_FIZZ                 "\033[38;5;155m" /* rgb(175,255,95)*/
#define FG_PALE_LIME                 "\033[38;5;156m" /* rgb(175,255,135)*/
#define FG_MINT_CREAM                "\033[38;5;157m" /* rgb(175,255,175)*/
#define FG_AERO_BLUE                 "\033[38;5;158m" /* rgb(175,255,215)*/
#define FG_PALE_SKY_BLUE             "\033[38;5;159m" /* rgb(175,255,255)*/

/* ---- Red-4  (R=215) ---- */

/*  g=0 */
#define FG_CRIMSON                   "\033[38;5;160m" /* rgb(215,0,0)   */
#define FG_RUBY                      "\033[38;5;161m" /* rgb(215,0,95)  */
#define FG_DEEP_PINK                 "\033[38;5;162m" /* rgb(215,0,135) */
#define FG_HOT_PINK                  "\033[38;5;163m" /* rgb(215,0,175) */
#define FG_MAGENTA_PINK              "\033[38;5;164m" /* rgb(215,0,215) */
#define FG_ELECTRIC_MAGENTA          "\033[38;5;165m" /* rgb(215,0,255) */

/*  g=1 */
#define FG_DARK_ORANGE               "\033[38;5;166m" /* rgb(215,95,0)  */
#define FG_INDIAN_RED                "\033[38;5;167m" /* rgb(215,95,95) */
#define FG_BLUSH                     "\033[38;5;168m" /* rgb(215,95,135)*/
#define FG_CARNATION_PINK            "\033[38;5;169m" /* rgb(215,95,175)*/
#define FG_ORCHID                    "\033[38;5;170m" /* rgb(215,95,215)*/
#define FG_VIOLET                    "\033[38;5;171m" /* rgb(215,95,255)*/

/*  g=2 */
#define FG_TANGERINE                 "\033[38;5;172m" /* rgb(215,135,0) */
#define FG_SANDY_BROWN               "\033[38;5;173m" /* rgb(215,135,95)*/
#define FG_PEACH                     "\033[38;5;174m" /* rgb(215,135,135)*/
#define FG_PINK                      "\033[38;5;175m" /* rgb(215,135,175)*/
#define FG_LIGHT_ORCHID              "\033[38;5;176m" /* rgb(215,135,215)*/
#define FG_BRIGHT_VIOLET             "\033[38;5;177m" /* rgb(215,135,255)*/

/*  g=3 */
#define FG_AMBER                     "\033[38;5;178m" /* rgb(215,175,0) */
#define FG_BUFF                      "\033[38;5;179m" /* rgb(215,175,95)*/
#define FG_NAVAJO_WHITE              "\033[38;5;180m" /* rgb(215,175,135)*/
#define FG_MISTY_ROSE                "\033[38;5;181m" /* rgb(215,175,175)*/
#define FG_THISTLE                   "\033[38;5;182m" /* rgb(215,175,215)*/
#define FG_LIGHT_WISTERIA            "\033[38;5;183m" /* rgb(215,175,255)*/

/*  g=4 */
#define FG_GOLD                      "\033[38;5;184m" /* rgb(215,215,0) */
#define FG_KHAKI                     "\033[38;5;185m" /* rgb(215,215,95)*/
#define FG_PALE_GOLD                 "\033[38;5;186m" /* rgb(215,215,135)*/
#define FG_WHEAT                     "\033[38;5;187m" /* rgb(215,215,175)*/
#define FG_PLATINUM                  "\033[38;5;188m" /* rgb(215,215,215)*/
#define FG_LAVENDER_MIST             "\033[38;5;189m" /* rgb(215,215,255)*/

/*  g=5 */
#define FG_ELECTRIC_LIME             "\033[38;5;190m" /* rgb(215,255,0) */
#define FG_HONEYDEW_GREEN            "\033[38;5;191m" /* rgb(215,255,95)*/
#define FG_PALE_CHARTREUSE           "\033[38;5;192m" /* rgb(215,255,135)*/
#define FG_TEA_GREEN                 "\033[38;5;193m" /* rgb(215,255,175)*/
#define FG_HONEYDEW                  "\033[38;5;194m" /* rgb(215,255,215)*/
#define FG_ALICE_BLUE                "\033[38;5;195m" /* rgb(215,255,255)*/

/* ---- Red-5  (R=255) ---- */

/*  g=0 */
#define FG_VIVID_RED                 "\033[38;5;196m" /* rgb(255,0,0)   */
#define FG_TORCH_RED                 "\033[38;5;197m" /* rgb(255,0,95)  */
#define FG_RADICAL_RED               "\033[38;5;198m" /* rgb(255,0,135) */
#define FG_WILD_STRAWBERRY           "\033[38;5;199m" /* rgb(255,0,175) */
#define FG_SHOCKING_PINK             "\033[38;5;200m" /* rgb(255,0,215) */
#define FG_FUCHSIA                   "\033[38;5;201m" /* rgb(255,0,255) */

/*  g=1 */
#define FG_ORANGE_RED                "\033[38;5;202m" /* rgb(255,95,0)  */
#define FG_CORAL                     "\033[38;5;203m" /* rgb(255,95,95) */
#define FG_WATERMELON                "\033[38;5;204m" /* rgb(255,95,135)*/
#define FG_STRAWBERRY                "\033[38;5;205m" /* rgb(255,95,175)*/
#define FG_ROSE_PINK                 "\033[38;5;206m" /* rgb(255,95,215)*/
#define FG_ULTRA_PINK                "\033[38;5;207m" /* rgb(255,95,255)*/

/*  g=2 */
#define FG_ORANGE                    "\033[38;5;208m" /* rgb(255,135,0) */
#define FG_SALMON                    "\033[38;5;209m" /* rgb(255,135,95)*/
#define FG_LIGHT_CORAL               "\033[38;5;210m" /* rgb(255,135,135)*/
#define FG_FLAMINGO                  "\033[38;5;211m" /* rgb(255,135,175)*/
#define FG_COTTON_CANDY              "\033[38;5;212m" /* rgb(255,135,215)*/
#define FG_BRIGHT_PINK               "\033[38;5;213m" /* rgb(255,135,255)*/

/*  g=3 */
#define FG_GOLDEN_YELLOW             "\033[38;5;214m" /* rgb(255,175,0) */
#define FG_MACARONI                  "\033[38;5;215m" /* rgb(255,175,95)*/
#define FG_APRICOT                   "\033[38;5;216m" /* rgb(255,175,135)*/
#define FG_LIGHT_PINK                "\033[38;5;217m" /* rgb(255,175,175)*/
#define FG_CHERRY_BLOSSOM            "\033[38;5;218m" /* rgb(255,175,215)*/
#define FG_LIGHT_FUCHSIA             "\033[38;5;219m" /* rgb(255,175,255)*/

/*  g=4 */
#define FG_BRIGHT_GOLD               "\033[38;5;220m" /* rgb(255,215,0) */
#define FG_DANDELION                  "\033[38;5;221m" /* rgb(255,215,95)*/
#define FG_CREAM                     "\033[38;5;222m" /* rgb(255,215,135)*/
#define FG_PEACH_PUFF                "\033[38;5;223m" /* rgb(255,215,175)*/
#define FG_BABY_PINK                 "\033[38;5;224m" /* rgb(255,215,215)*/
#define FG_PALE_ROSE                 "\033[38;5;225m" /* rgb(255,215,255)*/

/*  g=5 */
#define FG_VIVID_YELLOW              "\033[38;5;226m" /* rgb(255,255,0) */
#define FG_LEMON                     "\033[38;5;227m" /* rgb(255,255,95)*/
#define FG_CANARY                    "\033[38;5;228m" /* rgb(255,255,135)*/
#define FG_CREAM_YELLOW              "\033[38;5;229m" /* rgb(255,255,175)*/
#define FG_CORNSILK                  "\033[38;5;230m" /* rgb(255,255,215)*/
#define FG_SNOW_WHITE                "\033[38;5;231m" /* rgb(255,255,255)*/

/* ================================================================
 *  SECTION 6 — 6x6x6 COLOR-CUBE BACKGROUND (16-231)
 * ================================================================ */

/* ---- Red-0 (R=0) ---- */
#define BG_PITCH_BLACK               "\033[48;5;16m"
#define BG_DARK_NAVY                 "\033[48;5;17m"
#define BG_DARK_BLUE                 "\033[48;5;18m"
#define BG_MEDIUM_BLUE               "\033[48;5;19m"
#define BG_ROYAL_BLUE                "\033[48;5;20m"
#define BG_ELECTRIC_BLUE             "\033[48;5;21m"

#define BG_DARK_GREEN                "\033[48;5;22m"
#define BG_DEEP_TEAL                 "\033[48;5;23m"
#define BG_DARK_OCEAN                "\033[48;5;24m"
#define BG_STEEL_BLUE                "\033[48;5;25m"
#define BG_DODGER_BLUE               "\033[48;5;26m"
#define BG_AZURE                     "\033[48;5;27m"

#define BG_FOREST_GREEN              "\033[48;5;28m"
#define BG_SEA_GREEN                 "\033[48;5;29m"
#define BG_DARK_CYAN                 "\033[48;5;30m"
#define BG_CERULEAN                  "\033[48;5;31m"
#define BG_CORNFLOWER_BLUE           "\033[48;5;32m"
#define BG_BRILLIANT_BLUE            "\033[48;5;33m"

#define BG_EMERALD                   "\033[48;5;34m"
#define BG_JADE                      "\033[48;5;35m"
#define BG_PERSIAN_GREEN             "\033[48;5;36m"
#define BG_MEDIUM_CYAN               "\033[48;5;37m"
#define BG_DEEP_SKY_BLUE             "\033[48;5;38m"
#define BG_VIVID_SKY_BLUE            "\033[48;5;39m"

#define BG_BRIGHT_GREEN              "\033[48;5;40m"
#define BG_SPRING_GREEN              "\033[48;5;41m"
#define BG_MEDIUM_SPRING_GREEN       "\033[48;5;42m"
#define BG_MEDIUM_AQUAMARINE         "\033[48;5;43m"
#define BG_TURQUOISE                 "\033[48;5;44m"
#define BG_ELECTRIC_CYAN             "\033[48;5;45m"

#define BG_NEON_GREEN                "\033[48;5;46m"
#define BG_MINT_GREEN                "\033[48;5;47m"
#define BG_LIGHT_SPRING_GREEN        "\033[48;5;48m"
#define BG_AQUAMARINE                "\033[48;5;49m"
#define BG_LIGHT_AQUA                "\033[48;5;50m"
#define BG_VIVID_CYAN                "\033[48;5;51m"

/* ---- Red-1 (R=95) ---- */
#define BG_DARK_MAROON               "\033[48;5;52m"
#define BG_DARK_PURPLE               "\033[48;5;53m"
#define BG_INDIGO                    "\033[48;5;54m"
#define BG_DARK_VIOLET               "\033[48;5;55m"
#define BG_BLUE_VIOLET               "\033[48;5;56m"
#define BG_VIVID_VIOLET              "\033[48;5;57m"

#define BG_DARK_OLIVE                "\033[48;5;58m"
#define BG_DIM_GRAY                  "\033[48;5;59m"
#define BG_SLATE_GRAY_BLUE           "\033[48;5;60m"
#define BG_SLATE_BLUE                "\033[48;5;61m"
#define BG_MEDIUM_SLATE_BLUE         "\033[48;5;62m"
#define BG_LIGHT_SLATE_BLUE          "\033[48;5;63m"

#define BG_DARK_CHARTREUSE           "\033[48;5;64m"
#define BG_FERN_GREEN                "\033[48;5;65m"
#define BG_CADET_BLUE                "\033[48;5;66m"
#define BG_AIR_FORCE_BLUE            "\033[48;5;67m"
#define BG_PERIWINKLE                "\033[48;5;68m"
#define BG_CORNFLOWER                "\033[48;5;69m"

#define BG_AVOCADO                   "\033[48;5;70m"
#define BG_MEDIUM_SEA_GREEN          "\033[48;5;71m"
#define BG_OCEAN_GREEN               "\033[48;5;72m"
#define BG_CADET_TEAL                "\033[48;5;73m"
#define BG_PICTON_BLUE               "\033[48;5;74m"
#define BG_MALIBU_BLUE               "\033[48;5;75m"

#define BG_CHARTREUSE_GREEN          "\033[48;5;76m"
#define BG_LIGHT_GREEN               "\033[48;5;77m"
#define BG_PASTEL_GREEN              "\033[48;5;78m"
#define BG_SEAFOAM                   "\033[48;5;79m"
#define BG_SKY_CYAN                  "\033[48;5;80m"
#define BG_LIGHT_CORNFLOWER          "\033[48;5;81m"

#define BG_LAWN_GREEN                "\033[48;5;82m"
#define BG_PALE_GREEN                "\033[48;5;83m"
#define BG_LIGHT_PASTEL_GREEN        "\033[48;5;84m"
#define BG_MINT                      "\033[48;5;85m"
#define BG_PALE_AQUA                 "\033[48;5;86m"
#define BG_ICE_BLUE                  "\033[48;5;87m"

/* ---- Red-2 (R=135) ---- */
#define BG_BLOOD_RED                 "\033[48;5;88m"
#define BG_DARK_MAGENTA              "\033[48;5;89m"
#define BG_DEEP_MAGENTA              "\033[48;5;90m"
#define BG_DARK_ORCHID               "\033[48;5;91m"
#define BG_MEDIUM_VIOLET             "\033[48;5;92m"
#define BG_VIVID_PURPLE              "\033[48;5;93m"

#define BG_DARK_GOLDENROD            "\033[48;5;94m"
#define BG_ROSY_BROWN                "\033[48;5;95m"
#define BG_MAUVE                     "\033[48;5;96m"
#define BG_MEDIUM_PURPLE             "\033[48;5;97m"
#define BG_HELIOTROPE                "\033[48;5;98m"
#define BG_LAVENDER_BLUE             "\033[48;5;99m"

#define BG_DARK_KHAKI                "\033[48;5;100m"
#define BG_KHAKI_GREEN               "\033[48;5;101m"
#define BG_BATTLESHIP_GRAY           "\033[48;5;102m"
#define BG_COOL_GRAY                 "\033[48;5;103m"
#define BG_LIGHT_PERIWINKLE          "\033[48;5;104m"
#define BG_LIGHT_LAVENDER            "\033[48;5;105m"

#define BG_OLIVE_DRAB                "\033[48;5;106m"
#define BG_ASPARAGUS                 "\033[48;5;107m"
#define BG_SAGE_GREEN                "\033[48;5;108m"
#define BG_PEWTER_BLUE               "\033[48;5;109m"
#define BG_CAROLINA_BLUE             "\033[48;5;110m"
#define BG_BABY_BLUE                 "\033[48;5;111m"

#define BG_YELLOW_GREEN              "\033[48;5;112m"
#define BG_PISTACHIO                 "\033[48;5;113m"
#define BG_GRANNY_SMITH              "\033[48;5;114m"
#define BG_PEARL_AQUA                "\033[48;5;115m"
#define BG_POWDER_BLUE               "\033[48;5;116m"
#define BG_COLUMBIA_BLUE             "\033[48;5;117m"

#define BG_BRIGHT_CHARTREUSE         "\033[48;5;118m"
#define BG_VIVID_LIME                "\033[48;5;119m"
#define BG_SCREAMIN_GREEN            "\033[48;5;120m"
#define BG_CELADON                   "\033[48;5;121m"
#define BG_PALE_TURQUOISE            "\033[48;5;122m"
#define BG_ELECTRIC_ICE              "\033[48;5;123m"

/* ---- Red-3 (R=175) ---- */
#define BG_FIREBRICK                 "\033[48;5;124m"
#define BG_ROSE_RED                  "\033[48;5;125m"
#define BG_MEDIUM_MAGENTA            "\033[48;5;126m"
#define BG_DARK_FUCHSIA              "\033[48;5;127m"
#define BG_PURPLE_VIOLET             "\033[48;5;128m"
#define BG_ELECTRIC_PURPLE           "\033[48;5;129m"

#define BG_BRONZE                    "\033[48;5;130m"
#define BG_COPPER_ROSE               "\033[48;5;131m"
#define BG_ORCHID_PINK               "\033[48;5;132m"
#define BG_PLUM                      "\033[48;5;133m"
#define BG_RICH_LILAC                "\033[48;5;134m"
#define BG_MEDIUM_ORCHID             "\033[48;5;135m"

#define BG_DARK_GOLD                 "\033[48;5;136m"
#define BG_CAMEL                     "\033[48;5;137m"
#define BG_DUSTY_ROSE                "\033[48;5;138m"
#define BG_LILAC                     "\033[48;5;139m"
#define BG_WISTERIA                  "\033[48;5;140m"
#define BG_BRIGHT_LILAC              "\033[48;5;141m"

#define BG_CITRON                    "\033[48;5;142m"
#define BG_DARK_TAN                  "\033[48;5;143m"
#define BG_WARM_GRAY                 "\033[48;5;144m"
#define BG_SILVER_CHALICE            "\033[48;5;145m"
#define BG_LIGHT_STEEL_BLUE          "\033[48;5;146m"
#define BG_SOFT_LAVENDER             "\033[48;5;147m"

#define BG_PEAR_GREEN                "\033[48;5;148m"
#define BG_DOLLAR_BILL               "\033[48;5;149m"
#define BG_CELADON_GREEN             "\033[48;5;150m"
#define BG_PALE_GREEN_MIST           "\033[48;5;151m"
#define BG_LIGHT_BLUE_GRAY           "\033[48;5;152m"
#define BG_PALE_CORNFLOWER           "\033[48;5;153m"

#define BG_VIVID_CHARTREUSE          "\033[48;5;154m"
#define BG_LIME_FIZZ                 "\033[48;5;155m"
#define BG_PALE_LIME                 "\033[48;5;156m"
#define BG_MINT_CREAM                "\033[48;5;157m"
#define BG_AERO_BLUE                 "\033[48;5;158m"
#define BG_PALE_SKY_BLUE             "\033[48;5;159m"

/* ---- Red-4 (R=215) ---- */
#define BG_CRIMSON                   "\033[48;5;160m"
#define BG_RUBY                      "\033[48;5;161m"
#define BG_DEEP_PINK                 "\033[48;5;162m"
#define BG_HOT_PINK                  "\033[48;5;163m"
#define BG_MAGENTA_PINK              "\033[48;5;164m"
#define BG_ELECTRIC_MAGENTA          "\033[48;5;165m"

#define BG_DARK_ORANGE               "\033[48;5;166m"
#define BG_INDIAN_RED                "\033[48;5;167m"
#define BG_BLUSH                     "\033[48;5;168m"
#define BG_CARNATION_PINK            "\033[48;5;169m"
#define BG_ORCHID                    "\033[48;5;170m"
#define BG_VIOLET                    "\033[48;5;171m"

#define BG_TANGERINE                 "\033[48;5;172m"
#define BG_SANDY_BROWN               "\033[48;5;173m"
#define BG_PEACH                     "\033[48;5;174m"
#define BG_PINK                      "\033[48;5;175m"
#define BG_LIGHT_ORCHID              "\033[48;5;176m"
#define BG_BRIGHT_VIOLET             "\033[48;5;177m"

#define BG_AMBER                     "\033[48;5;178m"
#define BG_BUFF                      "\033[48;5;179m"
#define BG_NAVAJO_WHITE              "\033[48;5;180m"
#define BG_MISTY_ROSE                "\033[48;5;181m"
#define BG_THISTLE                   "\033[48;5;182m"
#define BG_LIGHT_WISTERIA            "\033[48;5;183m"

#define BG_GOLD                      "\033[48;5;184m"
#define BG_KHAKI                     "\033[48;5;185m"
#define BG_PALE_GOLD                 "\033[48;5;186m"
#define BG_WHEAT                     "\033[48;5;187m"
#define BG_PLATINUM                  "\033[48;5;188m"
#define BG_LAVENDER_MIST             "\033[48;5;189m"

#define BG_ELECTRIC_LIME             "\033[48;5;190m"
#define BG_HONEYDEW_GREEN            "\033[48;5;191m"
#define BG_PALE_CHARTREUSE           "\033[48;5;192m"
#define BG_TEA_GREEN                 "\033[48;5;193m"
#define BG_HONEYDEW                  "\033[48;5;194m"
#define BG_ALICE_BLUE                "\033[48;5;195m"

/* ---- Red-5 (R=255) ---- */
#define BG_VIVID_RED                 "\033[48;5;196m"
#define BG_TORCH_RED                 "\033[48;5;197m"
#define BG_RADICAL_RED               "\033[48;5;198m"
#define BG_WILD_STRAWBERRY           "\033[48;5;199m"
#define BG_SHOCKING_PINK             "\033[48;5;200m"
#define BG_FUCHSIA                   "\033[48;5;201m"

#define BG_ORANGE_RED                "\033[48;5;202m"
#define BG_CORAL                     "\033[48;5;203m"
#define BG_WATERMELON                "\033[48;5;204m"
#define BG_STRAWBERRY                "\033[48;5;205m"
#define BG_ROSE_PINK                 "\033[48;5;206m"
#define BG_ULTRA_PINK                "\033[48;5;207m"

#define BG_ORANGE                    "\033[48;5;208m"
#define BG_SALMON                    "\033[48;5;209m"
#define BG_LIGHT_CORAL               "\033[48;5;210m"
#define BG_FLAMINGO                  "\033[48;5;211m"
#define BG_COTTON_CANDY              "\033[48;5;212m"
#define BG_BRIGHT_PINK               "\033[48;5;213m"

#define BG_GOLDEN_YELLOW             "\033[48;5;214m"
#define BG_MACARONI                  "\033[48;5;215m"
#define BG_APRICOT                   "\033[48;5;216m"
#define BG_LIGHT_PINK                "\033[48;5;217m"
#define BG_CHERRY_BLOSSOM            "\033[48;5;218m"
#define BG_LIGHT_FUCHSIA             "\033[48;5;219m"

#define BG_BRIGHT_GOLD               "\033[48;5;220m"
#define BG_DANDELION                 "\033[48;5;221m"
#define BG_CREAM                     "\033[48;5;222m"
#define BG_PEACH_PUFF                "\033[48;5;223m"
#define BG_BABY_PINK                 "\033[48;5;224m"
#define BG_PALE_ROSE                 "\033[48;5;225m"

#define BG_VIVID_YELLOW              "\033[48;5;226m"
#define BG_LEMON                     "\033[48;5;227m"
#define BG_CANARY                    "\033[48;5;228m"
#define BG_CREAM_YELLOW              "\033[48;5;229m"
#define BG_CORNSILK                  "\033[48;5;230m"
#define BG_SNOW_WHITE                "\033[48;5;231m"

/* ================================================================
 *  SECTION 7 — COLOR-CUBE BLINKING FOREGROUND (16-231)
 * ================================================================ */

/* ---- Red-0 (R=0) ---- */
#define BLINK_FG_PITCH_BLACK         "\033[5;38;5;16m"
#define BLINK_FG_DARK_NAVY           "\033[5;38;5;17m"
#define BLINK_FG_DARK_BLUE           "\033[5;38;5;18m"
#define BLINK_FG_MEDIUM_BLUE         "\033[5;38;5;19m"
#define BLINK_FG_ROYAL_BLUE          "\033[5;38;5;20m"
#define BLINK_FG_ELECTRIC_BLUE       "\033[5;38;5;21m"

#define BLINK_FG_DARK_GREEN          "\033[5;38;5;22m"
#define BLINK_FG_DEEP_TEAL           "\033[5;38;5;23m"
#define BLINK_FG_DARK_OCEAN          "\033[5;38;5;24m"
#define BLINK_FG_STEEL_BLUE          "\033[5;38;5;25m"
#define BLINK_FG_DODGER_BLUE         "\033[5;38;5;26m"
#define BLINK_FG_AZURE               "\033[5;38;5;27m"

#define BLINK_FG_FOREST_GREEN        "\033[5;38;5;28m"
#define BLINK_FG_SEA_GREEN           "\033[5;38;5;29m"
#define BLINK_FG_DARK_CYAN           "\033[5;38;5;30m"
#define BLINK_FG_CERULEAN            "\033[5;38;5;31m"
#define BLINK_FG_CORNFLOWER_BLUE     "\033[5;38;5;32m"
#define BLINK_FG_BRILLIANT_BLUE      "\033[5;38;5;33m"

#define BLINK_FG_EMERALD             "\033[5;38;5;34m"
#define BLINK_FG_JADE                "\033[5;38;5;35m"
#define BLINK_FG_PERSIAN_GREEN       "\033[5;38;5;36m"
#define BLINK_FG_MEDIUM_CYAN         "\033[5;38;5;37m"
#define BLINK_FG_DEEP_SKY_BLUE       "\033[5;38;5;38m"
#define BLINK_FG_VIVID_SKY_BLUE      "\033[5;38;5;39m"

#define BLINK_FG_BRIGHT_GREEN        "\033[5;38;5;40m"
#define BLINK_FG_SPRING_GREEN        "\033[5;38;5;41m"
#define BLINK_FG_MEDIUM_SPRING_GREEN "\033[5;38;5;42m"
#define BLINK_FG_MEDIUM_AQUAMARINE   "\033[5;38;5;43m"
#define BLINK_FG_TURQUOISE           "\033[5;38;5;44m"
#define BLINK_FG_ELECTRIC_CYAN       "\033[5;38;5;45m"

#define BLINK_FG_NEON_GREEN          "\033[5;38;5;46m"
#define BLINK_FG_MINT_GREEN          "\033[5;38;5;47m"
#define BLINK_FG_LIGHT_SPRING_GREEN  "\033[5;38;5;48m"
#define BLINK_FG_AQUAMARINE          "\033[5;38;5;49m"
#define BLINK_FG_LIGHT_AQUA          "\033[5;38;5;50m"
#define BLINK_FG_VIVID_CYAN          "\033[5;38;5;51m"

/* ---- Red-1 (R=95) ---- */
#define BLINK_FG_DARK_MAROON         "\033[5;38;5;52m"
#define BLINK_FG_DARK_PURPLE         "\033[5;38;5;53m"
#define BLINK_FG_INDIGO              "\033[5;38;5;54m"
#define BLINK_FG_DARK_VIOLET         "\033[5;38;5;55m"
#define BLINK_FG_BLUE_VIOLET         "\033[5;38;5;56m"
#define BLINK_FG_VIVID_VIOLET        "\033[5;38;5;57m"

#define BLINK_FG_DARK_OLIVE          "\033[5;38;5;58m"
#define BLINK_FG_DIM_GRAY            "\033[5;38;5;59m"
#define BLINK_FG_SLATE_GRAY_BLUE     "\033[5;38;5;60m"
#define BLINK_FG_SLATE_BLUE          "\033[5;38;5;61m"
#define BLINK_FG_MEDIUM_SLATE_BLUE   "\033[5;38;5;62m"
#define BLINK_FG_LIGHT_SLATE_BLUE    "\033[5;38;5;63m"

#define BLINK_FG_DARK_CHARTREUSE     "\033[5;38;5;64m"
#define BLINK_FG_FERN_GREEN          "\033[5;38;5;65m"
#define BLINK_FG_CADET_BLUE          "\033[5;38;5;66m"
#define BLINK_FG_AIR_FORCE_BLUE      "\033[5;38;5;67m"
#define BLINK_FG_PERIWINKLE          "\033[5;38;5;68m"
#define BLINK_FG_CORNFLOWER          "\033[5;38;5;69m"

#define BLINK_FG_AVOCADO             "\033[5;38;5;70m"
#define BLINK_FG_MEDIUM_SEA_GREEN    "\033[5;38;5;71m"
#define BLINK_FG_OCEAN_GREEN         "\033[5;38;5;72m"
#define BLINK_FG_CADET_TEAL          "\033[5;38;5;73m"
#define BLINK_FG_PICTON_BLUE         "\033[5;38;5;74m"
#define BLINK_FG_MALIBU_BLUE         "\033[5;38;5;75m"

#define BLINK_FG_CHARTREUSE_GREEN    "\033[5;38;5;76m"
#define BLINK_FG_LIGHT_GREEN         "\033[5;38;5;77m"
#define BLINK_FG_PASTEL_GREEN        "\033[5;38;5;78m"
#define BLINK_FG_SEAFOAM             "\033[5;38;5;79m"
#define BLINK_FG_SKY_CYAN            "\033[5;38;5;80m"
#define BLINK_FG_LIGHT_CORNFLOWER    "\033[5;38;5;81m"

#define BLINK_FG_LAWN_GREEN          "\033[5;38;5;82m"
#define BLINK_FG_PALE_GREEN          "\033[5;38;5;83m"
#define BLINK_FG_LIGHT_PASTEL_GREEN  "\033[5;38;5;84m"
#define BLINK_FG_MINT                "\033[5;38;5;85m"
#define BLINK_FG_PALE_AQUA           "\033[5;38;5;86m"
#define BLINK_FG_ICE_BLUE            "\033[5;38;5;87m"

/* ---- Red-2 (R=135) ---- */
#define BLINK_FG_BLOOD_RED           "\033[5;38;5;88m"
#define BLINK_FG_DARK_MAGENTA        "\033[5;38;5;89m"
#define BLINK_FG_DEEP_MAGENTA        "\033[5;38;5;90m"
#define BLINK_FG_DARK_ORCHID         "\033[5;38;5;91m"
#define BLINK_FG_MEDIUM_VIOLET       "\033[5;38;5;92m"
#define BLINK_FG_VIVID_PURPLE        "\033[5;38;5;93m"

#define BLINK_FG_DARK_GOLDENROD      "\033[5;38;5;94m"
#define BLINK_FG_ROSY_BROWN          "\033[5;38;5;95m"
#define BLINK_FG_MAUVE               "\033[5;38;5;96m"
#define BLINK_FG_MEDIUM_PURPLE       "\033[5;38;5;97m"
#define BLINK_FG_HELIOTROPE          "\033[5;38;5;98m"
#define BLINK_FG_LAVENDER_BLUE       "\033[5;38;5;99m"

#define BLINK_FG_DARK_KHAKI          "\033[5;38;5;100m"
#define BLINK_FG_KHAKI_GREEN         "\033[5;38;5;101m"
#define BLINK_FG_BATTLESHIP_GRAY     "\033[5;38;5;102m"
#define BLINK_FG_COOL_GRAY           "\033[5;38;5;103m"
#define BLINK_FG_LIGHT_PERIWINKLE    "\033[5;38;5;104m"
#define BLINK_FG_LIGHT_LAVENDER      "\033[5;38;5;105m"

#define BLINK_FG_OLIVE_DRAB          "\033[5;38;5;106m"
#define BLINK_FG_ASPARAGUS           "\033[5;38;5;107m"
#define BLINK_FG_SAGE_GREEN          "\033[5;38;5;108m"
#define BLINK_FG_PEWTER_BLUE         "\033[5;38;5;109m"
#define BLINK_FG_CAROLINA_BLUE       "\033[5;38;5;110m"
#define BLINK_FG_BABY_BLUE           "\033[5;38;5;111m"

#define BLINK_FG_YELLOW_GREEN        "\033[5;38;5;112m"
#define BLINK_FG_PISTACHIO           "\033[5;38;5;113m"
#define BLINK_FG_GRANNY_SMITH        "\033[5;38;5;114m"
#define BLINK_FG_PEARL_AQUA          "\033[5;38;5;115m"
#define BLINK_FG_POWDER_BLUE         "\033[5;38;5;116m"
#define BLINK_FG_COLUMBIA_BLUE       "\033[5;38;5;117m"

#define BLINK_FG_BRIGHT_CHARTREUSE   "\033[5;38;5;118m"
#define BLINK_FG_VIVID_LIME          "\033[5;38;5;119m"
#define BLINK_FG_SCREAMIN_GREEN      "\033[5;38;5;120m"
#define BLINK_FG_CELADON             "\033[5;38;5;121m"
#define BLINK_FG_PALE_TURQUOISE      "\033[5;38;5;122m"
#define BLINK_FG_ELECTRIC_ICE        "\033[5;38;5;123m"

/* ---- Red-3 (R=175) ---- */
#define BLINK_FG_FIREBRICK           "\033[5;38;5;124m"
#define BLINK_FG_ROSE_RED            "\033[5;38;5;125m"
#define BLINK_FG_MEDIUM_MAGENTA      "\033[5;38;5;126m"
#define BLINK_FG_DARK_FUCHSIA        "\033[5;38;5;127m"
#define BLINK_FG_PURPLE_VIOLET       "\033[5;38;5;128m"
#define BLINK_FG_ELECTRIC_PURPLE     "\033[5;38;5;129m"

#define BLINK_FG_BRONZE              "\033[5;38;5;130m"
#define BLINK_FG_COPPER_ROSE         "\033[5;38;5;131m"
#define BLINK_FG_ORCHID_PINK         "\033[5;38;5;132m"
#define BLINK_FG_PLUM                "\033[5;38;5;133m"
#define BLINK_FG_RICH_LILAC          "\033[5;38;5;134m"
#define BLINK_FG_MEDIUM_ORCHID       "\033[5;38;5;135m"

#define BLINK_FG_DARK_GOLD           "\033[5;38;5;136m"
#define BLINK_FG_CAMEL               "\033[5;38;5;137m"
#define BLINK_FG_DUSTY_ROSE          "\033[5;38;5;138m"
#define BLINK_FG_LILAC               "\033[5;38;5;139m"
#define BLINK_FG_WISTERIA            "\033[5;38;5;140m"
#define BLINK_FG_BRIGHT_LILAC        "\033[5;38;5;141m"

#define BLINK_FG_CITRON              "\033[5;38;5;142m"
#define BLINK_FG_DARK_TAN            "\033[5;38;5;143m"
#define BLINK_FG_WARM_GRAY           "\033[5;38;5;144m"
#define BLINK_FG_SILVER_CHALICE      "\033[5;38;5;145m"
#define BLINK_FG_LIGHT_STEEL_BLUE    "\033[5;38;5;146m"
#define BLINK_FG_SOFT_LAVENDER       "\033[5;38;5;147m"

#define BLINK_FG_PEAR_GREEN          "\033[5;38;5;148m"
#define BLINK_FG_DOLLAR_BILL         "\033[5;38;5;149m"
#define BLINK_FG_CELADON_GREEN       "\033[5;38;5;150m"
#define BLINK_FG_PALE_GREEN_MIST     "\033[5;38;5;151m"
#define BLINK_FG_LIGHT_BLUE_GRAY     "\033[5;38;5;152m"
#define BLINK_FG_PALE_CORNFLOWER     "\033[5;38;5;153m"

#define BLINK_FG_VIVID_CHARTREUSE    "\033[5;38;5;154m"
#define BLINK_FG_LIME_FIZZ           "\033[5;38;5;155m"
#define BLINK_FG_PALE_LIME           "\033[5;38;5;156m"
#define BLINK_FG_MINT_CREAM          "\033[5;38;5;157m"
#define BLINK_FG_AERO_BLUE           "\033[5;38;5;158m"
#define BLINK_FG_PALE_SKY_BLUE       "\033[5;38;5;159m"

/* ---- Red-4 (R=215) ---- */
#define BLINK_FG_CRIMSON             "\033[5;38;5;160m"
#define BLINK_FG_RUBY                "\033[5;38;5;161m"
#define BLINK_FG_DEEP_PINK           "\033[5;38;5;162m"
#define BLINK_FG_HOT_PINK            "\033[5;38;5;163m"
#define BLINK_FG_MAGENTA_PINK        "\033[5;38;5;164m"
#define BLINK_FG_ELECTRIC_MAGENTA    "\033[5;38;5;165m"

#define BLINK_FG_DARK_ORANGE         "\033[5;38;5;166m"
#define BLINK_FG_INDIAN_RED          "\033[5;38;5;167m"
#define BLINK_FG_BLUSH               "\033[5;38;5;168m"
#define BLINK_FG_CARNATION_PINK      "\033[5;38;5;169m"
#define BLINK_FG_ORCHID              "\033[5;38;5;170m"
#define BLINK_FG_VIOLET              "\033[5;38;5;171m"

#define BLINK_FG_TANGERINE           "\033[5;38;5;172m"
#define BLINK_FG_SANDY_BROWN         "\033[5;38;5;173m"
#define BLINK_FG_PEACH               "\033[5;38;5;174m"
#define BLINK_FG_PINK                "\033[5;38;5;175m"
#define BLINK_FG_LIGHT_ORCHID        "\033[5;38;5;176m"
#define BLINK_FG_BRIGHT_VIOLET       "\033[5;38;5;177m"

#define BLINK_FG_AMBER               "\033[5;38;5;178m"
#define BLINK_FG_BUFF                "\033[5;38;5;179m"
#define BLINK_FG_NAVAJO_WHITE        "\033[5;38;5;180m"
#define BLINK_FG_MISTY_ROSE          "\033[5;38;5;181m"
#define BLINK_FG_THISTLE             "\033[5;38;5;182m"
#define BLINK_FG_LIGHT_WISTERIA      "\033[5;38;5;183m"

#define BLINK_FG_GOLD                "\033[5;38;5;184m"
#define BLINK_FG_KHAKI               "\033[5;38;5;185m"
#define BLINK_FG_PALE_GOLD           "\033[5;38;5;186m"
#define BLINK_FG_WHEAT               "\033[5;38;5;187m"
#define BLINK_FG_PLATINUM            "\033[5;38;5;188m"
#define BLINK_FG_LAVENDER_MIST       "\033[5;38;5;189m"

#define BLINK_FG_ELECTRIC_LIME       "\033[5;38;5;190m"
#define BLINK_FG_HONEYDEW_GREEN      "\033[5;38;5;191m"
#define BLINK_FG_PALE_CHARTREUSE     "\033[5;38;5;192m"
#define BLINK_FG_TEA_GREEN           "\033[5;38;5;193m"
#define BLINK_FG_HONEYDEW            "\033[5;38;5;194m"
#define BLINK_FG_ALICE_BLUE          "\033[5;38;5;195m"

/* ---- Red-5 (R=255) ---- */
#define BLINK_FG_VIVID_RED           "\033[5;38;5;196m"
#define BLINK_FG_TORCH_RED           "\033[5;38;5;197m"
#define BLINK_FG_RADICAL_RED         "\033[5;38;5;198m"
#define BLINK_FG_WILD_STRAWBERRY     "\033[5;38;5;199m"
#define BLINK_FG_SHOCKING_PINK       "\033[5;38;5;200m"
#define BLINK_FG_FUCHSIA             "\033[5;38;5;201m"

#define BLINK_FG_ORANGE_RED          "\033[5;38;5;202m"
#define BLINK_FG_CORAL               "\033[5;38;5;203m"
#define BLINK_FG_WATERMELON          "\033[5;38;5;204m"
#define BLINK_FG_STRAWBERRY          "\033[5;38;5;205m"
#define BLINK_FG_ROSE_PINK           "\033[5;38;5;206m"
#define BLINK_FG_ULTRA_PINK          "\033[5;38;5;207m"

#define BLINK_FG_ORANGE              "\033[5;38;5;208m"
#define BLINK_FG_SALMON              "\033[5;38;5;209m"
#define BLINK_FG_LIGHT_CORAL         "\033[5;38;5;210m"
#define BLINK_FG_FLAMINGO            "\033[5;38;5;211m"
#define BLINK_FG_COTTON_CANDY        "\033[5;38;5;212m"
#define BLINK_FG_BRIGHT_PINK         "\033[5;38;5;213m"

#define BLINK_FG_GOLDEN_YELLOW       "\033[5;38;5;214m"
#define BLINK_FG_MACARONI            "\033[5;38;5;215m"
#define BLINK_FG_APRICOT             "\033[5;38;5;216m"
#define BLINK_FG_LIGHT_PINK          "\033[5;38;5;217m"
#define BLINK_FG_CHERRY_BLOSSOM      "\033[5;38;5;218m"
#define BLINK_FG_LIGHT_FUCHSIA       "\033[5;38;5;219m"

#define BLINK_FG_BRIGHT_GOLD         "\033[5;38;5;220m"
#define BLINK_FG_DANDELION           "\033[5;38;5;221m"
#define BLINK_FG_CREAM               "\033[5;38;5;222m"
#define BLINK_FG_PEACH_PUFF          "\033[5;38;5;223m"
#define BLINK_FG_BABY_PINK           "\033[5;38;5;224m"
#define BLINK_FG_PALE_ROSE           "\033[5;38;5;225m"

#define BLINK_FG_VIVID_YELLOW        "\033[5;38;5;226m"
#define BLINK_FG_LEMON               "\033[5;38;5;227m"
#define BLINK_FG_CANARY              "\033[5;38;5;228m"
#define BLINK_FG_CREAM_YELLOW        "\033[5;38;5;229m"
#define BLINK_FG_CORNSILK            "\033[5;38;5;230m"
#define BLINK_FG_SNOW_WHITE          "\033[5;38;5;231m"

/* ================================================================
 *  SECTION 8 — GRAYSCALE FOREGROUND SHADES (232-255)
 *  24 steps from near-black (#080808) to near-white (#EEEEEE)
 * ================================================================ */

#define FG_SHADE_01                  "\033[38;5;232m" /* #080808 near-black     */
#define FG_SHADE_02                  "\033[38;5;233m" /* #121212               */
#define FG_SHADE_03                  "\033[38;5;234m" /* #1C1C1C dark charcoal */
#define FG_SHADE_04                  "\033[38;5;235m" /* #262626 charcoal      */
#define FG_SHADE_05                  "\033[38;5;236m" /* #303030               */
#define FG_SHADE_06                  "\033[38;5;237m" /* #3A3A3A               */
#define FG_SHADE_07                  "\033[38;5;238m" /* #444444 dark gray     */
#define FG_SHADE_08                  "\033[38;5;239m" /* #4E4E4E               */
#define FG_SHADE_09                  "\033[38;5;240m" /* #585858               */
#define FG_SHADE_10                  "\033[38;5;241m" /* #626262               */
#define FG_SHADE_11                  "\033[38;5;242m" /* #6C6C6C               */
#define FG_SHADE_12                  "\033[38;5;243m" /* #767676               */
#define FG_SHADE_13                  "\033[38;5;244m" /* #808080 medium gray   */
#define FG_SHADE_14                  "\033[38;5;245m" /* #8A8A8A               */
#define FG_SHADE_15                  "\033[38;5;246m" /* #949494               */
#define FG_SHADE_16                  "\033[38;5;247m" /* #9E9E9E               */
#define FG_SHADE_17                  "\033[38;5;248m" /* #A8A8A8               */
#define FG_SHADE_18                  "\033[38;5;249m" /* #B2B2B2               */
#define FG_SHADE_19                  "\033[38;5;250m" /* #BCBCBC light gray    */
#define FG_SHADE_20                  "\033[38;5;251m" /* #C6C6C6               */
#define FG_SHADE_21                  "\033[38;5;252m" /* #D0D0D0               */
#define FG_SHADE_22                  "\033[38;5;253m" /* #DADADA               */
#define FG_SHADE_23                  "\033[38;5;254m" /* #E4E4E4               */
#define FG_SHADE_24                  "\033[38;5;255m" /* #EEEEEE near-white    */

/* ================================================================
 *  SECTION 9 — GRAYSCALE BACKGROUND SHADES (232-255)
 * ================================================================ */

#define BG_SHADE_01                  "\033[48;5;232m"
#define BG_SHADE_02                  "\033[48;5;233m"
#define BG_SHADE_03                  "\033[48;5;234m"
#define BG_SHADE_04                  "\033[48;5;235m"
#define BG_SHADE_05                  "\033[48;5;236m"
#define BG_SHADE_06                  "\033[48;5;237m"
#define BG_SHADE_07                  "\033[48;5;238m"
#define BG_SHADE_08                  "\033[48;5;239m"
#define BG_SHADE_09                  "\033[48;5;240m"
#define BG_SHADE_10                  "\033[48;5;241m"
#define BG_SHADE_11                  "\033[48;5;242m"
#define BG_SHADE_12                  "\033[48;5;243m"
#define BG_SHADE_13                  "\033[48;5;244m"
#define BG_SHADE_14                  "\033[48;5;245m"
#define BG_SHADE_15                  "\033[48;5;246m"
#define BG_SHADE_16                  "\033[48;5;247m"
#define BG_SHADE_17                  "\033[48;5;248m"
#define BG_SHADE_18                  "\033[48;5;249m"
#define BG_SHADE_19                  "\033[48;5;250m"
#define BG_SHADE_20                  "\033[48;5;251m"
#define BG_SHADE_21                  "\033[48;5;252m"
#define BG_SHADE_22                  "\033[48;5;253m"
#define BG_SHADE_23                  "\033[48;5;254m"
#define BG_SHADE_24                  "\033[48;5;255m"

/* ================================================================
 *  SECTION 10 — GRAYSCALE BLINKING FOREGROUND (232-255)
 * ================================================================ */

#define BLINK_FG_SHADE_01            "\033[5;38;5;232m"
#define BLINK_FG_SHADE_02            "\033[5;38;5;233m"
#define BLINK_FG_SHADE_03            "\033[5;38;5;234m"
#define BLINK_FG_SHADE_04            "\033[5;38;5;235m"
#define BLINK_FG_SHADE_05            "\033[5;38;5;236m"
#define BLINK_FG_SHADE_06            "\033[5;38;5;237m"
#define BLINK_FG_SHADE_07            "\033[5;38;5;238m"
#define BLINK_FG_SHADE_08            "\033[5;38;5;239m"
#define BLINK_FG_SHADE_09            "\033[5;38;5;240m"
#define BLINK_FG_SHADE_10            "\033[5;38;5;241m"
#define BLINK_FG_SHADE_11            "\033[5;38;5;242m"
#define BLINK_FG_SHADE_12            "\033[5;38;5;243m"
#define BLINK_FG_SHADE_13            "\033[5;38;5;244m"
#define BLINK_FG_SHADE_14            "\033[5;38;5;245m"
#define BLINK_FG_SHADE_15            "\033[5;38;5;246m"
#define BLINK_FG_SHADE_16            "\033[5;38;5;247m"
#define BLINK_FG_SHADE_17            "\033[5;38;5;248m"
#define BLINK_FG_SHADE_18            "\033[5;38;5;249m"
#define BLINK_FG_SHADE_19            "\033[5;38;5;250m"
#define BLINK_FG_SHADE_20            "\033[5;38;5;251m"
#define BLINK_FG_SHADE_21            "\033[5;38;5;252m"
#define BLINK_FG_SHADE_22            "\033[5;38;5;253m"
#define BLINK_FG_SHADE_23            "\033[5;38;5;254m"
#define BLINK_FG_SHADE_24            "\033[5;38;5;255m"

/* ================================================================
 *  SECTION 11 — CONVENIENCE / UTILITY MACROS
 *
 *  Use these when you need a color by its raw index number,
 *  or to build runtime color strings.
 * ================================================================ */

/*
 * Compile-time macros  (argument MUST be a literal integer)
 *
 *   printf(FG_ID(208) "orange text" RESET);
 *   printf(BG_ID(21)  "blue background" RESET);
 *   printf(BLINK_FG_ID(196) "blinking red" RESET);
 */
#define _CC_STR(x)    #x
#define _CC_XSTR(x)   _CC_STR(x)

#define FG_ID(n)       "\033[38;5;" _CC_XSTR(n) "m"
#define BG_ID(n)       "\033[48;5;" _CC_XSTR(n) "m"
#define BLINK_FG_ID(n) "\033[5;38;5;" _CC_XSTR(n) "m"
#define BLINK_BG_ID(n) "\033[5;48;5;" _CC_XSTR(n) "m"

/*
 * Runtime helpers  (fill a char buffer; n is any int 0-255)
 *
 *   char buf[20];
 *   fg_color(buf, 208);
 *   printf("%sorange%s\n", buf, RESET);
 */
#include <stdio.h>
static inline void fg_color(char *buf, int n)
{ sprintf(buf, "\033[38;5;%dm", n); }

static inline void bg_color(char *buf, int n)
{ sprintf(buf, "\033[48;5;%dm", n); }

static inline void blink_fg_color(char *buf, int n)
{ sprintf(buf, "\033[5;38;5;%dm", n); }

#endif /* CUSTOM_COLORS_H */
