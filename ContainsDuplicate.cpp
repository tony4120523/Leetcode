// Source : https://leetcode.com/problems/contains-duplicate/
/* Date   : 2020-07-15  r
 *          2021-07-05  r
 */

/********************************************************************************** 
 * 
 * Given an array of integers, find if the array contains any duplicates. 
 * Your function should return true if any value appears at least twice in the array, 
 * and it should return false if every element is distinct.
 * 
 **********************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public: 
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> myset;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (myset.find(nums[i]) != myset.end()) {
                return true;
            } else {
                myset.insert(nums[i]);
            }
        }
        return false;
    }
};

int main() {
    const int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    vector<int> T(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Solution s;
    cout << s.containsDuplicate(T) << "\n";
    return 0;
}
