// Source : https://leetcode.com/problems/fizz-buzz/
/* Date   : 2019-10-25  r
 *          2019-11-18  r
 *          2020-08-10  rename
 */

/*************************************************************************************** 
 *
 * Write a program that outputs the string representation of numbers from 1 to n.
 * 
 * But for multiples of three it should output “Fizz” instead of the number and for the 
 * multiples of five output “Buzz”. For numbers which are multiples of both three and 
 * five output “FizzBuzz”.
 * 
 * Example:
 * 
 * n = 15,
 * 
 * Return:
 * [
 *     "1",
 *     "2",
 *     "Fizz",
 *     "4",
 *     "Buzz",
 *     "Fizz",
 *     "7",
 *     "8",
 *     "Fizz",
 *     "Buzz",
 *     "11",
 *     "Fizz",
 *     "13",
 *     "14",
 *     "FizzBuzz"
 * ]
 ***************************************************************************************/

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

