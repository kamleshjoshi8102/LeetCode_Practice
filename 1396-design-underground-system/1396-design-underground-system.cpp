class UndergroundSystem {
public:
    unordered_map<string,pair<int,int>> a;
    unordered_map<int,pair<string,int>> b;
    
    UndergroundSystem() {}
    
    void checkIn(int id, string s, int t) {
        b[id] = {s,t};
    }
    
    void checkOut(int id, string s, int t) {
        auto cindata = b[id];
        string spair = cindata.first+"_"+s;

        if(a.count(spair) == 0) {
            a[spair] = {0,0};
        }
        a[spair] = {a[spair].first+t-cindata.second,a[spair].second+1};
    }
    
    double getAverageTime(string start, string end) {
        auto data = a[start+"_"+end];
        return (double)(data.first)/(double)(data.second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */