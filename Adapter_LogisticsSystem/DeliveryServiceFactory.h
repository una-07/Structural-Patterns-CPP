#pragma once
#include <memory>
#include "InternalDeliveryService.h"
#include "LogisticsAdapterA.h"
#include "LogisticsAdapterB.h"
#include "LogisticsAdapterC.h"

class DeliveryServiceFactory {
public:
    static std::shared_ptr<IInternalDeliveryService> CreateService(int type) {
        switch (type) {
            case 1: return std::make_shared<InternalDeliveryService>();
            case 2: return std::make_shared<LogisticsAdapterA>();
            case 3: return std::make_shared<LogisticsAdapterB>();
            case 4: return std::make_shared<LogisticsAdapterC>();
            default: return nullptr;
        }
    }
};
