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

