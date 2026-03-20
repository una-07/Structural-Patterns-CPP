#pragma once
#include <string>

class IInternalDeliveryService {
public:
    virtual void DeliverOrder(std::string orderId) = 0;
    virtual std::string GetDeliveryStatus(std::string orderId) = 0;
    virtual double CalculateCost(double weight) = 0;
    virtual ~IInternalDeliveryService() = default;
};
