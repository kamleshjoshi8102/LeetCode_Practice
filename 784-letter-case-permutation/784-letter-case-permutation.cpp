class Solution {
public:
    vector<string> ans;
    
    void backtrack(int idx, string s){
        
        if(idx==s.size()){
            ans.push_back(s);
            return;
        }
        if(s[idx]>=65 and s[idx]<=90){
            s[idx]= s[idx]+32;
            backtrack(idx+1, s);
            s[idx]= s[idx]-32;
        }
        else if(s[idx]>=97 and s[idx]<=122){
            s[idx]= s[idx]-32;
            backtrack(idx+1, s);
            s[idx]= s[idx]+32;
        }
        //if number
        backtrack(idx+1, s);
        return;
    }
    
    vector<string> letterCasePermutation(string s) {
        backtrack(0, s);
        return ans;
    }
};