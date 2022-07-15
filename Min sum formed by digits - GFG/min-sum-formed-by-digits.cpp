// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
            string s1="",s2="";
        if(n==1)
        {
            return arr[0];
        }
        bool check=false;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s1+=to_string(arr[i]);
            }
            else
            {
                s2+=to_string(arr[i]);
            }
        }
        
        long long nu1=0,nu2=0;
        
        nu1=stoll(s1);
        nu2=stoll(s2);
        
        return (nu1+nu2);
        
        
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
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends