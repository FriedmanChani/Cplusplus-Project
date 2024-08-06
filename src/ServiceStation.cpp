//
// Created by Owner on 8/6/2024.
//
// ServiceStation.cpp

#include "../include/ServiceStation.h"

namespace VDMS {

    void ServiceStation::requestService(Vehicle* vehicle, ServiceType service) {
        serviceQueue.push(std::make_pair(vehicle, service));
    }

    void ServiceStation::processServices() {
        while (!serviceQueue.empty()) {
            auto serviceRequest = serviceQueue.front();
            serviceQueue.pop();

            Vehicle* vehicle = serviceRequest.first;
            ServiceType service = serviceRequest.second;

            vehicle->displayInfo();
            std::cout << "Service Cost: " << vehicle->estimateServiceCost(service) << std::endl;
        }
    }
}
