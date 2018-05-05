#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            // 3 step , 1 : find carry position, 
            //          2 : zero the 1,1 position, remain 1,0 and 0,1
            //          3 : shift carry left 1 position
            int car = a & b;
            a = a ^ b;
            b = car << 1;
        }
        return a;        
    }
};

int main() {
    int a = 3, b = 2;
    Solution s;
    cout << s.getSum(a, b) << "\n";
    return 0;
}

