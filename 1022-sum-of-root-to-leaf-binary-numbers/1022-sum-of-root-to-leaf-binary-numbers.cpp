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
    int su=0;
    int get(string s)
    {
        // cout<<s<<' ';
        int res=0;
        int cn=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                res+=pow(2,cn);
            }
            cn++;
        }
        // cout<<res<<" ";
        return res;   
    }
    void nu(TreeNode*root , string s )
    {
        if(root->left==NULL and root->right==NULL)
        {
            s+=to_string(root->val);
            su+=get(s);
            return;
        }
        
        
        if(root->left)
        {
             string re=s;
            re+=to_string(root->val);
            nu(root->left,re);
        }
        if(root->right)
        {
            string re=s;
            re+=to_string(root->val);
            nu(root->right,re);
        }
        return;
    }
    
    
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        
        nu(root,"");
        
        return  su;
        
    }
};