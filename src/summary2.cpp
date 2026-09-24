#include <iostream>
#include "supplies.h"

void print_summary_2(int party, int days) {
    int food = food_needed(party, days);
    std::cout << "Summary: " << party << " people need " << food << " lb of food for " << days << " days" << std::endl;
}
