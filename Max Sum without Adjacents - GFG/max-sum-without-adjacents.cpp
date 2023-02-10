//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int solve(int i,int n,int *arr,int* dp)
	{
	    if(i>=n)
	        return 0;
	    if(dp[i]!=-1)
	        return dp[i];
	    int ans1=0,ans2=0;
	    ans1=arr[i]+solve(i+2,n,arr,dp);
	    ans2=solve(i+1,n,arr,dp);
	    return dp[i]=max(ans1,ans2);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    int dp[n+1];
	    memset(dp,-1,sizeof(dp));
	    return solve(0,n,arr,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends