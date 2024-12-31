class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.size();
        if (n % 2 == 1)
        {
            return false;
        }
        unordered_map<char, char> temp = {
            {')', '('}, {']', '['}, {'}', '{'}};
        stack<char> t;
        for (char ch : s)
        {
            if (temp.count(ch))
            {
                if (t.empty() || t.top() != temp[ch])
                {
                    return false;
                }
                t.pop();
            }
            else
            {
                t.push(ch);
            }
        }
        return t.empty();
    }
};