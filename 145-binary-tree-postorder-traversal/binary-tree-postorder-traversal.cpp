/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void func(TreeNode* root, vector<int>& v) {
        if (root) {
            func(root->left, v);
            func(root->right, v);
            v.push_back(root->val);
            return;
        }
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        func(root, v);
        return v;
    }
};