
class Solution {
public:

    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> mp;

        int i = 0, j = 0, answer = 0;
        
        while(j < fruits.size())
        {

            mp[fruits[j]]++;
            
            if(mp.size() <= 2)
            {

                int t = 0;

                for(auto &it : mp) t += it.second;

                answer = max(answer, t);
            }
            
            else
            {
                
                mp[fruits[i]]--;
                
                if(mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;

            }

            j++;
        }

        return answer; 
    }
};