class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=0;
        
        for(int i=1;i<prices.size();i++)
        {
            int curr=prices[i]-mini;
            maxi=max(curr,maxi);
            mini=min(prices[i],mini);
        }
        return maxi;
    }
};