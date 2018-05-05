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

int main(){
    const int a1[] = {1, 2, 2, 1, 3, 3, 3};
    const int a2[] = {2, 2, 3, 3};
    vector<int> v1(a1, a1 + sizeof(a1) / sizeof(a1[0]));
    vector<int> v2(a2, a2 + sizeof(a2) / sizeof(a2[0]));
    Solution s;
    vector<int> verify = s.intersect(v1, v2);
    for (int i : verify) {
        cout << i << "\n";
    }
    return 0;
}

