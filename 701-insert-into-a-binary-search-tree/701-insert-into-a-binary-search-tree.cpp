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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *st=new TreeNode();
        
        if(root==NULL)
        {
            TreeNode * u=new TreeNode(val);
            return u;
        }
        
        st=root;
        
        while(true)
        {
            if(st->val<=val)
            {
                if(st->right==NULL)
                {
                    TreeNode*u=new TreeNode(val);
                    st->right=u;
                    break;
                }
                else
                {
                    st=st->right;
                }
            }
            else
            {
                if(st->left!=NULL)
                {
                    st=st->left;
                }
                else
                {
                    TreeNode*u=new TreeNode(val);
                    st->left=u;
                    break;
                }
            }
        }
        return root;
        
        
    }
};