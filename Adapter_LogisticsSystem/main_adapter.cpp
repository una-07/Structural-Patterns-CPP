#include <iostream>
#include "DeliveryServiceFactory.h"

int main() {
    auto service = DeliveryServiceFactory::CreateService(2);

    if (service) {
        service->DeliverOrder("101");
        std::cout << service->GetDeliveryStatus("101") << std::endl;
        std::cout << "Cost: " << service->CalculateCost(10) << std::endl;
    }

    return 0;
}
