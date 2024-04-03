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
    TreeNode *pre, *firstmistake, *secondmistake;
    void recoverTree(TreeNode* root) {
        firstmistake = 0;
        secondmistake = 0;
        pre = new TreeNode(INT_MIN);
        function(root);
        swap(firstmistake->val, secondmistake->val);
        return;
    }

private:
    void function(TreeNode* root) {
        if (root) {
            function(root->left);
            if (firstmistake == 0 && root->val < pre->val) {
                firstmistake = pre;
            }
            if (firstmistake != 0 && root->val < pre->val) {
                secondmistake = root;
            }
            pre = root;

            function(root->right);
        }
    }
};