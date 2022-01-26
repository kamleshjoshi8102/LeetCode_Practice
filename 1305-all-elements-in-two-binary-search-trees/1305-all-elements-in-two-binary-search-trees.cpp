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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL){return {};}
 
// When root1 iss Null then simply root 2 will do our work
        
        if(root1==NULL)
    {
        queue<TreeNode*>q;
        vector<int>res;
        q.push(root2);
        while(!(q.empty()))
        {
            TreeNode* v = q.front();
            q.pop();
              res.push_back(v->val);
            if(v->left){q.push(v->left);}
            if(v->right){q.push(v->right);}            
        }
        sort(res.begin(),res.end());       
        return res;
    }

        // When root2 is NULL
        
        
        if(root2==NULL)
        {
            vector<int>res;
            queue<TreeNode*>q;
            q.push(root1);
            while(!(q.empty()))
            {
                TreeNode* v = q.front();
                q.pop();
                   res.push_back(v->val);
                if(v->left){q.push(v->left);}
                if(v->right){q.push(v->right);}            
            }
            q.push(root2);
            sort(res.begin(),res.end());
            return res;
        }
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root1);
        while(!(q.empty()))
        {
            TreeNode* v = q.front();
            q.pop();
               res.push_back(v->val);
            if(v->left){q.push(v->left);}
            if(v->right){q.push(v->right);}            
        }
        q.push(root2);
        while(!(q.empty()))
        {
            TreeNode* v = q.front();
            q.pop();
              res.push_back(v->val);
            if(v->left){q.push(v->left);}
            if(v->right){q.push(v->right);}            
        }
        sort(res.begin(),res.end());       
        return res;
    }
};