#include <iostream>
#include <vector>
#include <common_vector.h>
#include <common_util.h>

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
        using namespace cpp_commons::scan_util;
        using namespace cpp_commons::common_collection::common_vector;
        cout << "Enter number of coins:" << endl;
        int x = scanInt();
        cout << "Enter number of toys:" << endl;
        int y = scanInt();
        vector<int> arr = scanVector<int>(y);
        int result = numberOfToys(arr, x);
        cout << "Maximum number of toys can buy: " << result << endl;
    }
}
