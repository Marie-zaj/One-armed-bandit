#include "SlotMachine.h"
#include <iostream>
using namespace std;

void SlotMachine::play() {
    cout << "Press ENTER to spin..." << endl;
    cin.get();

    string s1 = reel1.spin();
    string s2 = reel2.spin();
    string s3 = reel3.spin();

    cout << "Result: ";
    cout << s1 << " | " << s2 << " | " << s3 << endl;

    checkWin(s1, s2, s3);
}

void SlotMachine::checkWin(const string& a,
    const string& b,
    const string& c) 
{
    if (a == b && b == c) 
    {
        cout << "JACKPOT! You win!" << endl;
    }
    else if (a == b || b == c || a == c) 
    {
        cout << "Small win!" << endl;
    }
    else 
    {
        cout << "Loose. Try again." << endl;
    }
}