#pragma once
#include "ReportDecorator.h"

class CsvExportDecorator : public ReportDecorator {
public:
    CsvExportDecorator(std::shared_ptr<IReport> rep) : ReportDecorator(rep) {}

    std::string Generate() override {
        return report->Generate() + "[Exported to CSV]\n";
    }
};
