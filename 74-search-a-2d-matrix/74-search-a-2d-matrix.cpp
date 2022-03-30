class Solution {
public:
    bool bsearch(vector<int>nums,int target)
    {
           int start=0,end=nums.size()-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return false;
    
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
         int j=0;
        
        int n=matrix.size(),m=matrix[0].size();
        
        // cout<<matrix[0][m-1]<<' ';
        int i=0;
        for(i=0;i<n;i++)
        {
            if(matrix[i][m-1]==target){return true;}
            else if(matrix[i][m-1]>target){break;}
        }
                
        if(i>=n){return false;}
        
        // cout<<i<<endl;
        
        vector<int>v=matrix[i];
        // for(auto x:v)
        // {
        //     cout<<x<<' ';
        // }
        return bsearch(v,target);
        
    }
};




