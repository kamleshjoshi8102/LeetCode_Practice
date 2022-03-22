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
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        
        if(root->val%2==0)
        {
            if(root->left!=NULL)
            {
                if(root->left->left!=NULL)
                {
                    su+=root->left->left->val;
                }
                if(root->left->right!=NULL )
                {
                    su+=root->left->right->val;
                }
            }
            if(root->right!=NULL)
            {
                if(root->right->left!=NULL)
                {
                    su+=root->right->left->val;
                }
                if(root->right->right!=NULL)
                {
                    su+=root->right->right->val;
                }
            }
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        
        
        return su;
    }
};