class Solution {
public:
    
    bool bs(vector<int>v,int target)
    {
        int hi=v.size()-1;
        int lo=0;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            if(v[mid]==target)
            {
                return true;
            }
            else if(v[mid]>target)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n  =matrix.size();
        int m = matrix[0].size();
        int i=0,j=m-1;
        if(n==1)
        {
            return bs(matrix[0],target);
        }
        // cout<<n<<" "<<m<<endl;
        
        while( i<n and j<m and  matrix[i][j]<=target)
        {
            // cout<<matrix[i][j];
            if(target==matrix[i][j])
            {
                return true;
            }
            i++;
        }
        if(i>=n)
        {
            return false;
        }
        // cout<<matrix[i][j]<<" "<<i<<j<<endl;
        
        vector<int>v = matrix[i];
        
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        
        // cout<<matrix[0][j]<<matrix[i][j]<<endl;
        
        return bs(v,target);
            
        return false;
        
    }
};