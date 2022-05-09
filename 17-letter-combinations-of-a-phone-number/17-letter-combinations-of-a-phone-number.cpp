class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
         map<int,string>mp;
            string s="";
        char a='a';
        for(int i=2;i<=9;i++)
        {
            if(i==9 || i==7)
            {
                s+=a++;
                s+=a++;
                s+=a++;
                s+=a++;
                
            }
            else
            {
                s+=a++;
                s+=a++;
                s+=a++;
                
            }
            mp[i]=s;
            s="";
        }

        if(digits.size()==1)
        {
            int cv=digits[0]-'0';
            string l=mp[cv];
            
            
            
            
            for(auto u:l)
            {
                string du="";
                du+=u;
                res.push_back(du);
            }
            return res;
            
        }
        
        if(digits.size()==2)
        {
            for(int i=0;i<digits.size();i++)
        {
            for(int j=i+1;j<digits.size();j++)
            {
                    
                    int num1=digits[i]-'0';
                    int num2=digits[j]-'0';
                
                string s1=mp[num1];
                string s2=mp[num2];
                
                for(auto k:s1)
                {
                    for(auto ks:s2)
                    {
                        string ne="";
                        ne+=k;
                        ne+=ks;
                        res.push_back(ne);
                    }
                }
                
                
            }
        }
        
        
        return res;
        }
        if(digits.size()==3)
        {
           for(int i=0;i<digits.size();i++)
        {
            for(int j=i+1;j<digits.size();j++)
            {
                   for(int k=j+1;k<digits.size();k++)
                   {
                       
                            int num1=digits[i]-'0';
                            int num2=digits[j]-'0';
                            int num3=digits[k]-'0';
                           
                            string s1=mp[num1];
                            string s2=mp[num2];
                            string s3=mp[num3];
                             
                           for(auto i:s1)
                           {
                               for(auto ii:s2)
                               {
                                   for(auto iii:s3)
                                   {
                                      
                                           string ne="";
                                            ne+=i;
                                           ne+=ii;
                                           ne+=iii;
                                            
                                            res.push_back(ne);
                                      
                                   }
                               }
                           }
                            
                   }
                
                
            }
        }
        
        
        return res;
        }
        
     
        
        for(int i=0;i<digits.size();i++)
        {
            for(int j=i+1;j<digits.size();j++)
            {
                   for(int k=j+1;k<digits.size();k++)
                   {
                       for(int o=k+1;o<digits.size();o++)
                       {
                            int num1=digits[i]-'0';
                            int num2=digits[j]-'0';
                            int num3=digits[k]-'0';
                            int num4=digits[o]-'0';
                            string s1=mp[num1];
                            string s2=mp[num2];
                            string s3=mp[num3];
                            string s4=mp[num4];
                           for(auto i:s1)
                           {
                               for(auto ii:s2)
                               {
                                   for(auto iii:s3)
                                   {
                                       for(auto iiii:s4)
                                       {
                                           string ne="";
                                            ne+=i;
                                           ne+=ii;
                                           ne+=iii;
                                           ne+=iiii;
                                            res.push_back(ne);
                                       }
                                   }
                               }
                           }
                            
                   
                
                       }
                       }
            }
        }
        
        
        return res;
        

        
        
} 
};