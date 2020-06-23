// Source : https://leetcode.com/problems/happy-number/
/* Date   : 2020-06-23  r
 */

/********************************************************************************** 
 * 
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with any positive integer, 
 * replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 
 * (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this 
 * process ends in 1 are happy numbers.
 * 
 * Example: 19 is a happy number
 * 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 *               
 **********************************************************************************/

#include <iostream>
using namespace std;

class Solution {
public:
    int digitsquaresum(int n) {
        int sum = 0;
        int tmp;
        while (n != 0) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast;
        int slow;
        fast = n; slow = n;
        do {
            slow = digitsquaresum(slow);
            fast = digitsquaresum(fast);
            fast = digitsquaresum(fast);
        } while (slow != fast);

        if (slow == 1) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution s;
    cout << s.isHappy(19) << "\n";
    cout << s.isHappy(20) << "\n";
    return 0;
}

