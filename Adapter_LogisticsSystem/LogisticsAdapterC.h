#pragma once
#include "IInternalDeliveryService.h"
#include "ExternalLogisticsServiceC.h"

class LogisticsAdapterC : public IInternalDeliveryService {
private:
    ExternalLogisticsServiceC service;

public:
    void DeliverOrder(std::string orderId) override {
        service.Dispatch(orderId);
    }

    std::string GetDeliveryStatus(std::string orderId) override {
        return service.Status(orderId);
    }

    double CalculateCost(double weight) override {
        return weight * 8;
    }
};
