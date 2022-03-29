// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        vector<int>res;
        // int mini=Arr[N-1],m/ini_in=N-1;
        for(int i=0;i<N;i++)
        {
            int j=N-1;
            while(i<=j)
            {
                if(Arr[i]>Arr[j])
                {
                    res.push_back(j);
                    break;
                }
                if(i==j)
                {
                    res.push_back(-1);
                }
                j--;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends