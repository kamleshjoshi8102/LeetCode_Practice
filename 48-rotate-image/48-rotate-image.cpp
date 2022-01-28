class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>matrix1=matrix;
        
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix1[i][j]=matrix[j][i];
            }
            // cout<<endl;
        }
        for(int i=0;i<matrix1.size();i++)
        {
             for(int j=0;j<matrix1.size()/2;j++)
                {
                     swap(matrix1[i][j],matrix1[i][n-j-1]);
                }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                cout<<matrix1[i][j]<<' ';
            }
            cout<<endl;
        }
     matrix = matrix1;
    }
};