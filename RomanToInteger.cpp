// Source : https://oj.leetcode.com/problems/roman-to-integer/
/* Date   : 2020-05-18  r
 *          2020-07-03  r
 *          2020-08-01  r
 */

/********************************************************************************** 
* 
* Given a roman numeral, convert it to an integer.
* 
* Input is guaranteed to be within the range from 1 to 3999.
*               
**********************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
        };
        int sum = map[s[s.size() - 1]];
        for (int i = s.size() - 2; i >= 0; i--) {
            if (map[s[i]] < map[s[i + 1]]) {
                sum -= map[s[i]];
            } else {
                sum += map[s[i]];
            }
        }
        return sum;        
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("III") << " ";
    cout << s.romanToInt("IV") << " ";
    cout << s.romanToInt("IX") << " ";
    cout << s.romanToInt("LVIII") << " ";
    cout << s.romanToInt("MCMXCIV") << "\n";
    return 0;
    
    //  result: 3 4 9 58 1994
}

