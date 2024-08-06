cmake_minimum_required(VERSION 3.28)
project(VehicleSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(VehicleSystem main.cpp
        src/Motorcycle.cpp
        src/Truck.cpp
        src/Vehicle.cpp
        src/Car.cpp
        src/ServiceStation.cpp
        include/Car.h
        include/Motorcycle.h
        include/Truck.h
        include/Vehicle.h
        include/ServiceStation.h)
