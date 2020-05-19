// Source : https://leetcode.com/problems/intersection-of-two-arrays-ii/

/* Date   : 2020-05-05  r
            2020-05-19  r
 */

/*************************************************************************************** 
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example:
 * Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].
 * 
 * Note:
 * Each element in the result should appear as many times as it shows in both arrays.
 * The result can be in any order.
 * 
 * Follow up:
 * What if the given array is already sorted? How would you optimize your algorithm?
 * What if nums1's size is small compared to num2's size? Which algorithm is better?
 * What if elements of nums2 are stored on disk, and the memory is limited such that you
 * cannot load all elements into the memory at once?
 * 
 ***************************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict;
        vector<int> ans;
        for (int i = 0; i < (int)nums1.size(); i++) {
            dict[nums1[i]]++;
        }
        for (int i = 0; i < (int)nums2.size(); i++) {
            if (--dict[nums2[i]] >= 0)  ans.push_back(nums2[i]);
        }
        return ans;
    }
};

int main() {
    const int a1[] = {1, 2, 2, 1, 3, 3, 3};
    const int a2[] = {2, 2, 3, 3};
    vector<int> v1(a1, a1 + sizeof(a1) / sizeof(a1[0]));
    vector<int> v2(a2, a2 + sizeof(a2) / sizeof(a2[0]));
    Solution s;
    vector<int> verify = s.intersect(v1, v2);

    cout << "[";
    for (int i : verify) {
        cout << i << ", ";
    }
    cout << "]";  // result: [2, 2, 3, 3,]
    return 0;
}
