// Source : https://oj.leetcode.com/problems/excel-sheet-column-number/
/* Date   : 2019-10-05  r
 *          2020-06-18  r
 *          2020-07-10  r
 */

/********************************************************************************** 
 * 
 * Related to question Excel Sheet Column Title
 * Given a column title as appear in an Excel sheet, return its corresponding column number.
 * 
 * For example:
 *     A -> 1
 *     B -> 2
 *     C -> 3
 *     ...
 *     Z -> 26
 *     AA -> 27
 *     AB -> 28 
 *     AC -> 29
 *               
 **********************************************************************************/

#include <iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            result = result * 26 + (s.at(i) - 'A' + 1);
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.titleToNumber("AC") << "\n";
    return 0;
}

