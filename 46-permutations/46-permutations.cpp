class Solution {
public:
vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
            
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};