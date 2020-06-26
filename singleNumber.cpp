// Source : https://leetcode.com/problems/single-number/

/* Date   : 2020-02-27  r
 *          2020-06-26  r
 */

/********************************************************************************** 
* 
* Given an array of integers, every element appears twice except for one. Find that single one.
* 
* Note:
* Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
* 
* Example 1:
* Input: [2,2,1]
* Output: 1
* 
* Example 2:
* Input: [4,1,2,1,2]
* Output: 4
**********************************************************************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // use bitwise XOR
    int singleNumber(vector<int>& nums) {
        int i;
        int ans = 0;
        for (i = 0; i < (int)nums.size(); i++) {
            ans ^= nums[i];
        }
        return ans;
    }
};

int main() {
    // create vector quickly
    static const int a[] = {1, 4, 22, 56, 22, 1, 4};
    vector<int> nums(a, a + sizeof(a) / sizeof(0));

    Solution s;
    cout << s.singleNumber(nums) << endl;
    // output: 56
    return 0;
}

