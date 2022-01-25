class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       vector<int>ch=arr;
        sort(ch.begin(),ch.end());
        if(ch==arr){return false;}
        reverse(ch.begin(),ch.end());
        if(ch==arr){return false;}
        
        int i=0,n=arr.size();
        while(i<n)
        {
            if(arr[i]<arr[i+1]) {i++;}
            else
                break;
        }
        
        // cout<<arr[i]<<endl;
        i++;
        
        while(i<n)
        {
            if(arr[i-1]>arr[i]){i++;}
            else
            {
                return false;
            }
        }
    return true;
    }
};