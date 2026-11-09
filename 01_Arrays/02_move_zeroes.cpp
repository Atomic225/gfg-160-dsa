/*
 * ============================================================================
 * Problem: Move All Zeroes to End
 * Source: GeeksforGeeks 160 Days (Day 2)
 * Author: Shubham (Atomic225)
 * ============================================================================
 * 
 * APPROACH:
 * Two-Pointer technique (Partition / In-place swap).
 * Maintain a pointer 'count' which marks the position where the next non-zero
 * element should be placed.
 * Iterate through the array with pointer 'i':
 * Whenever arr[i] != 0, swap arr[i] with arr[count], and increment count.
 * 
 * COMPLEXITY:
 * Time Complexity:  O(N) - single pass through the array
 * Space Complexity: O(1) - modifies array in-place without extra space
 * ============================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int count = 0; // Index of next non-zero element

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[count]);
                count++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    
    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    sol.pushZerosToEnd(arr);

    cout << "After Moving Zeroes: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
