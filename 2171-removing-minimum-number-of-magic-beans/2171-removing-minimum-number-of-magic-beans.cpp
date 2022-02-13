class Solution {
public:
    
//     2 10 3 2
//     2 2 3 10
    
    
    // 4 1 6 5
    
    // 1 4 5 6
    // 0 1 2 3
    // (n-i) 
    
    // let's take example of element 4 in above example 
    // we will convert all to 4 then array will be 0 4 4 4 
    // and its sum will be 12 
    // but orignal sum was 16 so cahnge is 16-12 =4
    //  so we are just checking for every number
    // how many steps it will take to convert it into that particular  number
    
    long long minimumRemoval(vector<int>& beans) {
        long long ans=1e15;
        long long n=beans.size();
        sort(beans.begin(),beans.end());
        
       long long su=0;
       for(auto x:beans)
       {
           su+=x;
       }
        // calculated sum 
        
        for(long long i=0;i<n;i++)
        {
            long long re=su-(n-i) * (long long) beans[i] * 1LL;
            ans=min(ans,re);
        }
        return ans;
    }
};