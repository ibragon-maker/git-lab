#include "report.h"
#include "supplies.h"
#include <iostream>

void print_report(int party, int days, bool show_summary) {
    int food = food_needed(party, days, 3);
    std::cout << "Food needed: " << food << std::endl;
    if (show_summary) {
        std::cout << "Summary displayed." << std::endl;
    }
}
