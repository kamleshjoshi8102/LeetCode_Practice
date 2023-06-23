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
    int cnt=0;
        
    int check(TreeNode* root,int &cnt)
    {
        if(root==nullptr)
        {
            return 0;
        }
        return max( check(root->left,cnt),check(root->right,cnt) )+1;
    }
    
    int maxDepth(TreeNode* root) {
        int cnt=0;
        return check(root,cnt);
        
    }
};