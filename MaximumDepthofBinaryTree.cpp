// Source : https://oj.leetcode.com/problems/maximum-depth-of-binary-tree/
/* Date   : 2020-03-19  r
 *          2020-07-01  r
 *          2020-07-21  r
 *          2020-08-19  r
 *          2020-11-06  r
 */

/********************************************************************************** 
* 
* Given a binary tree, find its maximum depth.
* 
* The maximum depth is the number of nodes along the longest path from the root node 
* down to the farthest leaf node.
*               
**********************************************************************************/

#include <iostream>
#include <vector>
#include <string>


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)  return 0;
        return  max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

int main() {
    TreeNode t1(3), t2(9), t3(20), t4(15), t5(7), t6(33);
    t1.left = &t2;  t1.right = &t3;
    t3.left = &t4;  t3.right = &t5;

    t5.right = &t6;

    Solution s;
    cout << s.maxDepth(&t1) << "\n";
    return 0;
}

