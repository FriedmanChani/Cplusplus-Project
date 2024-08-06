# Vehicle Management System

## Overview

The Vehicle Management System is a C++ project that demonstrates complex object-oriented programming concepts such as encapsulation, inheritance, polymorphism, operator overloading, and more. It simulates real-world software development scenarios by managing different types of vehicles and supporting various service facilities.

## Features

- Manage different vehicle types such as Cars, Trucks, and Motorcycles.
- Support various services like Oil Change, Inspection, and Tire Rotation.
- Demonstrate advanced C++ concepts including namespaces, memory management, and polymorphism.

## Prerequisites

Before you begin, ensure you have met the following requirements:

- **CMake**: A cross-platform tool to manage the build process of software using a compiler-independent method.
- **C++ Compiler**: Compatible with C++11 or later.

## Installation and Build Instructions

Follow these steps to set up, build, and run the Vehicle Management System project.

### Step 1: Clone the Repository

1. Open a terminal/command prompt.
2. Navigate to the directory where you want to clone the project.
3. Run the following command to clone the repository:

```bash
git clone https://github.com/FriedmanChani/Vehicle-Management-System.git
cd VehicleManagementSystem

### Step 2: Install CMake and a C++ Compiler

Before building the Vehicle Management System, you need to install CMake and a C++ compiler. Follow the instructions below based on your operating system.

### Windows

1. **Install CMake**:
   - Download the CMake installer from the [CMake official website](https://cmake.org/download/).
   - Run the installer and follow the on-screen instructions.
   - Ensure you select the option to add CMake to the system PATH during installation.

2. **Install a C++ Compiler**:
   - You can choose between MinGW or Visual Studio for your compiler.
   
   **MinGW**:
   - Download the MinGW installer from the [MinGW website](http://www.mingw.org/).
   - Run the installer and select `gcc` as the component to install.
   - Add the MinGW `bin` directory to your system PATH.

   **Visual Studio**:
   - Download and install Visual Studio Community Edition from [Visual Studio's website](https://visualstudio.microsoft.com/).
   - During installation, select the "Desktop development with C++" workload.

### macOS

1. **Install Homebrew** (if not already installed):
   - Open Terminal and execute the following command:
     ```bash
     /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
     ```

2. **Install CMake**:
   - Use Homebrew to install CMake by running:
     ```bash
     brew install cmake
     ```

3. **Install Xcode Command Line Tools**:
   - Open Terminal and run:
     ```bash
     xcode-select --install
     ```
   - Follow the on-screen instructions to complete the installation.

### Linux

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

### Verification

- Ensure that both CMake and your chosen C++ compiler are correctly installed by checking their versions:
  ```bash
  cmake --version
  g++ --version  # Or the compiler you installed

### Step 3: Build the Project

Follow these instructions to build the Vehicle Management System project:

1. **Open a Terminal/Command Prompt**:
   - On **Windows**, open Command Prompt or PowerShell.
   - On **macOS** and **Linux**, open Terminal.

2. **Navigate to the Project Directory**:
   - Change to the directory where you cloned the Vehicle Management System repository.
   ```bash
   cd path/to/VehicleManagementSystem




##Create a Build Directory:

It is good practice to create a separate directory for build files to keep your source tree clean.
bash
mkdir build
cd build
Generate Build Files with CMake:

Run the following command to generate the necessary build files. This step configures the project based on the CMakeLists.txt file.
bash
cmake ..
This command uses the CMakeLists.txt located in the parent directory to generate makefiles or project files for your compiler.
###Compile the Project:

After generating the build files, compile the project using:
bash
cmake --build .
This command will compile the source code and create the executable file in the build directory.
##Running the Executable:

After the build process completes, you can run the compiled executable from the build directory.
##On Linux or macOS:
bash
./VehicleSystem

##On Windows:
bash
VehicleSystem.exe

##Cleaning Up:

If you want to clean the build artifacts and start fresh, you can run:
bash
cmake --build . --target clean
