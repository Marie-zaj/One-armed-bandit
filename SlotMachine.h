#pragma once
#include "Reel.h"
#include <string>
class SlotMachine 
{
    Reel reel1;
    Reel reel2;
    Reel reel3;

    void checkWin(const std::string& a,
        const std::string& b,
        const std::string& c);

public:
    void play();
};

