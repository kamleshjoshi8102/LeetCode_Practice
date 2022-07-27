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
    
    TreeNode*helper(vector<int>preorder,int &i,int bound)
    {
        if(i==preorder.size() or preorder[i]>bound)
        {
            return nullptr;
        }
        TreeNode*root=new TreeNode(preorder[i]);
        i++;
        
        root->left=helper(preorder,i,preorder[i-1]);
        root->right=helper(preorder,i,bound);
        
        return root;
        
    }
        
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int i=0;
        
        TreeNode*root=helper(preorder,i,INT_MAX);

        return root;
    }
};