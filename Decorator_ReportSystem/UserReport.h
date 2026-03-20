#pragma once
#include "IReport.h"

class UserReport : public IReport {
public:
    std::string Generate() override {
        return "User Report:\nUser1: Active\nUser2: Inactive\nUser3: Active\n";
    }
};
