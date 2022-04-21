class MyHashSet {
public:
    // unordered_map<int,int>mp;
    int mp[1000002]={0};
    MyHashSet() {
        
    }
    
    void add(int key) {
        mp[key]++;
    }
    
    void remove(int key) {
        // mp.erase(key);
        mp[key]=0;
    }
    
    bool contains(int key) {
        
        // return (mp.find(key)!=mp.end());
        if(mp[key]>0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */