class MyQueue {
    stack<int>input;
    stack<int>output;
public:
    
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()==false)
        {
            int x=output.top();
        }
        else
        {
            while(input.empty()==false)
            {
                int x=input.top();
                output.push(x);
                input.pop();
            }
        }
        int x= output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if(output.empty())
        {
            while(input.empty()==false)
            {
                int x=input.top();
                output.push(x);
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return (input.empty() and output.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */