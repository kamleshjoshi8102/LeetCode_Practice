class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN;
        int res = 0;
        int n = prices.size();
        for(int i=n-1;i>=0;i--)
        {
            if(prices[i]>maxi)
            {
                maxi = prices[i];
            }
            if(maxi-prices[i]>res)
            {
                res = maxi - prices[i];
            }
        }
        return res; 
        
    }
};