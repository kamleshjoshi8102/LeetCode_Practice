class MinStack
{
public:
    stack<pair<int, int>> st;
    int minimum = INT_MAX;
    MinStack()
    {
        
    }

    void push(int val)
    {
        minimum = min(minimum, val);
        st.push({val, minimum});
    }

    void pop()
    {
        st.pop();
        if (!st.empty())
            minimum = st.top().second;
        else
            minimum = INT_MAX;
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }

};