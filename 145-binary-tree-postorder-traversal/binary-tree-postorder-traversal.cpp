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
    vector<int>res; 
    void func(TreeNode *root){
        if(root ){
            if(root ->left){

            func(root ->left); 
            }
            if(root ->right){

            func(root ->right); 
            }
            res.push_back(root ->val); 
        }
        return ; 
    }

    vector<int> postorderTraversal(TreeNode* root) {
        res.clear(); 
        func(root );
        return res; 
    }
};