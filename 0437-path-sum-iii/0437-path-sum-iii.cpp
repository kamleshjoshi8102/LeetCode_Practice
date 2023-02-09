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
    int res=0;
    
    void helper(TreeNode* root,long long tar){
        if(!root) return ;
        
        if(root->val== tar)
        {
            res++;
        }
        
        helper(root->left, tar-(root->val));
        helper(root->right,tar-(root->val));
    }
    
    
    int pathSum(TreeNode* root, int tar) {
        
        if(!root){
            return 0;
        }
        
        helper(root,tar);
        pathSum(root->left, tar);
        pathSum(root->right,tar);
        
        return res;
    }
};