class Solution {
public:
    vector<long long> maximumEvenSplit(long long f) {
        long long nu=0;
        vector<long long>v;
        if(f%2!=0)
        {
            return v;
        }
        
            
        long long cn=2,su=f;
        
        while(f>=cn)
        {
            v.push_back(cn);
            f=f-cn;
            cn+=2;
        }
      
        if(f>0)
        {
            long long ch=v[v.size()-1];
            
             
                v.pop_back();
                v.push_back(ch+f);
                
         
        }
        if(accumulate(v.begin(),v.end(),0)==su)
        {
            return v;
        }
      return v;
        
    }
};