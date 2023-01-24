class Solution {
public:
    int snakesAndLadders(vector<vector<int>> &b) {
        
        int n = b.size();
        vector<pair<int, int>> cells(n * n + 1);
       
        int label = 1;
        
        vector<int> columns(n);
        iota(columns.begin(), columns.end(), 0);
        
        for (int r = n - 1; r >= 0; r--) 
        {
            for (int column : columns) 
            {
                cells[label++] = {r, column};
            }
            reverse(columns.begin(), columns.end());
        }
        
        vector<int> dist(n * n + 1, -1);
        
        queue<int> q;
        
        dist[1] = 0;
        q.push(1);
        
        while (!q.empty()) 
        {
            int current = q.front();
            q.pop();
            
            for (int next = current + 1; next <= min(current + 6, n * n); next++) 
            {
                
                auto [r, column] = cells[next];
                int destination = b[r][column] != -1 ? b[r][column] : next;
                if (dist[destination] == -1) 
                {
                    dist[destination] = dist[current] + 1;
                    q.push(destination);
                }
                
            }
            
        }
        return dist[n*n];
    }
};