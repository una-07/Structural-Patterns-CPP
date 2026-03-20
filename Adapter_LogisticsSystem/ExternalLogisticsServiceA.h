#pragma once
#include <iostream>

class ExternalLogisticsServiceA {
public:
    void ShipItem(int itemId) {
        std::cout << "[ServiceA] Shipping item " << itemId << std::endl;
    }

    std::string TrackShipment(int id) {
        return "[ServiceA] In transit";
    }
};
