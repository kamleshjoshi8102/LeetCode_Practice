class Solution {
public:
    bool bsearch(vector<int>arr,int target)
    {
        int n=arr.size();
        int lo=0,hi=n-1;
        
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(arr[mid]==target)
            {
                return true;
            }
            if(arr[mid]>target)
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
    int findKthPositive(vector<int>& arr, int k) {
        int cn=1;
        int till=0;
        
        while(1)
        {
            if(bsearch(arr,cn)==false)
            {
                till++;
            }
            if(till==k)
            {
                return cn;
            }
            cn++;
        }
                
    }
};