class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured==0)
        {
            return (double)0;
        }
        double dp[102][102]={0.0};
        
        dp[0][0]=poured;
        
        for(int i=0;i<=100;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(dp[i][j]>=1)
                {
                    dp[i+1][j]+=(double)(dp[i][j]-1)/2.0;
                    dp[i+1][j+1]+=(double)(dp[i][j]-1)/2.0;
                    dp[i][j]=1;
                }
            }
        }
        return dp[query_row][query_glass];       
    }
    
};