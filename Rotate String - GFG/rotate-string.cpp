// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<char> StringQuery(int N, int Q, string S, int Q1[], int Q2[]) {
        vector<char>res;
        int ans=0;
        for(int i=0;i<Q;i++)
        {
            if(Q1[i]==1)
            {
                ans+=N-(Q2[i])%S.size();
                // cout<<S.substr(S.size()-Q2[i],Q2[i])<<' '<< S.substr(0,S.size()-Q2[i])<<endl;
                // Q2[i]=Q2[i]%S.size();
                // S=S.substr(S.size()-Q2[i],Q2[i]) + S.substr(0,S.size()-Q2[i])/;
            }
            else
            {
                res.push_back(S[(Q2[i]+ans)%S.size()]);
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;
        int Q1[Q], Q2[Q];
        for (int i = 0; i < Q; i++) cin >> Q1[i] >> Q2[i];
        Solution ob;
        vector<char> ans = ob.StringQuery(N, Q, S, Q1, Q2);
        for (auto u : ans) cout << u << endl;
    }
}  // } Driver Code Ends