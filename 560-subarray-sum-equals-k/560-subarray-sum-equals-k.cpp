class Solution {
public:
    /*
        simply using a prefix sum array which will store sum till it's index
         
        now checking if it's equal to k or not if equal then add to answer
        
        and then prefix_sum-k=value
        
        if(we have any value present before then we can get it's sum)
        
    
    */
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        unordered_map<int,int>mp;
        int pre[n+1];
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        int cn=0;
        int i=0;
        while(i<n)
        {
            if(pre[i]==k)
            {
                cn++;
            }
            int get=pre[i]-k;
            if(mp.find(get)!=mp.end())
            {
                cn+=mp[get];
            }
            mp[pre[i]]++;
            i++;
        }
        
        
        
        
        return cn;
    }
};