class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>>temp=matrix;
        int n=matrix.size(),m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp[i][j]=matrix[j][i];
            }
        }
        
        matrix=temp;
        
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};