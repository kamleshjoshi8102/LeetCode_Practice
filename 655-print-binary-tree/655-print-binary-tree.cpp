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
    int height(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    
    void solve(vector<vector<string>>&res,TreeNode*root,int height,int r , int col)
    {
        if(root==NULL)
        {
            return;
        }
        int x=pow(2,height-r-1);
        if(root->left)
        {
            res[r+1][col-x]=to_string(root->left->val);
            solve(res,root->left,height,r+1,col-x);
        }
        if(root->right)
        {
            res[r+1][col+x]=to_string(root->right->val);
            solve(res,root->right,height,r+1,col+x);
        }
            
    }    
        
        
        
    vector<vector<string>> printTree(TreeNode* root) {
        int h=height(root);
        int col=pow(2,h)-1;
        int mid=(col-1)/2;
        vector<vector<string>>res(h,vector<string>(col,""));
        res[0][mid]=to_string(root->val);
        solve(res,root,h-1,0,mid);        
        return res;
    }
};




