#include <iostream>
#include <vector>
using namespace std;
class Solution {

public:
    int missingNumber(vector<int>& nums) {
        int xo = 0, i;
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
    cout << s.missingNumber(T) << endl;
    return 0;
}

