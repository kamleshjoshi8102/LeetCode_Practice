class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>v;
        
        int half=nums.size();
        
        half=half/2;
        
        for(int i=0;i<nums.size()/2;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[half]);
            half++;
        }
      
        return v;
        
    }
};