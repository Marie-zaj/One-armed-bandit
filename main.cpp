#include <iostream>
#include <ctime>
#include "SlotMachine.h"
using namespace std;

int main() 
{
    srand(time(nullptr));

    SlotMachine machine;
    char choice;

    do {
        machine.play();
        cout << "\nPlay again? (y/n): ";
        cin >> choice;
        cin.ignore();
        cout << endl;
    } 
    while (choice == 'y');
    return 0;
}