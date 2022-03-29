// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& st) {
       map<string,int>mp;
       int cn=0;
       for(int i=0;i<st.size();i++)
        {
            string s=st[i];
            sort(s.begin(),s.end());
            if(mp.find(s)==mp.end())
            {
                mp[s]=cn;
                cn++;
            }
        }
        int n=mp.size();
       vector<vector<string>>res(n);
       for(int i=0;i<st.size();i++)
       {
           string s=st[i];
           sort(s.begin(),s.end());
           
           int get=mp[s];
           
           res[get].push_back(st[i]);
           
       }
        // for(auto x:mp)
        // {
        //     cout<<x.first<<' '<<x.second<<endl;
        // }
        
       return res;
       
       
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends