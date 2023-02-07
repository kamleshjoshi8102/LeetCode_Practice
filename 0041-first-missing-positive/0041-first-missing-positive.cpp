class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       map<long long,int>mp;
               for(int i=0;i<nums.size();i++){
                   if(nums[i]>0)
                   {
                       mp[nums[i]]++;
                   }
               }
        
        int cn=0;
        mp[0]++;
        for(auto x:mp)
        {
             
            if(x.first!=cn && cn!=0)
            {
                return cn;
            }
            cn++;
        }
        return cn;
    }
};