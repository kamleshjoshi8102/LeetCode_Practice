class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>cn(n,1);
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                    cn[i]=max(cn[i],cn[i-1]+1);
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                cn[i]=max(cn[i],cn[i+1]+1);
            }
        }
         
        int su=0;
        for(auto x:cn)
        {
            su+=x;
        }
        
        return su;
    }
};