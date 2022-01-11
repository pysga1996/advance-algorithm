#include <iostream>
#include <vector>
#include <algorithm>


namespace greedy_algorithm {

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
//    vector<int> arr = {5, 6, 2, 9, 7, 10, 7};
//    int result = numberOfToys(arr, x);
//    cout << "Maximum number of toys can buy: " << result << endl;
        cout << "Press ENTER to continue, or any other key to get back to the main menu:" << endl;
    }
}
