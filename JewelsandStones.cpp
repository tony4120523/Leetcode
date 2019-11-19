// Source : https://leetcode.com/problems/jewels-and-stones/

/* Date   : 2019-11-19  r
 */

/*************************************************************************************** 
 *
 * You're given strings J representing the types of stones that are jewels, and S 
 * representing the stones you have.  Each character in S is a type of stone you have.  
 * You want to know how many of the stones you have are also jewels.
 * 
 * The letters in J are guaranteed distinct, and all characters in J and S are letters. 
 * Letters are case sensitive, so "a" is considered a different type of stone from "A".
 * 
 * Example 1:
 * 
 * 
 * Input: J = "aA", S = "aAAbbbb"
 * Output: 3
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: J = "z", S = "ZZ"
 * Output: 0
 * 
 * 
 * Note:
 * 
 * 
 * 	S and J will consist of letters and have length at most 50.
 * 	The characters in J are distinct.
 ***************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<int> f(128, 0);
        int ans  = 0;
        for (char j : J) {
            f[j] = 1;
        }
        for (char s : S) {
            ans += f[s];
        }
        return ans;
    }
};

int main() {
    string J = "aAC";
    string S = "bbbAAaCCcc";

    Solution s;
    cout << s.numJewelsInStones(J, S) << endl;

    return 0;
}

