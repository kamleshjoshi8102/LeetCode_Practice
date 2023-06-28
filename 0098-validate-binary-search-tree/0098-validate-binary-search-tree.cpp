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
    bool ans=true;
    
    void helper(TreeNode* root, long min, long max)
    {
        if(root==nullptr){
            return;
        }
        
        if(root->val<=min or root->val>=max)
        {
            ans = false;
        }
        
        helper(root->left,min,root->val);
        helper(root->right,root->val,max);
        
    }
    
    bool isValidBST(TreeNode* root) {
        ans=true;
        if(root->left==nullptr and root->right==nullptr)
        {
            return true;
        }
        
        // long long mini = INT_MIN-1;
        // long long maxi = INT_MAX+1;
        
         helper(root,LONG_MIN, LONG_MAX);
        return ans;
    }
};