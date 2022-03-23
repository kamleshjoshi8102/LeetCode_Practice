class Solution {
public:
    int re(vector<int>&s,int in ,int time , vector<vector<int>> & dp)
    {
        if(in==s.size())
        {return 0;}
        else if(dp[in][time]!=-1)
        {
            return dp[in][time];
        }
        return dp[in][time] = max ( (re(s,in+1,time+1,dp)+(s[in]*(time+1)))
            ,re(s,in+1,time,dp) 
            );
        
        
        
    }
    
    
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        
        vector<vector<int>> dp (s.size() + 1, vector<int> (s.size() + 1, -1) );
        
        return re(s,0,0,dp);
        
    }
};