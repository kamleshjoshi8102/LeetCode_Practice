class Solution {
public:
    int addDigits(int num) {
        while(num>=10)
        {
            int temp = num;
            int su = 0;
            while(temp)
            {
                su+=temp%10;
                temp/=10;
            }
            num = su;
        }
        return num;
    }
};