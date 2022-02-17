class Solution {
public:
    vector<vector<int>>res;
    
    void dp(vector<int>val , int target , vector<int>v , int n)
    {
        if(n<0)
        {
            return;
        }
        int su=accumulate(v.begin(),v.end(),0);
        if(su==target)
        {
            res.push_back(v);
            return;
        }
        if(su>target)
        {
            return;
        }
        dp(val,target,v,n-1);
        if(val[n]<=target)
        {
            v.push_back(val[n]);
            dp(val,target,v,n);
        }
        
       
        
 
        return ;       
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dp(candidates,target,{} ,candidates.size()-1);
        return res;
    }
};