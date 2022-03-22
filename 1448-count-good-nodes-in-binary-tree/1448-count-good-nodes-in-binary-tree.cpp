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
    
    int get(TreeNode*root , int maxi)
    {
        if(root==nullptr)
        {
            return 0;
        }
        
        if(root->val>=maxi)
        {
            maxi=max(maxi,root->val);
            return 1+get(root->left,maxi)+get(root->right,maxi);
        }
        else
        {
            maxi=max(maxi,root->val);
            return get(root->left,maxi)+get(root->right,maxi);
        }
        
    }
    
    int goodNodes(TreeNode* root) {
        return get(root,-1e5);
    }
};