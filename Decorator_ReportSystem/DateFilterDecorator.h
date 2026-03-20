#pragma once
#include "ReportDecorator.h"

class DateFilterDecorator : public ReportDecorator {
public:
    DateFilterDecorator(std::shared_ptr<IReport> rep) : ReportDecorator(rep) {}

    std::string Generate() override {
        return report->Generate() + "[Filtered by Date]\n";
    }
};
