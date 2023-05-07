class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int su=0;
        for(auto x:nums)
        {
            su+=x;
        }
        
        int temp = 0;
        int n = nums.size();
        temp = (n*(n+1))/2;
        
        return abs(temp-su);
        
    }
};