class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res=0;
        int prev_cn=0;
        for(auto x:bank)
        {
            int cn=0;
            for(auto y:x)
            {
                if(y=='1')
                {
                    res+=prev_cn;
                    cn++;
                }
            }
            // res+=prev_cn;
            if(cn>0)
            {prev_cn=cn;}
        }
        return res;
    }
};