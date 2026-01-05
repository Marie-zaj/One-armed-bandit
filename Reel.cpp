#include "Reel.h"
#include <cstdlib>

Reel::Reel() {
    symbols[0] = "Cherry";
    symbols[1] = "Star";
    symbols[2] = "Bell";
    symbols[3] = "Seven";
}

std::string Reel::spin() {
    int index = rand() % SYMBOL_COUNT;
    return symbols[index];
}