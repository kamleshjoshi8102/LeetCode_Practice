class Solution {
private:
    void dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<int>>& grid, int &cnt)
    {
        if(i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || vis[i][j] == true || grid[i][j] == 0)
            return;
        
        vis[i][j] = true;
        cnt++;
        
        dfs(i-1, j, vis, grid, cnt);
        dfs(i, j+1, vis, grid, cnt);
        dfs(i+1, j, vis, grid, cnt);
        dfs(i, j-1, vis, grid, cnt);
    }
        
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int ans = 0;
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(vis[i][j] == false && grid[i][j] == 1)
                {
                    int cnt = 0;
                    dfs(i, j, vis, grid, cnt);
                    ans = max(ans, cnt);
                }
            }
        }
        return ans;
    }
};