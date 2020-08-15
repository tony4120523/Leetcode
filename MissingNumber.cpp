// Source : https://leetcode.com/problems/missing-number/
/* Date   : 2020-05-27  r
 *          2020-07-13  r
 *          2020-07-31  r
 *          2020-08-15  r
 */

/*************************************************************************************** 
 *
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the 
 * one that is missing from the array.
 * 
 * For example,
 * Given nums = [0, 1, 3] return 2.
 * 
 * Note:
 * Your algorithm should run in linear runtime complexity. Could you implement it using 
 * only constant extra space complexity?
 * 
 * Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating 
 * all test cases.
 *               
 ***************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xo = 0;
        int i;

        for (i = 0; i < (int)nums.size(); i++) {
            xo = xo ^ i ^ nums[i];
        }
        return xo ^ i;
    }
};

int main() {

    const int arr[] = {3, 1, 0};
    vector<int> T(arr, arr + 3);
    Solution s;
    cout << s.missingNumber(T) << endl; // result: 2
    return 0;
}

