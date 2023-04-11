/**
 * @file
 * @brief Binary search algorithm
 * 
 * A pure implementation of binary search algorithm in C++.
 * A detailed description of the algorithm:
 * https://en.wikipedia.org/wiki/Binary_search_algorithm
*/

#include <algorithm>  /// for std::sort function
#include <cassert>    /// for std::assert
#include <iostream>   /// for IO operations
#include <vector>     /// for std::vector
/**
 * @namespace search
 * @brief Searching algorithms
*/
namespace search {

/**
 * @namespace binary_search
 * @brief Binary search searching algorihm
*/
namespace binary_search {

/**
 * @brief The main function which implements binary search
 * @param arr vector to be searched in
 * @param val value to be searched
 * @returns @param int index of val in vector arr
*/
uint64_t binarySearch(std::vector<uint64_t> arr, uint64_t val) {
    uint64_t low = 0;                // set the lowest point of the vector.
    uint64_t high = arr.size() - 1;  // set the highest point of the vector.

    while (low <= high) {
        uint64_t m = low + (high - low) / 2;  // set the pivot point

        if (val == arr[m]) {
            return m;
        } /**
           * if the pivot point is a val value, returns it,
           * otherwise it checks if the val value is greater or
           * less than and sets the next pivot point accordingly.
           */
        else if (val < arr[m]) {
            high = m - 1;
        } else {
            low = m + 1;
        }
    }
    return -1;  // if val is not in the array, return -1.
}

}  // namespace binary_search

}  // namespace search

/**
 * @brief Self-test implementation #1
 * @returns void
*/
static void test1() {
    // testcase #1
    // array = [1,3,5,7,9,8,6,4,2] , Value = 4
    // should return 3

    std::vector<uint64_t> arr = {{1, 3, 5, 7, 9, 8, 6, 4, 2}};
    std::sort(arr.begin(), arr.end());
    uint64_t expected_ans = 3;
    uint64_t derived_ans = search::binary_search::binarySearch(arr, 4);
    std::cout << "Test #1: ";
    assert(derived_ans == expected_ans);
    std::cout << "Passed!" << std::endl;
}

/**
 * @brief Self-test implementation #2
 * @returns void
*/
void test2() {
    // testcase #2
    // array = [1,23,25,4,2] , Value = 25
    // should return 4
    std::vector<uint64_t> arr = {{1, 23, 25, 4, 2}};
    std::sort(arr.begin(), arr.end());
    uint64_t expected_ans = 4;
    uint64_t derived_ans = search::binary_search::binarySearch(arr, 25);
    std::cout << "Test #2: ";
    assert(derived_ans == expected_ans);
    std::cout << "Passed!" << std::endl;
}

/**
 * @brief Self-test implementation #3
 * @returns void
*/
void test3() {
    // testcase #3
    // array = [1,31,231,12,12,2,5,51,21,23,12,3] , Value = 5
    // should return 8
    std::vector<uint64_t> arr = {{1, 31, 231, 12, 2, 5, 51, 21, 23, 12, 3}};
    std::sort(arr.begin(), arr.end());
    uint64_t expected_ans = 8;
    uint64_t derived_ans = search::binary_search::binarySearch(arr, 31);
    std::cout << "Test #3: ";
    assert(derived_ans == expected_ans);
    std::cout << "Passed!" << std::endl;
}

/**
 * @brief Main function
 * @returns 0 on exit
*/
int main() {
    test1();  // run self-test implementation #1
    test2();  // run self-test implementation #2
    test3();  // run self-test implementation #3

    return 0;
}