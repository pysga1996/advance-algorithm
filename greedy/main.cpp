#include <iostream>
#include "main.h"

#define EXIT_CODE 0

extern const int ENTER_KEY = 13;

void mapSelection(const int selection) {
    switch (selection) {
        case 1:
            numberOfToysDemo();
            break;
        case 2:
            meetingRoomDemo();
            break;
        default:
            break;
    }
}

int main() {
    int command;
    do {
        cout << "---Greedy Algorithm---" << endl;
        cout << "1. Count maximum number of toys can buy" << endl;
        cout << "2. Meeting arrangement" << endl;
        cout << "0. Exit:" << endl;
        cin >> command;
        mapSelection(command);
    } while (command != EXIT_CODE);
    cout << "---End---" << endl;
    return 0;
}
