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
    int mini=INT_MAX;
    
    void mins(TreeNode*root, int cnt)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->left==nullptr and root->right==nullptr)
        {
            mini=min(mini,cnt);
            return;
        }
        mins(root->left,cnt+1);
        mins(root->right,cnt+1);
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        
        mins(root,1);
        return mini;
    }
};