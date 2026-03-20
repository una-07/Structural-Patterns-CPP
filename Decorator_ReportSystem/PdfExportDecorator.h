#pragma once
#include "ReportDecorator.h"

class PdfExportDecorator : public ReportDecorator {
public:
    PdfExportDecorator(std::shared_ptr<IReport> rep) : ReportDecorator(rep) {}

    std::string Generate() override {
        return report->Generate() + "[Exported to PDF]\n";
    }
};
