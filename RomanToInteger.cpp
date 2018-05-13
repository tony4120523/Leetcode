#include <iostream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}, 
        };
        int sum = 0;
        for (int i = s.size() - 2; i >= 0; i--) {
            if (m[s[i]] < m[s[i + 1]]) {
                sum -= m[s[i]];
            } else {
                sum += m[s[i]];
            }
        }
        return sum;        
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("III") << "\n";
    cout << s.romanToInt("IV") << "\n";
    cout << s.romanToInt("IX") << "\n";
    cout << s.romanToInt("LVIII") << "\n";
    cout << s.romanToInt("MCMXCIV") << "\n";
    return 0;
}

