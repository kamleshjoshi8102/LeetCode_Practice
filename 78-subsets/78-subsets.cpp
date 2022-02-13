class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        
        int n=nums.size();
        
        int subsetNum=(1<<n);
        
        for(int sub=0;sub<subsetNum;sub++)
        {
            vector<int>te;
            for(int i=0;i<n;i++)
            {
                if((sub & (1<<i))!=0)
                {
                    te.push_back(nums[i]);
                }
            }
            res.push_back(te);
            
        }
        return res;
        
    }
};