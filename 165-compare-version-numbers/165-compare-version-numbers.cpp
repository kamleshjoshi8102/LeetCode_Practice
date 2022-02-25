class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0,j=0;
        int n1=v1.size();
        int n2=v2.size();
        int nu1=0,nu2=0;
        while(i<n1 || j<n2)
        {
            while(i<n1 and v1[i]!='.')
            {
                nu1=nu1*100+v1[i]-'0';
               ++i;
            }
            while(j<n2 and v2[j]!='.')
            {
                nu2=nu2*100+v2[j]-'0';
                ++j;
            }
            if(nu1>nu2){
                return 1;
            }
            else if(nu1<nu2)
            {
                return -1;
            }
            ++i;
            ++j;
            nu1=0,nu2=0;
        }
        return 0;
        // cout<<nu1<<" "<<nu2<<endl;        
        
    }
};