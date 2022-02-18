class Solution {
public:
    
    // we are simply poping that element where nums[i]<se.top()
    // like in 1432219
    
    // we will pop 4 when i=2 and pop 3 when i = 4
    // because in 2341 we should remove 3 instead of 2 if k==1
    
    string removeKdigits(string num, int k) {
        if(num.size()<=k)
        {
            return "0";
        }
        if(k==0)
        {
            return num;
        }
        
        stack<int>se;
        
        string ans="";
        
        se.push(num[0]);
        
        for(int i=1;i<num.size();i++)
        {
            while(se.size()>0 and k>0 and num[i]<se.top())
            {
                se.pop();
                k--;
            }
            se.push(num[i]);
            if(se.size()==1 and num[i]=='0')
            {
                se.pop();
            }
        }       
        // now for those element which are greater like
        // 12345789
        
        while(se.size()>0 and k>0)
        {
            k--;
            se.pop();
        }
        
        while(se.size()>0)
        {
            ans+=se.top();
            se.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0)
        {
            return "0";
        }
        return ans;
        
    }
};