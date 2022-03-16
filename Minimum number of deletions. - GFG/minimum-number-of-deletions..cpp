// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

 int longestPalindromeSubseq(string x) {
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
 
        
        return dp[n][n];      
        
    }
int minDeletions(string str, int n) { 
    int n1 =longestPalindromeSubseq(str);
     
     return n-n1;
} 