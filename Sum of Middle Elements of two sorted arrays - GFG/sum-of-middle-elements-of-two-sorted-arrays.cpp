// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
           int i=0,j=0,cn=0;
           int su=0,f=0;
           while(i<n and j<n)
           {
               if(ar1[i]<=ar2[j])
               {
                   
                   if(cn==n-1)
                   {
                        su+=ar1[i];
                   }
                   else if(cn==n)
                   {
                       su+=ar1[i];
                       f=1;
                       break;
                   }
                   i++;
                   cn++;
               }
               else
               {
                   if(cn==n-1)
                   {
                       su+=ar2[j];
                   }
                   else if(cn==n)
                   {
                       su+=ar2[j];
                       f=1;
                       break;
                   }
                   cn++;
                   j++;
               }
                
                
           }
           if(f==0 and ar1[n-1]<=ar2[0])
           {
               su+=ar2[0];
           }
           else if(f==0 and ar2[n-1]<=ar1[0])
           {
               su+=ar1[0];
           }
           return su;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends