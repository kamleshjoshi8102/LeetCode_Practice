class Solution {
public:
    // Simple Logic here
    
    /*
        if a is less than nums[i] then assign it to b 
        if b is less than any number then return true 
        since it will be our third element i.e, c
    
    */
    
    bool increasingTriplet(vector<int>& nums) {
    int n=nums.size();
    int a=INT_MAX,b=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(b<nums[i])
            {
                return true;
            }
            if(a<nums[i])
            {
                b=min(b,nums[i]);
            }
            else
                a=min(nums[i],a);
        }
     return false;
    }
};