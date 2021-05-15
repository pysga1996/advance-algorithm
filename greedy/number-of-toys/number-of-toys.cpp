#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>

extern const int ENTER_KEY;

using namespace std;

int numberOfToys(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i : arr) {
        if ((k - i) >= 0) {
            k = k - i;
            count++;
        } else break;
    }
    return count;
}

void numberOfToysDemo() {
    int x, command;
    cout << ">>> Start >>>" << endl;
    do {
        cout << "Enter number:" << endl;
        cin >> x;
        vector<int> arr = {5, 6, 2, 9, 7, 10, 7};
        int result = numberOfToys(arr, x);
        cout << "Maximum number of toys can buy: " << result << endl;
        cout << "Press ENTER to continue, or any other key to get back to the main menu:" << endl;
        command = getch();
    } while (command == ENTER_KEY);
    cout << "<<< End <<<" << endl << endl;
}
