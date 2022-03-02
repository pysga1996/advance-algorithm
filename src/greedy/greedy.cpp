#include <iostream>
#include <functional>
#include "greedy.h"
#define EXIT_CODE 0

const int BACK_KEY = 81; // 'Q'

int command;

void mapSelection(int selection);

void loop_exercise(const std::function<void()>& func);

int main() {
    using namespace std;
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

void loop_exercise(const std::function<void()>& func) {
    using namespace std;
    cout << ">>> Start >>>" << endl;
    do {
        func();
        cin >> command;
    } while (command == BACK_KEY);
    cout << "<<< End <<<" << endl << endl;
}

void mapSelection(const int selection) {
    std::function<void()> demoFunc;
    switch (selection) {
        case 1:
            demoFunc = greedy_algorithm::numberOfToysDemo;
            break;
        case 2:
            demoFunc = greedy_algorithm::meetingRoomDemo;
            break;
        default:
            break;
    }
    if (demoFunc != nullptr) {
        loop_exercise(demoFunc);
    }
}



