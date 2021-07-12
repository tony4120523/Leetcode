// Source : https://leetcode.com/problems/reverse-string/
/* Date   : 2020-06-20  r
 *          2020-06-24  r
 *          2020-07-18  r
 *          2020-08-17  r
 *          2020-09-08  r
 *          2021-07-12  r
 */

/***************************************************************************************
 *
 * Write a function that takes a string as input and returns the string reversed.
 *
 * Example:
 * Given s = "hello", return "olleh".
 ***************************************************************************************/

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

