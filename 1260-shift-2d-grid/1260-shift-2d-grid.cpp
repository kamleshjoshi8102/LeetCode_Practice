class Solution {
public:
	// returns reference to the nth element, counting naturally
	// left-to-right and top-to-bottom
    int& get_nth(vector<vector<int>>& vec, int n) {
        int num_rows = vec.size();
        int num_cols = vec[0].size();
        return vec[(n / num_cols) % num_rows][n % num_cols];
    }
    
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int num_rows = grid.size();
        int num_cols = grid[0].size();
        int num_els = num_rows * num_cols;
        
        k = k % num_els;         // don't want to cycle the entire grid multiple times
        if(k == 0) return grid;  // don't want to do useless work
        
        vector<vector<int>> result(num_rows, vector<int>(num_cols));
        int dest = 0;
        int source = num_els - k;
        do {
            get_nth(result, dest) = get_nth(grid, source);
            dest = (dest + 1) % num_els;
            source = (source + 1) % num_els;
        } while( dest != 0);  // this condition means we've wrapped around
        
        return result;        
    }
};