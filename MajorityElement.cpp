#include <iostream>
#include <vector>
#include <algorithm> // if use sorting
using namespace std;

class Solution {
public: 
    int majorityElement(vector<int>& nums) {
        int major = nums[0], count = 1;
        // if this is the major or not, offset each other
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
    int arr[] = {3, 3, 5, 6, 3};
    vector<int> T(arr, arr + 5);
    Solution s;
    cout << s.majorityElement(T) << "\n";
    return 0;
}

