#pragma once
#include <iostream>

class ExternalLogisticsServiceB {
public:
    void SendPackage(std::string code) {
        std::cout << "[ServiceB] Sending package " << code << std::endl;
    }

    std::string CheckPackageStatus(std::string code) {
        return "[ServiceB] Delivered";
    }
};
