class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int freqeve[100001]= {0};
        int freqodd[100001]= {0};
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                freqeve[nums[i]]++;
            }
            else
            {
                freqodd[nums[i]]++;
            }
            maxi=max(maxi,nums[i]);
        }
        
        int firstodd=0,firstoddnu=0;
        int secondodd=0,secondoddnu=0;
        
        int firsteve=0,firstevenu=0;
        int secondeve=0,secondevenu=0;
        
        
        for(int i=1;i<=maxi;i++)
        {
            if(freqeve[i]>firstevenu)
            {
                secondevenu=firstevenu;
                secondeve=firsteve;
                
                firstevenu=freqeve[i];
                firsteve=i;
            }
            else if(freqeve[i]>secondevenu)
            {
                secondevenu=freqeve[i];
                secondeve=i;
            }
            
            if(freqodd[i]>firstoddnu)
            {
                secondoddnu=firstoddnu;
                secondodd=firstodd;
                
                firstoddnu=freqodd[i];
                firstodd=i;
            }
            else if(freqodd[i]>secondoddnu)
            {
                secondoddnu=freqodd[i];
                secondodd=i;
            }
                
        }
        if(firsteve!=firstodd)
        {
            cout<<firstevenu<<' '<<firstoddnu<<endl;
            return n-firstevenu-firstoddnu;
        }
        
        
        return min ( n-firstevenu-secondoddnu  , n-secondevenu-firstoddnu);
        
    
    }
};