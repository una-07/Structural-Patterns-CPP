#pragma once
#include "IInternalDeliveryService.h"
#include <iostream>

class InternalDeliveryService : public IInternalDeliveryService {
public:
    void DeliverOrder(std::string orderId) override {
        std::cout << "[Internal] Delivering order " << orderId << std::endl;
    }

    std::string GetDeliveryStatus(std::string orderId) override {
        return "[Internal] Delivered";
    }

    double CalculateCost(double weight) override {
        return weight * 5;
    }
};
