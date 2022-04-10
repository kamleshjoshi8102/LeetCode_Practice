class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
            
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int fir=0,sec=0;
                fir=st.top();
                st.pop();
                if(st.size()>0) sec=st.top();
                st.push(fir);
                st.push(fir+sec);
            }
            else if(ops[i]=="C")
            {
                if(st.size()>0) st.pop();
            }
            else if(ops[i]=="D")
            {
                int get=st.top();
                get=get*2;
                st.push(get);
            }
            else
            {
                int num=stoi(ops[i]);
                st.push(num);
            }
        }
        int su=0;
        while(st.size()>0)
        {
            su+=st.top();
            st.pop();
        }
        return su;        
    }
};