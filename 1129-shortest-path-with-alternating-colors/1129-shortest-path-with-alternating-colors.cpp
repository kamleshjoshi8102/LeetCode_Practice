class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges){

        vector<int> ans(n, -1), v1(n, 0), v2(n, 0);
        vector<vector<pair<int, int>>> vp(n);
        queue<pair<int, int>> q;

        for(auto &xr : red_edges) 
        {
            vp[xr[0]].push_back({xr[1], 1});
        }
        for(auto &xr : blue_edges) {
            vp[xr[0]].push_back({xr[1], 2});
        }
        
        
        ans[0] = 0;
        
        v1[0] = 1;
        v2[0] = 1;
        
        int dummy = 1;

        for(auto &xr : vp[0])
        {
            q.push(xr);
            if(ans[xr.first] == -1) ans[xr.first] = dummy;
        }

        while(!q.empty())
        {
            
            int size = q.size();
            dummy++;
            
            
            for(int i=0; i<size; ++i)
            {
                auto temp = q.front();
                
                q.pop();
                
                
                if(temp.second == 1) v1[temp.first] = 1;
                else v2[temp.first] = 1;

                for(auto &xr : vp[temp.first])
                {
                    if(temp.second == 1 && (v2[xr.first] || xr.second==1)) continue;
                
                    if(temp.second == 2 && (v1[xr.first] || xr.second==2)) continue;
                    
                    q.push(xr);                      
                    if(ans[xr.first] == -1) ans[xr.first] = dummy;
                
                }
            }
        }
        return ans;
    }
};
