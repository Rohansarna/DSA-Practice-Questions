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
    bool func(TreeNode *root , TreeNode*root2){
        if(root  && root2){
            bool f = func(root ->left , root2 ->right); 
            bool f2 = func(root ->right , root2 ->left); 
            return root->val == root2->val && f && f2; 
        }
        if(root || root2){
            return 0; 
        }
        return 1; 
    }
    bool isSymmetric(TreeNode* root) {
        return func(root , root ); 
    }
};