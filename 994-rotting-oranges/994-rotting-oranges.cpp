class Solution {
public:
    int orangesRotting(vector<vector<int>>& mat) {
        int m=mat[0].size();
        int n=mat.size();
        int tot=0;
        
       queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]!=0){tot++;}    // maintaining count of number of total oranges
                if(mat[i][j]==2)
                {
                    q.push({i,j}); // pushing rotten oranges inside queue for out approach
                }
            }
        }
        int cn=0;
        
        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } }; // directions 
        int days=0;
        
        while(q.empty()==false)
        {
            int si=q.size(); // looping till its size
            
            cn+=si; // updating all rotten oranges
            while(si--)
            {
                auto it=q.front();
                q.pop();
                int r=it.first;
                int c=it.second;
                // getting row and col of rotten oranges 
                
                for(int i=0;i<4;i++)  // iterating in all 4 directions 
                {
                    int fir=r+dir[i][0];
                    int sec=c+dir[i][1];
                        
                    // Boundary condition checks
                    
                    if(fir>=0 and fir<n and sec<m and sec>=0 and mat[fir][sec]==1)
                    {
                        mat[fir][sec]=2;
                        q.push({fir,sec});
                    }
                }
            }
            if(!q.empty()){
                
                 days++;            // if size of queue is greater than 0 it means that 
                                    // it still has some oranges to be processed
            } 
        }     
     
        if(cn!=tot) // if not then it means we have still some oranges left
        {
            return -1;
        }
            
        return days;
        
    }
};
