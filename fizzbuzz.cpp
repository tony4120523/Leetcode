#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 105; i++) {
        string str = "";

        if (i % 3 == 0)  str += "fizz";
        if (i % 5 == 0)  str += "buzz";
        if (i % 7 == 0)  str += "7777";

        if (str.length() > 0) {
            cout << str << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}

