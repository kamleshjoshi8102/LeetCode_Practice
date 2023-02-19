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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        
        if (root == NULL)
            return res;
 
      queue<TreeNode*> q;
 
      q.push(root);
 
        bool f=true;
        
    while (q.empty() == false) {
        
        queue<TreeNode*>ne;
        vector<int>v;
        while(q.empty()==false)
        {
            TreeNode* node = q.front();
            v.push_back(node->val);
            q.pop();
                 if (node->left != NULL)
                    ne.push(node->left);

                if (node->right != NULL)
                    ne.push(node->right);
        }
        
       if(f==false)
       {
           reverse(v.begin(),v.end());
           f=true;
       }
       else f=false;
        
        res.push_back(v);
        q=ne;        
    }
        
        
        
        return res;
        
    }
};