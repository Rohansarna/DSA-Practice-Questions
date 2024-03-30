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
int x;
    void func(TreeNode *root){
        if(root ){
            x ++ ; 
            if(root ->left){

            func(root ->left); 
            }
            if(root ->right){

            func(root ->right); 
            }
        }
        return ; 
    }

    int countNodes(TreeNode* root) {
        x = 0 ; 
        func(root);
        return x ;
    }
};