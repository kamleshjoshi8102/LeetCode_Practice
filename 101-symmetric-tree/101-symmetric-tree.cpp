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
    bool isSymmetric(TreeNode* root)
    {
        if (root == nullptr) return true;
        return isMirrorTree(root->left, root->right);
    }
    
private:
    bool isMirrorTree(TreeNode* p, TreeNode* q)
    {
        if(p == nullptr || q == nullptr)
        {
            return p == q;
        }
        
        return p->val == q->val && isMirrorTree(p->left, q->right) && isMirrorTree(p->right, q->left);
    }
};