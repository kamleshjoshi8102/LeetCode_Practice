class Solution {
public:
    vector<vector<int>>res;
    
    
    void helper(int k , int n , vector<int>&v,int st)
    {
        if(k==v.size())
        {
            if(n==0)
            {
                res.push_back(v);
            }
        }
        for(int i=st;i<=9;i++)
        {
            v.push_back(i);
            helper(k,n-i,v,i+1);
            v.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        helper(k,n,v,1);
        
        return res;
    }
};