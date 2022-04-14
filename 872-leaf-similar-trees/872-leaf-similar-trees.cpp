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
    
   vector<int>v;
void dfs(TreeNode*root)
{
  if(root==nullptr)
  {
      return;
  }  
  if(root->left==nullptr and root->right==nullptr)
  {
      v.push_back(root->val);
      return;
  }
  dfs(root->left);
  dfs(root->right);
}

    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    v.clear();
    dfs(root1);
    vector<int>v1;
    v1=v;
    v.clear();
    dfs(root2);
    vector<int>v2=v;

    return (v1==v2);    
    }
};