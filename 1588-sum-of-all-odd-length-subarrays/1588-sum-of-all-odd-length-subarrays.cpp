class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size(),cn=2;
 
       int pre[n];
        pre[0]=arr[0];
        int sum=arr[0];
        int su=0;
        for(int i=1;i<arr.size();i++)
        {
            pre[i]=pre[i-1]+arr[i];
            sum+=arr[i];
        }
        if(n<3)
        {
            return sum;
        }
            su+=sum;
        for(int i=2;i<n;i+=2)
        {
            su+=pre[i];
            for(int j=i+1;j<n;j++)
            {
               su+=pre[j]-pre[j-i-1];
            }
        }
        
        return su;
        
        return 0;
    }
};