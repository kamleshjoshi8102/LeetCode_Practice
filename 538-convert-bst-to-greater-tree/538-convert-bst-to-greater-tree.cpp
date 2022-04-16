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
    void greaterTree(TreeNode* root, int &maxSum){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            root->val += maxSum;
            maxSum = root->val;
            return;
        }else{
            greaterTree(root->right, maxSum);
                root->val += maxSum;
                maxSum = root->val;
            greaterTree(root->left, maxSum);
        }
        
    }
    TreeNode* convertBST(TreeNode* root) {
        int val = 0;
        greaterTree(root, val);
        return root;
    }
};