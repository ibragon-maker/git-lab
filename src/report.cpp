#include <iostream>
#include "report.h"
#include "supplies.h"

void print_report(int party, int days) {
    int food = food_needed(party, days);

    std::cout << "-----------------------------" << std::endl;
    std::cout << "Party: " << party << " people" << std::endl;
    std::cout << "Days:  " << days << std::endl;
    std::cout << "Food needed: " << food << " lb" << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
