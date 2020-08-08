// Source : https://oj.leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
/* Date   : 2020-06-02  r
 *          2020-07-05  r
 *          2020-08-08  r
 */

/*****
 * Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

 * For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

 * Given the sorted array: [-10,-3,0,5,9],

 * One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:

      0
     / \
   -3   9
   /   /
 -10  5

 *****/

#include <iostream>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0)  return NULL;
        if (nums.size() == 1) {
            return new TreeNode(nums[0]);
        };

        int mid = nums.size() / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid + 1, nums.end());
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        return root;
    }

    // print tree in-order
    void print(TreeNode *root) {
        if (root == NULL)  return;
        print(root->left);
        cout << root->val << "\n";
        print(root->right);
    }
};

int main() {
    const int arr[] = {-10, -3, 0, 5, 9};
    vector<int> T(arr, arr + 5);

    Solution s;
    s.print(s.sortedArrayToBST(T)); // result: {-10, -3, 0, 5, 9}
    return 0;
}

