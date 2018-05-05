#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    bool isAnagram(string s, string t) {
        // int array for check
        unsigned int check[128] = {};
        for (int i = 0; s[i]; i++) {
            check[(int)s[i]]++;
        }
        for (int i = 0; t[i]; i++) {
            check[(int)t[i]]--;
            // if (check[i] < 0)  return false
        }
        for (int i = 0; i < 128; i++) {
            if (check[i] != 0)  return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isAnagram("abc", "cab") << "\n";
    return 0;
}

