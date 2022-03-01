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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return res;
        }
        
        q.push(root);
        
        while(q.empty()==false)
        {
            vector<int>v;
            
            queue<TreeNode*>qq;
            while(q.empty()==false)
            {
                TreeNode*get=q.front();
                v.push_back(get->val);
                q.pop();
                if(get->left)
                {
                    qq.push(get->left);
                }
                if(get->right)
                {
                    qq.push(get->right);
                }                     
            }
            q=qq;
            res.push_back(v);
        }
        return res;        
    }
};