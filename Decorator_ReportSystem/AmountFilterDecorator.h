#pragma once
#include "ReportDecorator.h"

class AmountFilterDecorator : public ReportDecorator {
public:
    AmountFilterDecorator(std::shared_ptr<IReport> rep) : ReportDecorator(rep) {}

    std::string Generate() override {
        return report->Generate() + "[Filtered by Amount]\n";
    }
};
