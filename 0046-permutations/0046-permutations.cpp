class Solution {
public:
    
    vector<vector<int>>ans;
    
    void generate_permutation(vector<int>nums,int idx)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i] , nums[idx]);
            generate_permutation(nums,idx+1);
            swap(nums[i] , nums[idx]);
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
            
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};