/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode*ans;
    
    bool identical(TreeNode*root1,TreeNode* root2)
    {
        if(root1==NULL|| root2==NULL)
        {
            return root1==root2;
        }
        
        return (root1->val==root2->val) and identical(root1->left,root2->left) and identical(root1->right,root2->right);
    }
    
    void dfs(TreeNode*cloned , TreeNode*target)
    {
         if(cloned==NULL)
         {
             return;
         }
        if(identical(cloned,target)==true)
        {
            ans=cloned;
            return;
        }
        dfs(cloned->left,target);
        dfs(cloned->right,target);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            dfs(cloned,target);
        return ans;
    }
};