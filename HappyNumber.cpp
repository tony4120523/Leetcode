#include <iostream>
using namespace std;

class Solution {
public:
    int digitsquaresum(int n) {
        int sum = 0, tmp;
        while (n != 0) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast, slow;
        fast = slow = n;
        do {
            slow = digitsquaresum(slow);
            fast = digitsquaresum(fast);
            fast = digitsquaresum(fast);
        } while (slow != fast);
        if (slow == 1)  return true;
        else  return false;
    }
};

int main() {
    Solution s;
    cout << s.isHappy(19) << "\n";
    cout << s.isHappy(20) << "\n";
    return 0;
}

