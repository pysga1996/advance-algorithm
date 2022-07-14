#include <gtest/gtest.h>
#include "../include/greedy.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(NumberOfToys, Test1) {
    using namespace std;
    vector<int> arr1 = {1, 2, 3};
    int result = greedy_algorithm::numberOfToys(arr1, 4);
    ASSERT_EQ(result, 3);
}

TEST(NumberOfToys, Test2) {
    using namespace std;
    vector<int> arr1 = {5, 6, 2, 9, 7, 10, 7};
    int result = greedy_algorithm::numberOfToys(arr1, 2);
    ASSERT_EQ(result, 1);
}

TEST(NumberOfToys, Test3) {
    using namespace std;
    vector<int> arr1 = {6, 4, 8, 11, 1, 3};
    int result = greedy_algorithm::numberOfToys(arr1, 14);
    ASSERT_EQ(result, 4);
}

TEST(NumberOfToys, Test4) {
    using namespace std;
    vector<int> arr1 = {16, 98, 1, 19, 8, 82, 43, 12, 22, 88};
    int result = greedy_algorithm::numberOfToys(arr1, 30);
    ASSERT_EQ(result, 3);
}

TEST(NumberOfToys, Test5) {
    using namespace std;
    vector<int> arr1 = {73, 88, 68, 88, 41, 33, 11, 46, 49, 17};
    int result = greedy_algorithm::numberOfToys(arr1, 300);
    ASSERT_EQ(result, 7);
}

TEST(NumberOfToys, Test6) {
    using namespace std;
    vector<int> arr1 = {5, 18, 80, 9, 82, 5, 56, 61, 24, 89};
    int result = greedy_algorithm::numberOfToys(arr1, 178);
    ASSERT_EQ(result, 7);
}

TEST(NumberOfToys, Test7) {
    using namespace std;
    vector<int> arr1 = {167, 97, 530, 943, 203, 281, 122, 536, 1000, 38, 596, 591, 870, 428, 130, 511, 285, 385, 473,
                        330, 873, 863, 21, 795, 609, 442, 315, 596, 935, 419, 666, 752, 12, 511, 518, 228, 907, 806,
                        440, 86, 813, 370, 47, 452, 736, 87, 931, 951, 336, 902, 587, 2, 76, 228, 328, 859, 617, 138,
                        931, 143, 113, 635, 597, 967, 45, 565, 345, 10, 423, 411, 327, 219, 926, 486, 697, 541, 112,
                        519, 994, 708, 581, 126, 283, 15, 605, 586, 79, 620, 450, 460, 453, 972, 841, 412, 389, 925, 94,
                        61, 362, 257};
    int result = greedy_algorithm::numberOfToys(arr1, 10000);
    ASSERT_EQ(result, 47);
}

TEST(NumberOfToys, Test8) {
    using namespace std;
    vector<int> arr1 = {934, 146, 38, 551, 834, 713, 855, 905, 654, 982, 226, 831, 729, 717, 860, 355, 969, 11, 332,
                        207, 684, 86, 562, 984, 101, 96, 282, 845, 593, 330, 324, 696, 31, 857, 245, 26, 308, 816, 721,
                        486, 21, 328, 923, 333, 158, 472, 213, 945, 899, 464, 406, 236, 492, 213, 50, 12, 688, 868, 809,
                        566, 671, 329, 723, 343, 337, 560, 170, 977, 749, 913, 420, 597, 380, 856, 714, 580, 51, 365,
                        441, 123, 503, 667, 970, 403, 893, 228, 639, 437, 668, 116, 460, 161, 703, 946, 154, 487, 272,
                        589, 964, 326};
    int result = greedy_algorithm::numberOfToys(arr1, 9452);
    ASSERT_EQ(result, 43);
}

TEST(MeetingRoom, Test1) {
    using namespace std;
    vector<int> arr1 = {1060, 6453, 1031, 3028, 3395, 2650, 441, 7937, 6605, 7410, 7296, 8514, 5568, 9779, 4161,
                        2365, 319, 7499, 6257, 552, 7704, 4406, 7750, 2577, 7961, 8753, 1040, 7733, 6421, 5326,
                        9611, 9643, 7132, 8572, 8118, 5627, 9732, 4269, 2757, 4184, 3702, 1791, 7411, 4702, 5022,
                        7749, 4122, 7681, 2845, 1864, 6306, 1947, 1755, 1621, 7381, 6191, 4467, 607, 1791, 5407,
                        1902, 1445, 4109, 8245, 9194, 7991, 4443, 9333, 2845, 9717, 9697, 5193, 9594, 2328, 7438,
                        6158, 1151, 1776, 5602, 9324, 4351, 3780, 9691, 2261, 4679, 4843, 5893, 5247, 9288, 7854,
                        9809, 2151, 4821, 6117, 8775, 8292, 120, 2482, 2513, 5211};
    vector<int> arr2 = {2588, 6458, 8672, 6919, 6239, 5114, 874, 9463, 7244, 8005, 7699, 8607, 9105, 9869, 5973,
                        4906, 5261, 8401, 9250, 8392, 8444, 5757, 9006, 3733, 8079, 8760, 3332, 8312, 9944, 6821,
                        9856, 9745, 7757, 9598, 8356, 7597, 9894, 6523, 3998, 4726, 4203, 4233, 8271, 7749, 9762,
                        8104, 6180, 8851, 8128, 1914, 9565, 7055, 3179, 8999, 8867, 7148, 6754, 881, 9069, 7820,
                        1910, 9680, 6245, 9213, 9281, 9655, 5354, 9790, 8852, 9957, 9851, 6381, 9623, 9335, 7749,
                        6563, 7137, 8915, 9860, 9594, 7691, 8058, 9704, 7898, 7371, 8780, 7750, 6653, 9493, 9642,
                        9966, 5589, 5747, 7649, 9040, 8541, 5013, 3979, 5747, 7534};
    int result = greedy_algorithm::meetingRoom(arr1, arr2);
    ASSERT_EQ(result, 18);
}

