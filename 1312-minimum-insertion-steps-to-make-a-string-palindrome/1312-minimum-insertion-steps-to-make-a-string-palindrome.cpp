#define ll long long
class Solution {
public:
    bool ispalin(string s){   for(ll i=0;i<=s.size()/2;i++){if(s[i]!=s[s.size()-i-1]){return false;}}return true;}

    int minInsertions(string x) {
        
        if(ispalin(x)==true)
        {
            return 0;
        }
        string y=x;
        reverse(y.begin(),y.end());
        
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
        return  x.size()-dp[n][m];
    }
};
//mbadm
//mdabm