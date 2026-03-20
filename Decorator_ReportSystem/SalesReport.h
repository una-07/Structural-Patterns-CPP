#pragma once
#include "IReport.h"
#include <sstream>

class SalesReport : public IReport {
public:
    std::string Generate() override {
        return "Sales Report:\nOrder1: $100\nOrder2: $250\nOrder3: $75\n";
    }
};
