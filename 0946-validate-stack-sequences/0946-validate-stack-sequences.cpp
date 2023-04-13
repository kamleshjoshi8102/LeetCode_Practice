class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n=pushed.size();
        int j=0;
        for(int i=0;i<n;i++)
        {  
            st.push(pushed[i]);

            while(st.size()>0 and j<popped.size() and st.top()==popped[j])
                {
                    st.pop();
                    j++;
                }
        }     
        
        cout<<j<<endl;
        
        if(st.size()==0)
        {
            return true;
        }
        return false;
    }
};