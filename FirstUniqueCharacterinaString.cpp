// Source : https://leetcode.com/problems/first-unique-character-in-a-string/
/* Date   : 2020-06-08  r
 *          2020-08-04  r
 *          2020-08-27  r
 */

/*************************************************************************************** 
 *
 * Given a string, find the first non-repeating character in it and return it's index. 
 * If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * Note: You may assume the string contain only lowercase letters.
 ***************************************************************************************/

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
    cout << s.firstUniqChar(str) << "\n"; // result: -1

    return 0;
}

