class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        if(nums.size()==0){return res;}
        int st=-1111111;
        int end=-1111111;
        st=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                end=nums[i];
                continue;
            }
            else{
                string re="";
                re+=to_string(st);
                if(st!=end and end!=-1111111)
                {
                    re+="->";
                    re+=to_string(end);
                }
                st=nums[i];
                end=-1111111;
                res.push_back(re);
            }
        }
        if(st!=-1111111)
        {
            string re="";
            re+=to_string(st);
            if(st!=end and end!=-1111111)
            {
                re+="->";
                re+=to_string(end);
            }
            res.push_back(re);
        }
        for(auto x:res)
        {
            cout<<x<<' ';
        }
        return res;
    }
};