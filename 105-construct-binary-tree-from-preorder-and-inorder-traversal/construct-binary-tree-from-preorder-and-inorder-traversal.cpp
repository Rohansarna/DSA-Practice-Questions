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
   int index = 0; 
    TreeNode *func(vector<int>& pre , vector<int>&in , int s ,int e){
        if(s > e){
            return 0; 
        }
        TreeNode *root = new TreeNode(pre[index ++]); 
        int curr_idx = 0; 
        for(int i = s ; i <= e ; i++){
            if(in[i] == root ->val ){
                curr_idx = i ; 
                break ; 
            }
        }

        root ->left = func(pre , in , s , curr_idx -1);
        root ->right = func(pre , in , curr_idx + 1 , e);
        return root ; 
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root = func(preorder , inorder , 0 , preorder.size()-1); 
        return root ; 
    }
};