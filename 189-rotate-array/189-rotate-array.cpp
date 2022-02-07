class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // I guess reversing array and then reversing based on kth index will work first
   int n=nums.size();
        if(k>=n)
        {
            k=k%n;
        }
    reverse(nums.begin(),nums.end()-k);        
    reverse(nums.end()-k,nums.end());
    reverse(nums.begin(),nums.end());
        
    }
};