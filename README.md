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
