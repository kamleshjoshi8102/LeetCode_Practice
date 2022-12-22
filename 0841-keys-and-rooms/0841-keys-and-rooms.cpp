class Solution {
public:

    void dfs(map<int,int>mp, vector<vector<int>>r, int curr, vector<int>&vis)
    {
        
       if(vis[curr]==-1)
       {
           return;
       }
        
       vis[curr]=-1;
        
       vector<int>v = r[curr];
        
       for(auto x:v)
       {
           dfs(mp,r,x,vis);
       }
        
        
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        map<int,int>mp;
        
        int n = rooms.size();
        vector<int>vis(n,0);
        
        dfs(mp,rooms,0,vis);
    
        vector<int>temp (n,-1);
        
        if(temp==vis)
        {
            return true;
        }
        
        return false;;
    }
};