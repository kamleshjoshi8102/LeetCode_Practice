#define pb push_back

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>prev;
        if(rowIndex==0)
        {
            
            return {1};
        }
        else if(rowIndex==1)
        {
            return {1,1};
        }
        else if(rowIndex==2)
        {
            return {1,2,1};
        }
        prev.pb(1);
        prev.pb(2);
        prev.pb(1);
        
        for(int i=2;i<=rowIndex-1;i++)
        {
            vector<int>curr;
            curr.pb(1);
            for(int j=1;j<prev.size();j++)
            {
               
                    curr.pb(prev[j]+prev[j-1]);
            }  
            curr.pb(1);
            for(auto x:curr)
            {
                cout<<x<<' ';
            }
            prev=curr;
        }
        return prev;
        
    }
};
/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/