// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
#define mod 1000000007
int helper(int n , int arr[], int sum, int **dp)
{
    if(n == 0 and sum != 0) return 0;
    if(n == 0 and sum == 0) return 1;
   
   if(dp[n][sum] != -1)
   return dp[n][sum];
   
   if(arr[n-1] <= sum)
   {
        dp[n][sum] = (helper(n-1,arr,sum-arr[n-1],dp)%mod + helper(n-1,arr,sum,dp)%mod);
   }
   else
   {
        dp[n][sum] = helper(n-1,arr,sum,dp)%mod;
   }
   return dp[n][sum]%mod;
   
}
   
int perfectSum(int arr[], int N, int sum)
{
       // Your code goes here
        // code here 
       int **dp = new int*[N+1];
       for(int i = 0 ; i <= N; i ++)
       {
           dp[i] = new int[sum+1];
           for(int j = 0 ; j <= sum ; j ++)
           {
               dp[i][j] = -1;
           }
       }
       return helper(N,arr,sum,dp);
}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends