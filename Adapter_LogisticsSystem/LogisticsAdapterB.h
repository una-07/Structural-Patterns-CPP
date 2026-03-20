#pragma once
#include "IInternalDeliveryService.h"
#include "ExternalLogisticsServiceB.h"

class LogisticsAdapterB : public IInternalDeliveryService {
private:
    ExternalLogisticsServiceB service;

public:
    void DeliverOrder(std::string orderId) override {
        service.SendPackage(orderId);
    }

    std::string GetDeliveryStatus(std::string orderId) override {
        return service.CheckPackageStatus(orderId);
    }

    double CalculateCost(double weight) override {
        return weight * 6;
    }
};
