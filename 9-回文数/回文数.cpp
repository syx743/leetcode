class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int a = x;
        int b = 0;
        while (b < a)
        {
            b = b * 10 + a % 10;
            a /= 10;
        }
        return (a == b) || (a == b / 10);
    }
};