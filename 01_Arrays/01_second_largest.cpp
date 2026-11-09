/*
 * ============================================================================
 * Problem: Second Largest Element in Array
 * Source: GeeksforGeeks 160 Days (Day 1)
 * Author: Shubham (Atomic225)
 * ============================================================================
 * 
 * APPROACH:
 * Single-pass iteration. Maintain two variables: 'largest' and 'second_largest'.
 * 1. If arr[i] > largest:
 *      second_largest becomes largest
 *      largest becomes arr[i]
 * 2. Else if arr[i] < largest and arr[i] > second_largest:
 *      second_largest becomes arr[i]
 * 
 * COMPLEXITY:
 * Time Complexity:  O(N) - exactly one pass through the array
 * Space Complexity: O(1) - constant auxiliary memory
 * ============================================================================
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int largest = -1;
        int second_largest = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                second_largest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }

        return second_largest;
    }
};

int main() {
    Solution sol;
    vector<int> test1 = {12, 35, 1, 10, 34, 1};
    cout << "Second Largest: " << sol.getSecondLargest(test1) << " (Expected: 34)" << endl;

    vector<int> test2 = {10, 10, 10};
    cout << "Second Largest: " << sol.getSecondLargest(test2) << " (Expected: -1)" << endl;

    return 0;
}
