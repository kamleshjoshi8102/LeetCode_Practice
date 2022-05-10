class Solution {
public:
    vector<vector<int>>res;
    
    void helper(int k ,int n , int st , vector<int>&v)
    {
        if(k==v.size())
        {
            if(n==0)
            {
                res.push_back(v);
            }
            return;
        }
        
        for(int i=st;i<=9;i++)
        {
            v.push_back(i);
            helper(k,n-i,i+1,v);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        
        helper(k,n,1,v);
        
        return res;
        
    }
};