#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> uniq;
        for (char c : s) {
            uniq[c]++;
        }
        for (int i = 0; i < (int)s.size(); i++) {
            if (uniq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    string str = "leetcodeltcod";
    Solution s;
    cout << s.firstUniqChar(str) << "\n";

    return 0;
}

