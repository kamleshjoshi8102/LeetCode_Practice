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
    bool glo = true;
    void helper(TreeNode*root)
    {
        if(root==nullptr or ( root->left==nullptr and root->right==nullptr))
        {
            return;
        }
        int su=0;
        if(root->left!=nullptr)
        {
            su+=root->left->val;
        }
        if(root->right!=nullptr)
        {
            su+=root->right->val;
        }
        if(root->val!=su)
        {
            glo=false;
        }
        helper(root->left);
        helper(root->right);
    }
    bool checkTree(TreeNode* root) {
        glo=true;
        if(root==nullptr)
        {
            return true;
        }
        helper(root);
        return glo;
    }
};