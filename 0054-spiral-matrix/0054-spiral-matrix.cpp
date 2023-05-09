class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col =matrix[0].size();
        int cn =0;
        int total =row*col;
        
        vector<int>res;
        int Top=0;
        int Left=0;
        int Right=row-1;
        int Bottom=col-1;
        
        while(cn<total)
        {
            for(int i=Left;cn<total && i<=Bottom; i++)
            {
                res.push_back(matrix[Top][i]);
                cn++;
            }
            Top++;
            
            for(int i=Top;cn<total && i<=Right; i++)
            {
                res.push_back(matrix[i][Bottom]);
                cn++;
            }
            Bottom--;
            
            for(int i=Bottom;cn<total && i>=Left; i--)
            {
                res.push_back(matrix[Right][i]);
                cn++;
            }
            Right--;
            
            for(int i=Right;cn<total && i>=Top; i--)
            {
                res.push_back(matrix[i][Left]);
                cn++;
            }
            Left++;
        }
        
        
        return res;
        
        
    }
};