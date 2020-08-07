// Source : https://leetcode.com/problems/merge-two-binary-trees/
/* Date   : 2020-05-06  r
 *          2020-07-12  r
 *          2020-08-07  r
 */

/*************************************************************************************** 
 *
 * Given two binary trees and imagine that when you put one of them to cover the other, 
 * some nodes of the two trees are overlapped while the others are not.
 * 
 * You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, 
 * then sum node values up as the new value of the merged node. 
 * Otherwise, the NOT null node will be used as the node of new tree.
 * 
 * Input: 
 * 	Tree 1                     Tree 2                  
 *           1                         2                             
 *          / \                       / \                            
 *         3   2                     1   3                        
 *        /                           \   \                      
 *       5                             4   7                  
 * Output: 
 * Merged tree:
 * 	     3
 * 	    / \
 * 	   4   5
 * 	  / \   \ 
 * 	 5   4   7
 *
 ***************************************************************************************/


#include <iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL)  
            return t1;

        if (t1 != NULL && t2 != NULL) {
            t1->val += t2->val;
            mergeTrees(t1->left, t2->left);
            mergeTrees(t1->right, t2->right);

            if (t1->left == NULL && t2->left != NULL) 
                t1->left = t2->left;  // 不管下面如何，反正本來就連著 
            if (t1->right == NULL && t2->right != NULL) 
                t1->right = t2->right;
        }
        return t1;
    }

    // preorder 
    void printTree(TreeNode *root) {
        if (root == NULL)  return;
        cout << root->val << endl;
        printTree(root->left);
        printTree(root->right);
        return;
    }
};

int main() {
    // Tree 1
    TreeNode tn1(5);
    TreeNode tn2(3); tn2.left = &tn1;
    TreeNode tn3(2);
    TreeNode tn4(1); tn4.left = &tn2; tn4.right = &tn3;

    // Tree 2
    TreeNode tn5(4);
    TreeNode tn6(7);
    TreeNode tn7(1); tn7.right = &tn5;
    TreeNode tn8(3); tn8.right = &tn6;
    TreeNode tn9(2); tn9.left = &tn7; tn9.right = &tn8;

    // 額外測試
    // TreeNode tn10(11); tn6.right = &tn10;

    // Before
    Solution s;
    cout << "--- Tree 1 ---" << endl;
    s.printTree(&tn4);
    cout << "--- Tree 2 ---" << endl;
    s.printTree(&tn9);

    // Merge Tree
    s.mergeTrees(&tn4, &tn9);

    // After
    cout << "--- Merged Tree ---" << endl;
    s.printTree(&tn4);

    return 0;
}

