class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>>res;
        vector<int>nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        n=nums.size();
        
        int subsetNum=(1<<n);
        
        for(int sub=0;sub<subsetNum;sub++)
        {
            vector<int>te;
            for(int i=0;i<n;i++)
            {
                if((sub & (1<<i))!=0)
                {
                    te.push_back(nums[i]);
                }
            }
            if(te.size()==k)
            {res.push_back(te);}
            
        }
        return res;
    }
};
/*
    [
  [2,4],
  [3,4],
  [1,4],
  [2,3],
  [1,3],
  [1,2],
]

*/