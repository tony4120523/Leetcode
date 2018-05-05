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

