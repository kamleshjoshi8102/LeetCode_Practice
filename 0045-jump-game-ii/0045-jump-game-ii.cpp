class Solution {
public:

    int jump(vector<int>& n) {

      for(int i = 1; i < n.size(); i++)
      {
        n[i] = max(n[i] + i, n[i-1]);
      }

      int in = 0;
      int ans = 0;

      while(in < n.size() - 1)
      {
        ans++;
        in = n[in];
      }

      return ans;
    }
};
