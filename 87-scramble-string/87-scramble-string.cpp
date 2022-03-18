class Solution {
public:
    unordered_map<string,bool>mp;
    
    bool isScramble(string a, string b) {
        if(a.compare(b)==0)
        {
            return true;
        }
        if(a.size()!=b.size())
        {
            return false;
        }
        int n=a.size();
        if(n==0)
        {
            return true;
        }
        if(a.size()<=1)
        {
            return false;
        }
        string cp1=a,cp2=b;
        
        sort(cp1.begin(),cp1.end());
        sort(cp2.begin(),cp2.end());
        
        if(cp1!=cp2)
        {
            return false;
        }
        string key=a;
        key+='-';
        key+=b;
        if(mp.find(key)!=mp.end())
        {
            return mp[key];
        }
        // 0,i i,n-i
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            bool con1=(isScramble(a.substr(0,i),b.substr(n-i,i))==true) && (isScramble(a.substr(i,n-i),b.substr(0,n-i))==true);
            bool con2=(isScramble(a.substr(0,i),b.substr(0,i))==true) && (isScramble(a.substr(i,n-i),b.substr(i,n-i))==true);
            if(con1 || con2)
            {
                flag=true;
                break;
            }
        }

        return mp[key]=flag;
        
    }
};