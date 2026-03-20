#pragma once
#include "IInternalDeliveryService.h"
#include "ExternalLogisticsServiceA.h"

class LogisticsAdapterA : public IInternalDeliveryService {
private:
    ExternalLogisticsServiceA service;

public:
    void DeliverOrder(std::string orderId) override {
        service.ShipItem(std::stoi(orderId));
    }

    std::string GetDeliveryStatus(std::string orderId) override {
        return service.TrackShipment(std::stoi(orderId));
    }

    double CalculateCost(double weight) override {
        return weight * 7;
    }
};
