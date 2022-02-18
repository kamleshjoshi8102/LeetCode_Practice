class Solution {
public:
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