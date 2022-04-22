class MyHashMap {
public:
    // unordered_map<int,int>mp;
    int mp[1000006]={0};
    MyHashMap() {
        for(int i=0;i<1000006;i++)
        {
            mp[i]=-1;
        }
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        // if(mp.find(key)==mp.end())
        // {
        //     return -1;
        // }
        if(mp[key]==-1)
        {
            return -1;
        }
        return mp[key];
    }
    
    void remove(int key) {
    // mp.erase(key);
        mp[key]=-1;
 }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */