#pragma once
#include <string>

class Reel 
{
    static const int SYMBOL_COUNT = 4;
    std::string symbols[SYMBOL_COUNT];
public:
    Reel();
    std::string spin();
};
