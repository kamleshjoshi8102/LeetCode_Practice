class Solution {
public:
    int mini(vector<int>tops,vector<int>bottoms)
    {
        int cn=0;
        int n=tops.size();
        int mini=INT_MAX;
        bool f=true;
        for(int i=1;i<7;i++)
        {
            cn=0;
            for(int j=0;j<n;j++)
            {
                if(tops[j]==i){continue;}
                else if(bottoms[j]==i)
                {
                    cn++;
                }
                else
                {
                      // cout<<j<<' ';
                    cn=-1;
                    f=false;
                    break;
                }
            }
            if(cn==-1)
            {
                continue;
            }
            else
            {
                mini=min(cn,mini);
            }
            
            // cout<<i<<' '<<cn<<endl;
        }
        if(mini==INT_MAX)
        {
            return -1;
        }
        return mini;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        return min(mini(tops,bottoms),mini(bottoms,tops));
    }
};