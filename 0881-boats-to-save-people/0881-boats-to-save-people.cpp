class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int su=0 , cn=0;
        sort(people.begin(),people.end());
        int i=0,n=people.size();
        int j=n-1;
        while(j>i)
        {
           if(people[i]+people[j]<=limit)
           {
               // cn++;
               i++;
               j--;
           }
            else
            {
                j--;
            }
            cn++;
        }
        if(i==j)
        {
            cn++;
        }
        return cn;
    }
};