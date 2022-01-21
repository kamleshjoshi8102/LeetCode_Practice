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
    int su(TreeNode* &root)
{
      if(root==NULL)
    {
        return 0;
    }
 
    int su1=su(root->right);
    int su2=su(root->left);

    if(su1==0)
    {
        root->right=NULL;
    }
    if(su2==0)
    {
        root->left=NULL;
    }
    return abs(root->val)+abs(su1)+abs(su2);
}
    TreeNode* pruneTree(TreeNode* root) {
         if(root==NULL)
            {
                return NULL;
            }
    int x=su(root);
        if(x==0)
        {
            return NULL;
        }
 return root;
    }
};