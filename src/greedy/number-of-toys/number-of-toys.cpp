#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

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
        ifstream MyReadFile("test.txt");
        if (MyReadFile) {
            string myText;
// Use a while loop together with the getline() function to read the file line by line
            while (getline(MyReadFile, myText)) {
                // Output the text from the file
                cout << myText << endl;
            }
            MyReadFile.close();
        } else {
            cout << "File not found" << endl;
        }

        cout << "Press ENTER to continue, or any other key to get back to the main menu:" << endl;
    }
}
