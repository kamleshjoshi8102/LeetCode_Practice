class Solution {
public: 
//DFS Failed !
    /*
        so here using simple bfs approach 
        we have 4 direction stored in dir 
        iterating all 0's inserting in res which are 0
        and 1 are stored as int maax 
    
    
    */
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat[0].size();
        int n=mat.size();
        
        vector<vector<int>>res(n, vector<int>(m,INT_MAX));
        
        if(n==0)
        {
            return mat;
        }
        
       queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    res[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        
        while(q.empty()==false)
        {
            auto cur=q.front();
            
            q.pop();
            
                 
            
            for(int i=0;i<4;i++)
            {
                int r=cur.first+dir[i][0];
                int c=cur.second+dir[i][1];
                
                if(r>=0 and r<n and c>=0 and c<m)
                {
                     if(res[r][c] >res[cur.first][cur.second]+1 )
                    {
                         res[r][c] = res[cur.first][cur.second]+1;
                            q.push({r,c});
                    }
                }                
            }
        }
        return res;       
    }
};


/*
class Solution {
public: 
    
    // DFS Approach Failed !!!!!!!!!!!!!!!!!
    int mini=INT_MAX;
    void dfs(vector<vector<int>>mat , int i ,int j  , int cn,vector<vector<bool>>vis)
    {
        int n=mat.size();
        int m=mat[0].size();
        
        if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==true)
        {
            return;
        }
        
        if(mat[i][j]==0)
        {
            mini=min(cn,mini);
            return;
        }
        
        vis[i][j]=true;
        
        dfs(mat,i-1,j,cn+1,vis);
        dfs(mat,i+1,j,cn+1,vis);
        dfs(mat,i,j+1,cn+1,vis);
        dfs(mat,i,j-1,cn+1,vis);
        
    
    }

 
  
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>ans;
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<bool>> vis( n , vector<bool> (m, false));
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    v.push_back(0);
                    continue;
                }
                mini=INT_MAX;
                dfs(mat,i,j,0,vis);
                v.push_back(mini);
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};  00 01 02
        10 11 12 
        20 21 22
  00 01 02
        10 11 12 
        20 21 22
    */


















