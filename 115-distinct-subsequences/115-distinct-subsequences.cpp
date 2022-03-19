class Solution {
public:
    
    /*
        if those elements are equal then I have only 2 choices
            include it or not 
            so we will pass two recursion function in which we will include in first and not include in second
            if not equal then we will not include and return it's length -1 
    
    */
    int cn=0;

//     int sub(string s, string t,int n , int m , int dp[][1002])
//     { 
//         if(m==0)
//         {
//             return 1;
//         }
//         if(n==0)
//         {
//             return 0;
//         }
//         if(dp[n][m]!=-1)
//         {
//             return dp[n][m];
//         }
        
//         if(s[n-1]==t[m-1])
//         {
//             return dp[n][m] = sub(s,t,n-1,m-1,dp) + sub(s,t,n-1,m,dp);
//         }
//         else
//         {
//             return dp[n][m]=sub(s,t,n-1,m,dp);
//         }
        
//     }
    
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        
 vector<vector<double>>dp(n+1,vector<double>(m+1,0));
         
   for(int i=0;i<=n;i++)
        dp[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
         

        return dp[n][m];
    }
};