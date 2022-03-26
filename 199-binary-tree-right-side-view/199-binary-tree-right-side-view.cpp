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
    vector<int> rightSideView(TreeNode* root) {
        // Idea is to take last node in every level
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        map<int,int>mp;
        queue<pair<TreeNode*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            TreeNode*get=p.first;
            
            int level=p.second;
            
            mp[level]=get->val;
        
            if(get->left)
            {
                q.push({get->left,level+1});
            }
            if(get->right)
            {
                q.push({get->right,level+1});
            }
        }
            for(auto x:mp)
            {
                ans.push_back(x.second);
            }
        return ans;
        
    }
};