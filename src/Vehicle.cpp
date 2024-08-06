//
// Created by Owner on 8/6/2024.
//
// Vehicle.cpp

#include "../include/Vehicle.h"

namespace VDMS {
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : VIN(vin), make(make), model(model), year(year) {
        ++vehicleCount;
    }

    Vehicle::~Vehicle() {
        --vehicleCount;
    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        ++vehicleCount;
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount;
    }
}

