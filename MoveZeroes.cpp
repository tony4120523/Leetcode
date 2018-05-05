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

