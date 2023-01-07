class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& c) {
         int n = gas.size();
        int total = 0; // it will give us a difference b/w gas & c
        int surplus = 0; // our tank
        int start = 0; // and the index of gas station
        
        for(int i = 0; i < n; i++){
            total += gas[i] - c[i];
            surplus += gas[i] - c[i];
            if(surplus < 0){ // if the tank goes -ve
                surplus = 0; // reset our tank
                start = i + 1; // and update the stating gas station
            }
        }
        return (total < 0) ? -1 : start;
    }
};