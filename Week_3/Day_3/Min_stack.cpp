class MinStack
{
public:
    stack<long long> st;
    long long min;
    MinStack() {}

    void push(int val)
    {
        long long y = val;
        if (st.empty())
        {
            min = y;
            st.push(y);
        }
        else if (y > min)
            st.push(y);
        else
        {
            st.push(2 * y - min);
            min = y;
        }
    }
    void pop()
    {
        if (st.empty())
            return;
        long long x = st.top();
        st.pop();
        if (x < min)
            min = 2 * min - x;
    }

    int top()
    {
        if (st.empty())
            return -1;
        long long x = st.top();
        if (min < x)
            return x;

        return min;
    }

    int getMin()
    {

        return min;
    }
};
