class Solution {
public:
    int f(string&s,string &t,int i,int j,vector<vector<int>>&v){
        if(j<0) return 1; 
        if(i<0) return 0;
        if(v[i][j]!=-1){
            return v[i][j];
        }
        int pick=0; 
        int notpick=0; 
        if(s[i]==t[j]){
            pick=f(s,t,i-1,j-1,v); 
            notpick=f(s,t,i-1,j,v);
        }
        else{
            notpick=f(s,t,i-1,j,v);
        }
        return v[i][j]=pick+notpick; 
    }
    int numDistinct(string s, string t) {
        vector<vector<int>>v(s.size(),vector<int>(t.size(),-1));
        return f(s,t,s.size()-1,t.size()-1,v);
    }
};