class Solution {
public:

    string convert(string s, int nr) {
    
    if(nr <= 1) return s;

    vector<string>v(nr, ""); 

    int j = 0, dir = -1;

    for(int i = 0; i < s.length(); i++)
    {

        if(j == nr - 1 || j == 0) dir *= (-1); 
		 
        v[j] += s[i];

        if(dir == 1) 
            j++;

        else j--;
        
    }

    string answer;

    for(auto &it : v) {
        answer += it; 
    }

    return answer;

    }
};