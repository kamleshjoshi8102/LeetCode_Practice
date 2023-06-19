class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
        vector<vector<int>>ans;
        
        // first we will do sorting to sort the given 2d array
        
        sort(in.begin(),in.end());
        
        int fr = in[0][0];
        int sc = in[0][1];
        
        for(int i=1;i<in.size();i++)
        {
            int f = in[i][0];
            int s = in[i][1];
            
            if(f<=sc)
            {
                fr = min(f,fr);
                sc = max(sc,s);
            }
            else
            {
                ans.push_back({fr,sc});
                fr=f;
                sc=s;
            }
        }
        ans.push_back({fr,sc});
        
        return ans;
    }
};