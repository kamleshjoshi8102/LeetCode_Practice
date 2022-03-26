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
    string mini="zzzzzzzzzzzzzzzzzzzzzzzzzz";
    
    void inorder(TreeNode*root , string re)
    {
        if(root==NULL)
        {
            return;
        }
        re+='a'+root->val;
        
        if(root->left==NULL and root->right==NULL)
        {
            reverse(re.begin(),re.end());
            if(re<mini)
            {
                mini=re;
            }
            return;
        }
        inorder(root->left,re);
        inorder(root->right,re);
        
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string res="";
        if(root==NULL)
        {
            return res;
        }
        inorder(root,res);
        return mini;
    }
};