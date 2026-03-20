#include <iostream>
#include <memory>

#include "SalesReport.h"
#include "UserReport.h"
#include "DateFilterDecorator.h"
#include "SortingDecorator.h"
#include "CsvExportDecorator.h"
#include "PdfExportDecorator.h"
#include "AmountFilterDecorator.h"

int main() {
    std::shared_ptr<IReport> report = std::make_shared<SalesReport>();

    
    report = std::make_shared<DateFilterDecorator>(report);
    report = std::make_shared<SortingDecorator>(report);
    report = std::make_shared<AmountFilterDecorator>(report);
    report = std::make_shared<CsvExportDecorator>(report);

    std::cout << report->Generate() << std::endl;

    return 0;
}
