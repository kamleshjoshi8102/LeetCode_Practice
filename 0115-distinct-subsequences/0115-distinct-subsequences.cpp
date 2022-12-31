class Solution {
public:
    
    /*
        if those elements are equal then I have only 2 choices
            include it or not 
            so we will pass two recursion function in which we will include in first and not include in second
            if not equal then we will not include and return it's length -1 
    
    */
    int cn=0;

    int sub(string s, string t,int n , int m , int dp[][1002])
    { 
        if(m==0)
        {
            return 1;
        }
        if(n==0)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        
        if(s[n-1]==t[m-1])
        {
            return dp[n][m] = sub(s,t,n-1,m-1,dp) + sub(s,t,n-1,m,dp);
        }
        else
        {
            return dp[n][m]=sub(s,t,n-1,m,dp);
        }
        
    }
    
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        int dp[1002][1002];
        for(int i=0;i<1002;i++)
        {
            for(int j=0;j<1002;j++)
            {
                dp[i][j]=-1;
            }
        }
        
        return sub(s,t,n,m,dp);

        // return dp[n][m];
    }
};