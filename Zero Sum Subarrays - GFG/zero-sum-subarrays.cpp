// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        ll cn=0;
        ll i=0,j=0;
        ll su=0;
       unordered_map<ll,ll>mp;
        mp[0]=1;
       for(auto x:arr)
       {
           su+=x;
           if(mp.find(su)!=mp.end())
           {
               cn+=mp[su];
           }
           
          mp[su]++;
          
       }
       return cn;
        
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends