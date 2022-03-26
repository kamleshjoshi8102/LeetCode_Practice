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
    int findBottomLeftValue(TreeNode* root) {
        // Idea is to go level wise and then return last level's first value 
        //  :)
        int res=0,max_level=0;
        if(root==NULL)
        {
            return 0;
        }
        unordered_map<int,int>mp;
        queue<pair<TreeNode*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            TreeNode*node=p.first;
            int level=p.second;
            max_level=max(max_level,level);
            
            if(mp.find(level)==mp.end())
            {
                mp[level]=node->val;
            }
            if(node->left)
            {
                q.push({node->left,level+1});
            }
            if(node->right)
            {
                q.push({node->right,level+1});
            }
        }
        
        return mp[max_level];
        
    }
};