# ApexTuner 🚀⚡

**ApexTuner** is a lightweight, high-performance command-line and interactive Terminal User Interface (TUI) utility written in pure C. Designed specifically for Android system optimization and deep power-user modifications, it enables instant adjustments to CPU scaling governors, GPU frequencies, I/O schedulers, ZRAM allocations, and swap parameters directly via Linux `sysfs` nodes.

---

## 🛠️ Features
* **Dual Execution Modes:** Run directly via CLI arguments for automated scripts, or use the interactive raw-mode TUI for seamless menu-driven control.
* **Granular Profile Mapping:** Instantly switch between pre-configured performance, balanced, and battery-saving profiles.
* **Low-Level Hardware Control:** Interacts directly with kernel interfaces (`cpufreq`, GPU frequency scaling, block layer schedulers, and ZRAM compression parameters).
* **ANSI Styled Terminal UI:** Custom-colored visual layout utilizing unbuffered POSIX terminal controls (`termios`) for blazing-fast performance without heavy GUI baggage.

---

## 📋 Quick Options & Menu Mapping

| Key / Arg | Profile Name | Target Configuration Details |
| :---: | :--- | :--- |
| **1** | **Performance** | Max clock speed, `performance` governor/GPU, `none` scheduler, 4GB ZRAM (`zstd`), maximum read-ahead |
| **2** | **Schedutil** | Dynamic scaling, `schedutil` governor, `simple_ondemand` GPU, `bfq` scheduler |
| **3** | **Powersave** | Battery saver, `powersave` governor/GPU, `mq-deadline` scheduler, low clock states |
| **4** | **Default** | OEM custom state (`sugov_ext` governor, `zstd` algorithm, balanced swaps) |
| **5** | **Conservative** | Smooth curve (`conservative` governor, `userspace` GPU, `kyber` scheduler) |
| **-h** | **Help Menu** | Displays usage syntax and configuration options |
| **q** | **Quit** | Safely restores terminal modes and exits the TUI |

---

## 🚀 Usage

### 1. Direct CLI Execution
Pass a numeric profile option directly as an argument to execute a specific tuning preset instantly:
```bash
./ApexTuner 1    # Engage Performance Mode
./ApexTuner 4    # Restore Default Policy
```

### 2. Interactive TUI Mode
Launch the utility without arguments to enter the interactive terminal management loop:
```bash
./ApexTuner
```

---

## ⚙️ Requirements & Environment
* **Root Privileges:** Modifying kernel parameters, CPU/GPU governors, and ZRAM configurations via `sysfs` requires root (`su`) access.
* **Compatibility:** Optimized for Linux-based environments and advanced Android setups (such as local custom chroot containers or Termux environments with proper root support).

---

## 📝 License
Distributed under the GNU PUBLIC License. See `LICENSE` for more information.
