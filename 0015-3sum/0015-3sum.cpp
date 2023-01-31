class Solution {
public:
    /* 
        [-1,0,1,2,-1,-4]
        -1 -1 0 1 2 4

    */
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        if(nums.size()<3)
        {
            return v;
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
                int j=i+1;
                int k=nums.size()-1;
            if(i==0 || nums[i]!=nums[i-1])
            {
           
                while(j<k)
                {
                    int su=nums[i]+nums[j]+nums[k];
                    if(su==0)
                    {
                        vector<int>re;
                        re.push_back(nums[i]);
                        re.push_back(nums[j]);
                        re.push_back(nums[k]);
                        
                        v.push_back(re);
                        
                        while(j<k && nums[j]==nums[j+1]){j++;}
                        while(j<k && nums[k-1]==nums[k]){k--;}
                        j++;
                        k--;
                    }
                    else if(su<0)
                    {
                        j++;
                    }
                    else 
                    {
                        k--;
                    }
                }            
            }
        }
        return v;
    }
};