#include <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root, root);
    }
    bool isSameTree(TreeNode* first, TreeNode* second) {
        if (first == NULL && second == NULL)
            return 1;
        if (first == NULL || second == NULL)
            return 0;
        if (first->val == second->val && isSameTree(first->left, second->right) && isSameTree(first->right, second->left))
            return 1;
        return 0;
    }
};
