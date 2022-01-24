class Solution {
public:
    
    // simple binary search algo
    int bsearch(int lo,int end,int target,vector<int>arr)
    {
        
        while(lo<=end)
        {
            int mid=(lo+end)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        
        return -1;
    }
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
    
    int search(vector<int>& nums, int target) {
        
        int st=getmin(nums);
        int x= bsearch(st,nums.size()-1,target,nums);
        int y= bsearch(0,st,target,nums);
        if(x==-1 && y==-1)
        {
            return -1;
        }
        else
        {
            if(x!=-1)
            {
                return x;
            }
            return y;            
        }
        return 0;
    }
};

/*
    [4,5,6,7,0,1,2]
     0 1 2 3 4 5 6
     
     (0+6)/2=3

*/