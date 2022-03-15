class Solution {
public:
    string shortestCommonSupersequence(string x, string y) {
         int n=x.size();
        int m=y.size();
        int dp[n+1][m+1];
        
 
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
                string s="";

                int i=n,j=m;

                while(i>0 and j>0)
                {
                    if(x[i-1]==y[j-1])
                    {
                        s+=x[i-1];
                        i--;
                        j--;
                    }
                    else
                    {
                        if(dp[i-1][j]>dp[i][j-1])
                        {
                            s+=x[i-1];
                            i--;
                        }
                        else 
                        {
                            s+=y[j-1];
                            j--;
                        }
                    }
                }
        
        while(i>0)
        {
            s+=x[i-1];
            i--;
        }
        while(j>0)
        {
            s+=y[j-1];
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};