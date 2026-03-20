#pragma once
#include <string>

class IReport {
public:
    virtual std::string Generate() = 0;
    virtual ~IReport() = default;
};
