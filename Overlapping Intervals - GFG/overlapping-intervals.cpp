// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& ir) {
         vector<vector<int>>res;
         sort(ir.begin(),ir.end());
         int fir=ir[0][0];
         int sec=ir[0][1];
         int n=ir.size();
         
         for(int i=1;i<n;i++)
         {
             int f=ir[i][0];
             int s=ir[i][1];
             
             if(sec>=f)
                {
                    sec=max(s,sec);
                }
                else
                {
                    vector<int>v;
                    v.push_back(fir);
                    v.push_back(sec);
                    res.push_back(v);
                    fir=f;
                    sec=s;
                }
         }
                    vector<int>v;
                    v.push_back(fir);
                    v.push_back(sec);
                    res.push_back(v);
                    return res;
         
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends