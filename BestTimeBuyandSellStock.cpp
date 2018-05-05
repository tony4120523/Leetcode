#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;
        for (int i = 0; i < (int)prices.size(); i++) {
            if (prices[i] < minPrice)  minPrice = prices[i];
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    const int a[] = {7, 1, 5, 3, 6, 4};
    vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

    Solution s;
    cout << s.maxProfit(v) << "\n";
    return 0;
}

