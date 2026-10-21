/*
 * Copyright (C) 2026 Ahmad
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */







#ifndef SETGOVERNOR_H
#define SETGOVERNOR_H

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdlib.h>

#define GOVERNOR0 "/sys/devices/system/cpu/cpufreq/policy0/scaling_governor"
#define GOVERNOR6 "/sys/devices/system/cpu/cpufreq/policy6/scaling_governor"
#define GPUGOVERNOR "/sys/class/devfreq/13040000.mali/governor"
#define GPUFREQ_MIN "/sys/class/devfreq/13040000.mali/min_freq"
#define IOSCHEDULAR "/sys/block/mmcblk0/queue/scheduler"
#define SYS_READ_KB "/sys/block/mmcblk0/queue/read_ahead_kb"
#define ZRAM "/sys/block/zram0/disksize"
#define SWAP "/proc/sys/vm/swappiness"
#define SWAP_ALG "/sys/block/zram0/comp_algorithm"

/*
This function sets the governor of the cpu both policies
*/

void setgovernor(const char *governor) {
	chmod(GOVERNOR0, (mode_t)0777);
	FILE *f0 = fopen(GOVERNOR0, "r+");
	if (f0 != NULL) {
		fprintf(f0, "%s", governor);
		fclose(f0);
		chmod(GOVERNOR0, (mode_t)0444);
	}
	else {
		perror("Unable to oepn\n");
		return;
	}
	chmod(GOVERNOR6, (mode_t)0777);
	FILE *f6 = fopen(GOVERNOR6, "r+");
	if (f6 != NULL) {
		fprintf(f6, "%s", governor);
		fclose(f6);
		chmod(GOVERNOR6, (mode_t)0444);
	}
	else {
		perror("unable to open\n");
		return;
	}
}

/*
This function sets the GPU governor of the GPU for mtk only.
*/
void setgpugovernor(const char *gpugov) {
	chmod(GPUGOVERNOR, (mode_t)0777);
	FILE *f1 = fopen(GPUGOVERNOR, "r+");
	if (f1 != NULL) {
		fprintf(f1, "%s", gpugov);
		fclose(f1);
		chmod(GPUGOVERNOR, (mode_t)0444);
	}
	else {
		perror("unanle to open\n");
		return;
	}
}

//This function sets the minmumum GPU freqency of the GPU for mtk only
void setgpufreq(int freq) {
	chmod(GPUFREQ_MIN, (mode_t)0777);
	FILE *f1 = fopen(GPUFREQ_MIN, "r+");
	if (f1 != NULL) {
		fprintf(f1, "%d", freq);
		fclose(f1);
		chmod(GPUFREQ_MIN, (mode_t)0444);
	}
	else {
		perror("unanle to open\n");
		return;
	}
}

/*
this function sets the I/O schedular of the Android usually kyber, nq-deadline, bpf, none
*/
void setschedular(const char *schedular) {
	chmod(IOSCHEDULAR, (mode_t)0777);
	FILE *f1 = fopen(IOSCHEDULAR, "r+");
	if (f1 != NULL) {
		fprintf(f1, "%s", schedular);
		fclose(f1);
		chmod(IOSCHEDULAR, (mode_t)0444);
	}
	else {
		perror("unable to open\n");
		return;
	}
}

void setsyskb(int kb) {
	chmod(SYS_READ_KB, (mode_t)0777);
	FILE *rak = fopen(SYS_READ_KB, "r+");
	if (rak != NULL) {
		fprintf(rak, "%d", kb);
		fclose(rak);
		chmod(SYS_READ_KB, (mode_t)0444);
	}
	else {
		perror("unable to open\n");
		return;
	}
}

void setzram(uint64_t zram_size) {
    FILE *f = fopen(ZRAM, "r+");
    if (f != NULL) {
	    fprintf(f, "%lu", zram_size);
	    fclose(f);
    }
    else {
	    perror("unanle to open zram\n");
	    return;
    }
}

void setswap(int swap) {
	FILE *f = fopen(SWAP, "r+");
	if (f != NULL) {
		fprintf(f, "%d", swap);
		fclose(f);
	}
	else {
		perror("unable to open swapiness\n");
		return;
	}
}

void setzramalg(const char *alg) {

	char cmd[128];
    	snprintf(cmd, sizeof(cmd), "echo '%s' > /sys/block/zram0/comp_algorithm", alg);
    	system(cmd);
}
    



    


#endif /* SETGOVERNOR_H */

