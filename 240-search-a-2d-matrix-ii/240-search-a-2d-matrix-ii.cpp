class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // just starting from top right corner || bottom left corner
        // if element is greater than taget then we decrease column 
        // else row is increased
        
        
        int row=0,col=matrix[0].size()-1;
        
        // cout<<row<<" "<<col<<endl;
        
        while(col>=0 && row<matrix.size())
        {
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                col--;
            }
            else
            {
                row++;
            }
        }
        return false;
        
    }
};