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
    
    TreeNode*helper(TreeNode* root)
    {
        if(root->left==nullptr)
        {
            return root->right;
        }
        if(root->right==nullptr)
        {
            return root->left;
        }
        
        TreeNode*rightchild=root->right; 
        
        TreeNode*last=findlastrightnode(root->left);
        
        last->right=rightchild;
        
        return root->left;
        
    }
    TreeNode*findlastrightnode(TreeNode*root)
    {
        if(root->right==nullptr)
        {
            return root;
        }
        return  findlastrightnode(root->right);
    }
    
    
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode*dummy=root;
        if(root==nullptr)
        {
            return nullptr;
        }
        else if(root->val==key)
        {
            return helper(root);
        }
        
        while(root!=nullptr)
        {
            if(root->val>key)
            {
                if(root->left!=nullptr and root->left->val==key)
                {
                    root->left=helper(root->left);break;
                }
                else
                {
                    root=root->left;
                }
            }
            else
            {
                if(root->right!=nullptr and root->right->val==key)
                {
                    root->right=helper(root->right);break;
                }
                else
                {
                    root=root->right;
                }
            }
        }
        
        return dummy;
    }
};