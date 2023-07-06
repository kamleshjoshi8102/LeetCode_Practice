class Solution {
public:
    
    
    void helper(vector<int>&candidates,int target,vector<int>temp,vector<vector<int>>&ans,int index,int n)
    {
        int su = accumulate(temp.begin(),temp.end(),0);
        if(index>=n)
        {
            if(su==target)
            {
                ans.push_back(temp);
            }
            return;
        }
        
        if(su>target)
        {
            return;
        }
        
        helper(candidates,target,temp,ans,index+1,n);
        
        if(su+candidates[index]<=target) {
            temp.push_back(candidates[index]);
            helper(candidates,target,temp,ans,index,n);
        }
        return;
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     
        vector<vector<int>>ans;
        
        helper(candidates,target,{},ans,0,candidates.size());
        
        return ans;
        
    }
};