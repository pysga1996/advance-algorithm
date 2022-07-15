#include <iostream>
#include <vector>
#include <common_list.h>
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
        cout << "Enter number of coins:" << endl;
        using namespace cpp_commons::scan_util;
        using namespace cpp_commons::common_collection::common_list;
        int x = scanInt();
        vector<int> arr = {5, 6, 2, 9, 7, 10, 7};
        int result = numberOfToys(arr, x);
        cout << "Maximum number of toys can buy: " << result << endl;
    }
}
