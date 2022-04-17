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
    
    void helper(TreeNode*root , vector<int>&v)
    {
        if(root==nullptr)
        {
            return ;
        }
        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>r;
        helper(root,r);
        TreeNode *p=new TreeNode();
        root=p;
        
        sort(r.begin(),r.end());
        
        for(auto x:r)
        {
            TreeNode*i=new TreeNode();
          
            i->val=x;
            p->right=i;
            p->left=nullptr;
            p=p->right;
        }
        
        
        return root->right;
        
        
    }
};