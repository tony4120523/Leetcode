#include <iostream>
using namespace std;

class Solution {
public:
    string ReverseString(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
        return s;
    }
};

int main() {
    Solution s;
    cout << s.ReverseString("Yoona") << "\n";
    return 0;
}

