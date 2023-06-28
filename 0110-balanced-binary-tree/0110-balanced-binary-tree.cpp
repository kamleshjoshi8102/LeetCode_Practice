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
    
    int dfs(TreeNode*root, bool &check){
        if(root==nullptr)
        {
            return 0;
        }
        
        int l = dfs(root->left,check);
        
        int r = dfs(root->right,check);
        
        if(abs(l-r)>1)
        {
            // cout<<l<< " "<<r<<root->val<<endl;
            check=false;
        }
       return 1+max(l,r); 
    }
    
    bool isBalanced(TreeNode* root) {
       
        bool ans=true;
        
        dfs(root,ans);
       
        return ans;
        
    }
};