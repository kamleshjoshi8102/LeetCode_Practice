//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {

        
        stack<char>st;

        string ans="";

        for(auto a:s){

            if(!st.empty()&&st.top()==a)st.pop();

            else st.push(a);

        }

        while(!st.empty()){

            ans=st.top()+ans;

            st.pop();

        }

        return ans==""?"-1":ans;

    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends