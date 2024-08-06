# Vehicle Management System

## Overview

This project is an integrated vehicle management system developed in C++. It demonstrates advanced C++ concepts, including encapsulation, inheritance, polymorphism, and operator overloading. The system manages various types of vehicles and supports multiple service facilities.

## Project Structure

- **`include/`**: Header files for the project.
  - `Vehicle.h`: Base class `Vehicle` and `ServiceType` enum.
  - `Car.h`: Derived class `Car`.
  - `Truck.h`: Derived class `Truck`.
  - `Motorcycle.h`: Derived class `Motorcycle`.
  - `ServiceStation.h`: Class `ServiceStation` for managing vehicle services.
- **`src/`**: Source files with implementations.
  - `Vehicle.cpp`: Implementation of the `Vehicle` class.
  - `Car.cpp`: Implementation of the `Car` class.
  - `Truck.cpp`: Implementation of the `Truck` class.
  - `Motorcycle.cpp`: Implementation of the `Motorcycle` class.
  - `ServiceStation.cpp`: Implementation of the `ServiceStation` class.
- **`main.cpp`**: Entry point of the program.
- **`CMakeLists.txt`**: CMake configuration file for building the project.

## Dependencies

To build and run this project, ensure you have the following dependencies installed:

- **CMake**: A cross-platform build system generator. Download from [cmake.org](https://cmake.org/download/).
- **C++ Compiler**: Compatible compilers include:
  - **g++**: Available on Linux, macOS, and Windows (via MinGW).
  - **clang++**: Available on macOS and Linux.
  - **MSVC**: Microsoft Visual C++ compiler, available with Visual Studio on Windows.

## Installation and Setup

### Step 1: Clone the Repository

First, clone the repository to your local machine:

```bash
git clone https://github.com/FriedmanChani/VehicleManagementSystem.git
cd VehicleManagementSystem

# Installation Instructions

## Step 2: Install CMake and a C++ Compiler

To build the Vehicle Management System, you need to have CMake and a compatible C++ compiler installed on your system. Follow the instructions below based on your operating system:

### On Windows

1. **Install CMake**:
   - Download the CMake installer from [CMake's website](https://cmake.org/download/).
   - Run the installer and follow the on-screen instructions.
   - During installation, ensure that you add CMake to the system PATH.

2. **Install MinGW or Visual Studio**:
   - **MinGW**:
     - Download the MinGW installer from the [MinGW website](http://www.mingw.org/).
     - Run the installer and select `gcc` as the component to install.
     - Add the MinGW `bin` directory to your system PATH.
   - **Visual Studio**:
     - Download and install Visual Studio Community Edition from [Visual Studio's website](https://visualstudio.microsoft.com/).
     - During installation, select the "Desktop development with C++" workload.

### On macOS

1. **Install Homebrew** (if not already installed):
   - Open a Terminal window and execute the following command:
     ```bash
     /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
     ```

2. **Install CMake**:
   - Use Homebrew to install CMake by running:
     ```bash
     brew install cmake
     ```

3. **Install Xcode Command Line Tools**:
   - Open a Terminal window and run:
     ```bash
     xcode-select --install
     ```
   - Follow the on-screen instructions to complete the installation.

### On Linux

1. **Install CMake**:
   - Open a terminal and use the package manager to install CMake. For example, on Debian-based systems (like Ubuntu), run:
     ```bash
     sudo apt-get update
     sudo apt-get install cmake
     ```

2. **Install g++**:
   - Install the GNU Compiler Collection (GCC) by running:
     ```bash
     sudo apt-get install g++
     ```

3. **Verify Installation**:
   - Check that `cmake` and `g++` are installed correctly by running:
     ```bash
     cmake --version
     g++ --version
     ```

   - Both commands should display version information, confirming the installations.

---

Once you have installed CMake and a C++ compiler, you can proceed to build and run the Vehicle Management System project.
