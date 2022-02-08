class Solution {
public:
    int addDigits(int num) {
        if(num<10)
        {
            return num;
        }
        string s=to_string(num);
        while(s.size()>1)
        {
            int su=0;
            for(auto x:s)
            {
                su+=x-'0';
            }
            s=to_string(su);
        }
        return stoi(s);
    }
};