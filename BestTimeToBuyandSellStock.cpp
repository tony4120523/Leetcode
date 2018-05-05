#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < (int)prices.size(); i++) {
            profit += max(prices[i] - prices[i - 1], 0);
        }
        return profit;
    }
};

int main() {
    const int arr[] = {7, 1, 5, 3, 6, 4};
    vector<int> T(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Solution s;
    cout << s.maxProfit(T) << "\n";
    return 0;
}

