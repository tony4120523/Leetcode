// Source : https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock/
/* Date   : 2020-05-24  r
 *          2020-08-06  r
 */
/***************************************************************************************************** 
 *
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * 
 * If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of 
 * the stock), design an algorithm to find the maximum profit.
 * 
 * Note that you cannot sell a stock before you buy one.
 * 
 * Example 1:
 * 
 * Input: [7,1,5,3,6,4]
 * Output: 5
 * Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
 *              Not 7-1 = 6, as selling price needs to be larger than buying price.
 * 
 * Example 2:
 * 
 * Input: [7,6,4,3,1]
 * Output: 0
 * Explanation: In this case, no transaction is done, i.e. max profit = 0.
 * 
 ******************************************************************************************************/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
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
    /**
     * to initial the vector, can do ...
     * 
     * int vv[2] = { 12,43  };
     * std::vector<int> v(&vv[0], &vv[0]+2);
     * 
     * or 
     * 
     * int vv[] = { 12,43  };
     * std::vector<int> v(begin(vv), end(vv));
     */
    
    const int a[] = {7, 1, 5, 3, 6, 4};
    vector<int> v(a, a + sizeof(a) / sizeof(a[0]));

    // result: 5
    Solution s;
    cout << s.maxProfit(v) << "\n";
    return 0;
}

