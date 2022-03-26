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
    
    void inorder(TreeNode*root  , vector<string>&res , string s)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL and root->right==NULL)
        {
            // cout<<s<<' '<<endl;
            s+=to_string(root->val);
            res.push_back(s);
            s.pop_back();
            return;
        }
        s+=to_string(root->val) + "->";
        inorder(root->left,res,s);
        inorder(root->right,res,s);
        s.pop_back();
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(root==NULL)
        {
            return res;
        }
        string s="";
        inorder(root,res,s);
        return res;
    }
};