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
    int func(TreeNode *root){
        if(root ){
            int lh = func(root ->left); 
            int rh = func(root ->right);  
            if(lh == 0 ){
                return 1 + rh ; 
            }
            else if(rh == 0 ){
                return 1 + lh; 
            }
            return 1 + min(lh , rh ); 
        }
        return 0 ;
    }
    int minDepth(TreeNode* root) {
        return func(root ); 
    }
};