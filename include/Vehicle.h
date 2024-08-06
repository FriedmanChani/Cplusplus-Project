//
// Created by Owner on 8/6/2024.
//

// Vehicle.h

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

namespace VDMS {

    enum class ServiceType {
        OilChange,
        Inspection,
        TireRotation
    };

    class Vehicle {
    protected:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount; // Static member

    public:
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        virtual ~Vehicle();
        Vehicle(const Vehicle& other);

        virtual void displayInfo() const = 0;
        virtual double estimateServiceCost(ServiceType service) const = 0;

        static int getVehicleCount();
        static void displayVehicleCount(); // Static function declaration
    };

    inline void Vehicle::displayVehicleCount() {
        std::cout << "Vehicle Count: " << vehicleCount << std::endl;
    }

}

#endif // VEHICLE_H

