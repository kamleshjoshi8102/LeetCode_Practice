class FreqStack {
public:
    map<int,int>freq;
    map<int,stack<int>>st;
    int max_freq=0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        // int check=freq.find();
        freq[val]++;
        if(freq[val]>max_freq)
        {
            max_freq=freq[val];
        }
        
        st[freq[val]].push(val);
        
    }
    
    int pop() {
       
        int res=st[max_freq].top();
        
        st[max_freq].pop();
        if(st[max_freq].size()==0)
        {
            max_freq--;
        }
        freq[res]--;         
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */