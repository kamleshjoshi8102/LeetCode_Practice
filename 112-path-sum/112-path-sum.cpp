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
    
    bool f=false;
    
    void ch(TreeNode*root , int target,int su)
    {
          if(root==NULL)
            {
                return;
            }
        if(root->left==NULL and root->right==NULL)
        {
            su+=root->val;
            if(su==target)
            {
                f=true;
            }
            return;
        }
      
        ch(root->left,target,su+root->val);
        ch(root->right,target,su+root->val);
        
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        f=false;
        
        ch(root,targetSum,0);
        return f;
    }
};