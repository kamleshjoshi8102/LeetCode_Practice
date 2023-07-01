class Solution {
public:
    
    int ans= INT_MAX;
    
    void helper(int ind, vector<int>&temp,vector<int>&cookies, int k , int n)
    {
        if(ind==n)
        {
            int res = INT_MIN;
            for(auto x:temp)
            {
                res=max(res,x);
            }
            ans=min(ans,res);
            return;
        }
        
         for(int i=0;i<k;i++)
         {
              temp[i]+=cookies[ind];
              helper(ind+1,temp,cookies,k,n);
              temp[i]-=cookies[ind];
         }
    }
    
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>temp(k,0);
        int n = cookies.size();
        
        helper(0,temp,cookies,k,n);
        
        return ans;
    }
};