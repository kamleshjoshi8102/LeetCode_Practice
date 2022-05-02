class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>res;
        for(auto x:nums)
        {
            if(x%2==0)
            {
                res.push_back(x);
            }
        }
                for(auto x:nums)
                {
                    if(x%2!=0)
                    {
                        res.push_back(x);
                    }
                }
        return res;        
    }
};