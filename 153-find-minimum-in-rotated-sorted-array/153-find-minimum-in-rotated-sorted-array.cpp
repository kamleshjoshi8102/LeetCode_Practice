class Solution {
public:
    
     int getmin(vector<int>nu)
    {
        int n=nu.size();
        int start=0,end=nu.size()-1;
        if(nu[start]<nu[end])
        {
            return 0;
        }
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nu[start]<=nu[end])
            {
                return start;
            }
            cout<<start<<" "<<end<<' '<<nu[mid]<<endl;
            
            int next=(nu[(mid+1)%n]);
            int pre=(nu[(mid-1+n)%n]);
            if(nu[mid]<next && nu[mid]<pre)
            {
                return mid;
            }
            else if(nu[start]<=nu[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }  
        return 0;
    }
    
    
    int findMin(vector<int>& nums) {
        
      return nums[getmin(nums)];      
        
    }
};