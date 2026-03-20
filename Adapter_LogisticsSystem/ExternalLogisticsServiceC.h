#pragma once
#include <iostream>

class ExternalLogisticsServiceC {
public:
    void Dispatch(std::string id) {
        std::cout << "[ServiceC] Dispatch " << id << std::endl;
    }

    std::string Status(std::string id) {
        return "[ServiceC] Pending";
    }
};
