class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carr= 0;
        vector<int>ans;
        
        for(int i=0;i<digits.size();i++)
        {
           int get = digits[i];
           if(i==0)
           {
               if(get+1>=10)
               {
                   carr=1;
                   ans.push_back(0);
               }
               else
               {
                   ans.push_back(get+1);
               }
           }
           else if(carr>=1)
           {
               if(get+1>=10)
               {
                   carr=1;
                   ans.push_back(0);
               }
               else
               {
                   ans.push_back(get+1);
                   carr=0;
               }
           }
            else
            {
                ans.push_back(digits[i]);
            }
        }
        if(carr>0)
        {
                ans.push_back(1);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};