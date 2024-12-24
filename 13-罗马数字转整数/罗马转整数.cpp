class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> temp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int t = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (i < s.size() - 1 && temp[s[i]] < temp[s[i + 1]])
            {
                t -= temp[s[i]];
            }
            else
            {
                t += temp[s[i]];
            }
        }
        return t;
    }
};