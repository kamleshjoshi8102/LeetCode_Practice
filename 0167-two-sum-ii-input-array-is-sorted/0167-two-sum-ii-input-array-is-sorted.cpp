class Solution {
public:
    
    int bs(vector<int>&arr, int l, int h, int x)
    {
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(arr[mid]==x)
            {
                return mid;
            }
            else if(arr[mid]>x)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return -1;
        
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=0;
        
        int n = numbers.size();
        
        for(int i=0;i<n-1;i++)
        {
            
            int num = target - numbers[i];
            
            int getIndex = bs(numbers,i+1,n-1,num);
            
            if(getIndex!=i and getIndex!=-1)
            {
                return {i+1,getIndex+1};
            }
            
        }
        
        return {-1,-1};
        
    }
};