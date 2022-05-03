class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())==true)
        {
            return 0;
        }
        vector<int>dummy=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=0;
        bool f=true;
        int st=0,end=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=dummy[i] and f==true)
            {
                st=i;
                f=false;
            }
            if(nums[i]!=dummy[i])
            {
                end=i;
            }
        }
         if(st==0)
         {
             return end+1;
         }
        maxi=end-(st-1);
        // cout<<st<<' '<<end;
        return maxi;        
    }
};