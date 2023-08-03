class Solution {
public:
    
    // function to find factorial of given number
unsigned int factorial(unsigned int n)
{
     if(n == 0)
          return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}
    int arrangeCoins(int n) {
        
        int i = 1;
        int res=0,curr=0;
        while(true)
        {
            curr += factorial(i);
            
            if(curr>n)
            {
                return res;
            }
            else
            {
                n-=curr;
                res++;
            }
        }
        return res;
    }
};