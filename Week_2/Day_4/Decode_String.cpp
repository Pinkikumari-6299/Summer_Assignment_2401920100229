class Solution
{
public:
    string decodeString(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ']')
            {
                st.push(s[i]);
            }
            else
            {
                string temp;
                while (!st.empty() && st.top() != '[')
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                st.pop();
                string nums;
                while (!st.empty() && isdigit(st.top()))
                {
                    nums = st.top() + nums;
                    st.pop();
                }
                int number = stoi(nums);
                string repeat;
                for (int j = 0; j < number; j++)
                    repeat.append(temp);

                for (char c : repeat)
                    st.push(c);
            }
        }

        string ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};