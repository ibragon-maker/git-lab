#include "supplies.h"

int food_needed(int party, int days, int rations_per_day) {
    return party * days * rations_per_day;

