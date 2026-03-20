#pragma once
#include "IReport.h"
#include <memory>

class ReportDecorator : public IReport {
protected:
    std::shared_ptr<IReport> report;

public:
    ReportDecorator(std::shared_ptr<IReport> rep) : report(rep) {}
};
