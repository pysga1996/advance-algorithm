#include <iostream>
#include <vector>
#include <common_vector.h>
#include <common_util.h>

typedef struct Meeting {
    int startTime;
    int endTime;
//    bool operator<(Meeting const &r) const { return endTime < r.endTime; }
} meeting;

namespace greedy_algorithm {

    using namespace std;

    int meetingRoom(vector<int> s, vector<int> e) {
        vector<meeting> meetingList;
        for (int i = 0; i < s.size(); ++i) {
            meeting m{s[i], e[i]};
            meetingList.push_back(m);
        }
        sort(meetingList.begin(), meetingList.end(),
             [](meeting const &l, meeting const &r) { return l.endTime < r.endTime; });
        meeting k;
        int count = 0;
        for (int j = 0; j < meetingList.size(); ++j) {
            if (j == 0) {
                count++;
                k = meetingList[j];
                continue;
            }
            if (meetingList[j].startTime >= k.endTime) {
                count++;
                k = meetingList[j];
            }
        }
        return count;
    }

    void meetingRoomDemo() {
        using namespace cpp_commons::scan_util;
        using namespace cpp_commons::common_collection::common_vector;
        cout << "Enter the number of meetings:" << endl;
        int arrLength = scanInt();
        cout << "Enter vector of start time of meetings:" << endl;
        vector<int> arr1 = scanVector<int>(arrLength);
        cout << "Enter vector of end time of meetings:" << endl;
        vector<int> arr2 = scanVector<int>(arrLength);
        int result = meetingRoom(arr1, arr2);
        cout << "Maximum meeting can be hosted: " << result << endl;
        cout << "Press ENTER to continue, or any other key to get back to the main menu:" << endl;
    }
}