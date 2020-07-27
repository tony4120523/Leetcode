// Source : https://oj.leetcode.com/problems/majority-element/
/* Date   : 2019-11-22  r
 *          2020-06-19  r
 *          2020-06-27  r
 *          2020-07-27  r
 */

 /********************************************************************************** 
 * 
 * Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 * 
 * You may assume that the array is non-empty and the majority element always exist in the array.
 * 
 **********************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    int majorityElement(vector<int>& nums) {
        int major = 0;
        int count = 0;
        
        for (int i = 0; i < (int)nums.size(); i++) {
            if (count == 0) {
                major = nums[i];
                count++;
            } else if (major == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return major;
    }
};

int main() {
    int arr[] = {4, 5, 6, 7, 6};
    vector<int> T(arr, arr + 5);
    Solution s;
    cout << s.majorityElement(T) << "\n";
    return 0;
}

