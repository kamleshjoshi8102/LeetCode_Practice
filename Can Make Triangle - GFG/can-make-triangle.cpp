// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> A, int N){
       vector<int>res;
       for(int i=0;i<A.size()-2;i++)
       {
           int a=A[i],b=A[i+1],c=A[i+2];
           if(a+b>c and b+c>a and c+a>b)
           {
               res.push_back(1);
           }
           else
           {
               res.push_back(0);
           }
       }
       return res;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }

    return 0; 
}   // } Driver Code Ends