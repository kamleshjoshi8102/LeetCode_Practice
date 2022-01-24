class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ne;
        vector<int>po;
        for(auto x:nums)
        {
            if(x<0){
                ne.push_back(x);
            }
            else
            {
                po.push_back(x);
            }
        }
        vector<int>re;
        bool f=true;
        int i=0,j=0;
        while(i<ne.size()and j<po.size())
        {
            if(f==true)
            {
                re.push_back(po[j]);
                j++;
                f=false;
            }
            else if(f==false)
            {
                f=true;
                re.push_back(ne[i]);
                i++;
            }
        }
        if(i<ne.size())
        {
            re.push_back(ne[i]);
            i++;
        }
        return re;       
        
            // if()
    }
};