class Solution {
public:
    
    void helper(int index,int n, vector<int>&nums, vector<int>temp, set<vector<int>>&ans)
    {
        if(index>=n)
        {
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return;
        }
        
        // not present 
        
        helper(index+1,n,nums,temp,ans);
        
        // present
        
        temp.push_back(nums[index]);
        
        helper(index+1,n,nums,temp,ans);
            
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>res;
        
        helper(0,nums.size(),nums,{},ans);
        
        for(auto x:ans)
        {
            res.push_back(x);
        }
        
        return res;
        
    }
};