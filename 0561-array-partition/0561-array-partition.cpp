class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
     
        
        // 1 2 2 5 6 6 
        
        int res=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i=i+2)
        {
            res+=nums[i];
        }
        
        
        return res;
        
        
    }
};