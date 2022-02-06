class Solution {
public:
    
// dry run it to understand it more clearly 
    // just swapping after checking it's equal or not 
    
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        for(auto e:nums)
        {
            if(i==0 || i==1 || nums[i-2]!=e)
            {
                nums[i]=e;
                i++;
            }
        }
        return i;
        
    }
};