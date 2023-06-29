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
        map<int,map<int,multiset<int>>>mp;
         // index   level elements on same level
        
        queue<pair<TreeNode*,pair<int,int>>>q;
                // node        index and level
        
        q.push({root,{0,0}});
        
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            mp[x.second.first][x.second.second].insert(x.first->val);
            if(x.first->left!=nullptr)
            {
                q.push({x.first->left,{x.second.first-1,x.second.second+1}});
            }
            if(x.first->right!=nullptr)
            {
                q.push({x.first->right,{x.second.first+1,x.second.second+1}});
            }
        }
        vector<vector<int>>res;
        for(auto x:mp)
        {
            vector<int>re;
            for(auto y:x.second)
            {
                for(auto k:y.second)
                {
                    re.push_back(k);
                }
            }
            res.push_back(re);
        }
        
        
        return res;
    }
};