# ⚡ mini-cli-nmap

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/undercraft2206/mini-cli-nmap?style=for-the-badge)](https://github.com/undercraft2206/mini-cli-nmap/stargazers)

![Language](https://img.shields.io/github/languages/top/undercraft2206/mini-cli-nmap?style=for-the-badge&color=blue)

**A lightweight, C-based command-line interface for simplified Nmap network scanning.**

</div>

## 📖 Overview

The `mini-cli-nmap` project provides a basic command-line tool written in C that wraps common Nmap functionalities, making network scanning tasks more accessible through a simplified interface. It's designed for users who need a quick way to perform host discovery, port scanning, and other essential Nmap operations without memorizing complex Nmap command syntax.

This tool aims to abstract away the intricate details of Nmap commands, offering a streamlined experience for common use cases.

## ✨ Features

-   🎯 **Simplified Nmap Execution**: Execute Nmap commands with an easier-to-remember syntax.
-   🔍 **Host Discovery**: Quickly identify active hosts on a network.
-   ⚡ **Port Scanning**: Scan for open ports on target systems using various methods.
-   🛡️ **OS Detection**: Attempt to detect the operating system of the target host.
-   🔄 **Service Version Detection**: Identify the versions of services running on open ports.
-   🌐 **Target Flexibility**: Specify targets as IP addresses or hostnames.

## 🛠️ Tech Stack

**Core Language:**

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

**External Dependency:**

![Nmap](https://img.shields.io/badge/Nmap-red?style=for-the-badge&logo=nmap&logoColor=white)

## 🚀 Quick Start

### Prerequisites

Before you begin, ensure you have the following installed on your system:

-   **C Compiler**: A C compiler such as GCC or Clang.
    -   **Linux/macOS**: Typically installed by default or via package manager (`build-essential` on Debian/Ubuntu, Xcode Command Line Tools on macOS).
    -   **Windows**: MinGW-w64 (for GCC) or MSVC (from Visual Studio).
-   **Nmap**: The Nmap network scanner must be installed and accessible in your system's PATH.
    -   [Download Nmap](https://nmap.org/download)

### Installation

1.  **Clone the repository**
    ```bash
    git clone https://github.com/undercraft2206/mini-cli-nmap.git
    cd mini-cli-nmap
    ```

2.  **Compile the source code**

    #### Linux / macOS
    ```bash
    gcc -o nmap_mini_CLI nmap_mini_CLI.c
    chmod +x nmap_mini_CLI
    ```

    #### Windows (using MinGW-w64/GCC)
    ```bash
    gcc -o nmap_mini_CLI.exe nmap_mini_CLI.c
    ```
    *Note: For Windows, ensure `gcc` is in your PATH. You might need to add `./` before the executable name when running in PowerShell/CMD, e.g., `./nmap_mini_CLI.exe`.*

### Basic Usage

After successful compilation, you can run the CLI tool. For simplicity, you might move the compiled executable to a directory included in your system's PATH, or always run it from its compiled location.

```bash

# Example: Run from current directory
./nmap_mini_CLI [command] [target_ip_or_hostname] [options]
```

## 📖 Usage

The `mini-cli-nmap` tool provides several commands to perform common Nmap scans.

### General Syntax

```bash
./nmap_mini_CLI
```

## 📁 Project Structure

bash```
mini-cli-nmap/
├── nmap_mini_CStructure

```
mini-cli-nmap/
├── nmap_mini_CLI.c   # Main C source file for the CLI tool
├── linux/            # Placeholder for Linux-specific build scripts or binaries (TODO: Populate if needed)
├── w11/              # Placeholder for Windows 11-specific build scripts or binaries (TODO: Populate if needed)
└── README.md         # This documentation file
```

### Development Setup for Contributors

-   Ensure you have a C compiler (GCC/Clang) and Nmap installed.
-   The development workflow involves modifying `nmap_mini_CLI.c` and recompiling.

### Running Tests

There are no formal automated tests currently, but you can manually test by compiling your changes and running the executable with various commands and targets.

```bash

# Recompile after making changes
gcc -o nmap_mini_CLI nmap_mini_CLI.c

# Test your changes
./nmap_mini_CLI <your_test_command> <target>
```

## 🙏 Acknowledgments

-   **Nmap**: This tool is built as a wrapper around the powerful Nmap network scanner. Many thanks to the Nmap project and its contributors.

## 📞 Support & Contact

-   🐛 Issues: Feel free to report any issues or suggest features via [GitHub Issues](https://github.com/undercraft2206/mini-cli-nmap/issues).

---

<div align="center">

**⭐ Star this repo if you find it helpful!**

Made with ❤️ by [undercraft2206](https://github.com/undercraft2206)

Made with https://readmestudio.zenui.net/editor
</div>

