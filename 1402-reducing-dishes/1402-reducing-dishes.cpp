class Solution {
public:
    int maxSatisFaction(vector<int>&satisfaction, int prevTime, int l, vector<vector<int>> & dp){
        if(l == satisfaction.size()){
            return 0;
        }
        else if(dp[l][prevTime] != -1){
            return dp[l][prevTime];
        }
        
       return dp[l][prevTime] =  max(
         (prevTime + 1)*satisfaction[l] +  maxSatisFaction(satisfaction, prevTime + 1, l+1, dp),
            
          maxSatisFaction(satisfaction, prevTime, l+1, dp)
            
        );
        
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        vector<vector<int>> dp (satisfaction.size() + 1, vector<int> (satisfaction.size() + 1, -1) );
        return maxSatisFaction(satisfaction, 0, 0, dp);
    }
};