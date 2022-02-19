
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>v;
        long long x=num;
        long long n=0;
        num=num-3;
        n=num/3;
        cout<<n<<endl;
        if(n+(n+1)+(n+2)==x)
        {
            v.push_back(n);
            v.push_back(n+1);
            v.push_back(n+2);
            return v;
            
        }
        return v;
           
    }
};