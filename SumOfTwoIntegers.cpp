// Source : https://leetcode.com/problems/sum-of-two-integers/description/
/* Date   : 2019-10-01  r
 *          2019-10-15  r
 *          2019-11-30  r
 *          2020-03-30  r
 *          2020-05-14  r
 *          2020-07-30  r
 *          2020-09-12  r
 *          2020-11-14  r
 */

/*************************************************************************************** 
 *
 * Calculate the sum of two integers a and b, but you are not allowed to use the 
 * operator + and -.
 * 
 * Example:
 * Given a = 1 and b = 2, return 3.
 * 
 ***************************************************************************************/

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            /*
             * 1. find carry position, 
             * 2. zero the 1,1 position, remain 1,0 and 0,1
             * 3. shift carry left 1 position
             */
            int car = a & b;
            a = a ^ b;
            b = car << 1;
        }
        return a;        
    }
    /*
     *  #1 round.  car = 11 & 10 = 10 , a = 11 ^ 10 = 01 , b = 10 << 1 = 100
     *  #2 round.  car = 001 & 100 = 000 , a = 001 ^ 100 = 101 , b = 000 << 1 = 0000
     *             a = 101 -> return !!!
     */
};

int main() {
    int a = 3, b = 2;
    Solution s;
    cout << s.getSum(a, b) << "\n"; // result: 5
    return 0;
}
