//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++){

            mp[s[i]]++;

        } 

    int k=min(mp['b'],min(mp['a'],min(mp['l'],(min(mp['o'],mp['n'])))));

    

    if(mp['l']>=2*k && mp['o']>=2*k)return k;

    else return min(mp['l'],mp['o'])/2;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends