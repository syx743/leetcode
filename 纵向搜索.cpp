class Solution
{
public:
    string test(const string &str1, const string &str2)
    {
        int n = min(str1.size(), str2.size());
        string temp;
        for (int i = 0; i < n; ++i)
        {
            if (str1[i] == str2[i])
            {
                temp += str1[i];
            }
            else
            {
                break;
            }
        }
        return temp;
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        if (!strs.size())
        {
            return "";
        }
        string temp = strs[0];
        for (int i = 1; i < strs.size(); ++i)
        {
            temp = test(temp, strs[i]);
            if (!temp.size())
            {
                break;
            }
        }
        return temp;
    }
};