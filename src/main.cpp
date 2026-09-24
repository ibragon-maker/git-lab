#include <iostream>
#include "report.h"

int main() {
    std::cout << "Oregon Trail Supply Check" << std::endl;
    std::cout << "Week 6" << std::endl;

    int party = 4;
    int days = 7;
    print_report(party, days);

    return 0;
}
