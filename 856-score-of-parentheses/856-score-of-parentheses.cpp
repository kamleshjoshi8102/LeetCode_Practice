class Solution {
public:
    int scoreOfParentheses(string s) {
        int res=0;
        stack<int>se;
        for(auto x:s)
        {
            if(x=='(')
            {
                se.push(res);
                res=0;
            }
            else
            {
                res=se.top() + max(res*2,1);
                se.pop();
            }
        }
        return res;        
    }
};

// ((()())) 
// [8]