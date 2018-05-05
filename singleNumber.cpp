#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // use bitwise XOR
    int singleNumber(vector<int>& nums) {
        int i, ans = 0;
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
    return 0;
}

