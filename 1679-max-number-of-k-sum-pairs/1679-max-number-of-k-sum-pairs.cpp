class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
        int cn=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int get=k-nums[i];
            if(mp[get]>0)
            {
                cn++;
                mp[get]--;
            }
           else
               mp[nums[i]]++;
        }
        return cn;
    }
};