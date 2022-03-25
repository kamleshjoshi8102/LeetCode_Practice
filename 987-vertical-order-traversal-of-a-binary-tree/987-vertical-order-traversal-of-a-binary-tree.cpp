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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // ok first take map and queue
        
        queue<pair<TreeNode*,pair<int,int>>>q;
        
        map<int,map<int,multiset<int>>>nodes;
        q.push({root,{0,0}});
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode* node = p.first;
            
            int x=p.second.first , level=p.second.second;
            
            nodes[x][level].insert(node->val);
            
            if(node->left)
            {
                q.push({node->left,{x-1,level+1}});
            }
            if(node->right)
            {
                q.push({node->right,{x+1,level+1}});
            }
        }
        vector<vector<int>>res;
        
        for(auto x:nodes)
        {
            vector<int>r;
            // map
             for(auto y:x.second)
             {
                 r.insert(r.end(),y.second.begin(),y.second.end());
             }
            res.push_back(r);
        }
        return res;       
    }
    
};