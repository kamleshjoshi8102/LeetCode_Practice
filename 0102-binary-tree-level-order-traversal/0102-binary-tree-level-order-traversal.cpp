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
        if(root==nullptr)
        {
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        
        vector<vector<int>>res;
        
        while(q.size())
        {
            
            queue<TreeNode*>tempq;
            vector<int>temp;
            while(q.size())
            {
                TreeNode*get = q.front();
                
                temp.push_back(get->val);
                q.pop();
                
                if(get->left)
                {
                    tempq.push(get->left);
                }
                if(get->right)
                {
                    tempq.push(get->right);
                }
            }
            res.push_back(temp);
            q=tempq;
            
        }
        return res;
        
    }
};