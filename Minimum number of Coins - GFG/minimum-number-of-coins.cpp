// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
       stack<int>st;
       st.push(1);
       st.push(2);
       st.push(5);
       st.push(10);
       st.push(20);
       st.push(50);
       st.push(100);
       st.push(200);
       st.push(500);
       st.push(2000);
       vector<int>ans;
       
       while(N>0)
       {
           int get=st.top();
           if(get<=N)
           {
               N=N-get;
               ans.push_back(get);
           }
           else if(st.size()>0)
           {
               st.pop();
           }
           
       }
       return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends