class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue <int> pq;
        int mini=INT_MAX;
        for(auto x:nums)
        {
            if(x%2!=0)
            {
                x=x*2;
            }
            pq.push(x);
            mini=min(mini,x);
        }
        
        int maxi_d=INT_MAX;
        
        while(pq.top()%2==0)
        {
            int top=pq.top();
            pq.pop();
            maxi_d=min(maxi_d,top-mini);
            top=top/2;
            mini=min(mini,top);
            pq.push(top);
        }
        maxi_d=min(maxi_d,pq.top()-mini);
        return maxi_d;
    }
};