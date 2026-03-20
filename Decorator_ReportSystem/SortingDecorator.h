#pragma once
#include "ReportDecorator.h"

class SortingDecorator : public ReportDecorator {
public:
    SortingDecorator(std::shared_ptr<IReport> rep) : ReportDecorator(rep) {}

    std::string Generate() override {
        return report->Generate() + "[Sorted Data]\n";
    }
};
