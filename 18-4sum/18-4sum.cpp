class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int i=0,j=0;
        
        for(int i=0;i<n-3;i++)
        {
           if(i>0 and nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 and nums[j]==nums[j-1])
                {
                    continue;
                }
                int k=j+1;
                int l=n-1;
                
                while(k<l)
                {
                    long long su=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    
                    if(su>target)
                    {
                        l--;
                    }
                    else if(su<target)
                    {
                        k++;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    
                        while(k<l and nums[k]==nums[k-1])
                        {
                            k++;
                        }
                        while(k<l and nums[l]==nums[l+1])
                        {
                            l--;
                        }
                        
                    }
                }
                 
            }
        }
        return res;
        
    }
};