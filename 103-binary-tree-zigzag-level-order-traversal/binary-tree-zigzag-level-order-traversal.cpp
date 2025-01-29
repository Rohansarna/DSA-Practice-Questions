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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root ){
            return {}; 
        }
        vector<vector<int>> res; 
        queue<TreeNode*>q; 
        q.push(root); 
        bool f = 0 ; 
        while(!q.empty()){
            int size = q.size(); 
            vector<int> t; 
            for(int i = 0 ; i< size ; i++){
                TreeNode *x = q.front(); 
                q.pop(); 
                t.push_back(x->val ); 
                if(x->left){
                    q.push(x->left); 
                }
                if(x->right){
                    q.push(x->right); 
                }
            }
            if(f == 0 ){
                res.push_back(t); 
                f  = 1; 

            }
            else{
                reverse(t.begin() , t.end()); 
                res.push_back(t); 
                f = 0 ; 
            }
        }
        return res; 
    }
};