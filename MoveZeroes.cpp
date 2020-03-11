// Source : https://leetcode.com/problems/move-zeroes/

/* Date   : 2019-09-26  w
 *          2019-10-09  r 
 *          2019-10-29  r
 *          2020-03-11  r
 */

/*************************************************************************************** 
 *
 * Given an array nums, write a function to move all 0's to the end of it while 
 * maintaining the relative order of the non-zero elements.
 *
 * For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should
 * be [1, 3, 12, 0, 0].
 * 
 * Note:
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 *               
 ***************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;        
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] != 0) {
                nums[idx++] = nums[i];
            }
        }
        for (; idx < (int)nums.size(); idx++) {
            nums[idx] = 0;
        }
    }
};

int main() {
    static const int arr[] = {0, 1, 0, 12, 3, 0, 0};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

    Solution s;
    s.moveZeroes(vec);
    for (int i : vec) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}

