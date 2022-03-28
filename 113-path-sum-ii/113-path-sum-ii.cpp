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
    vector<vector<int>>res;
    
    void helper(TreeNode*root,int t , vector<int>v)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL and root->right==NULL)
        {
            v.push_back(root->val);
            int ac=accumulate(v.begin(),v.end(),0);
            // cout<<ac<<endl;
            if(ac==t)
            {
                res.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,t,v);
        helper(root->right,t,v);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        helper(root,targetSum,{});
        return res;
    }
};