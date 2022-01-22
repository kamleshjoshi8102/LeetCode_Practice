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
    int su=0;
    int deep(TreeNode*root)
    {
       if(root==NULL)
       {
           return -1;
       }
        int l=deep(root->left);
        int r=deep(root->right);
        if(l>r)
        {
            return l+1;
        }
        else
        {
            return r+1;
        }
    
    }
    void sum(TreeNode*root,int de)
    {
        if(root==NULL)
        {
            return;
        }
        sum(root->left,de-1);
        sum(root->right,de-1);
        
        cout<<de<<" "<<root->val<<' '<<endl;
        
        if(de==0)
        {
            su+=root->val;
        }
        
    }
    int deepestLeavesSum(TreeNode* root) {
    
    int de=deep(root);
        cout<<"de"<<de<<endl;
     sum(root,de);
        
        return su;    
    }
};