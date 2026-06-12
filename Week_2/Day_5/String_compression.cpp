class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int idx = 0;
        int n = chars.size();
        for (int i = 0; i < chars.size(); i++)
        {
            char ch = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == ch)
            {
                cnt++;
                i++;
            }
            if (cnt == 1)
                chars[idx++] = ch;
            else
            {
                chars[idx++] = ch;
                string str = to_string(cnt);
                for (char digi : str)
                {
                    chars[idx++] = digi;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};