class Solution {
public:
    string interpret(string c) {
        string s="";
        
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='G')
            {
                s+='G';
            }
            else if(c[i]=='(' and c[i+1]==')')
            {
                s+='o';
                i++;
            } 
            else if(c[i]=='(' and c[i+1]=='a')
            {
                s+='a';
                s+='l';
                i+=2;
            }
        }        
        return s;
    }
};