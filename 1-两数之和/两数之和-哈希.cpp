class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto it = temp.find(target - nums[i]);
            if (it != temp.end())
            {
                return {it->second, i};
            }
            temp[nums[i]] = i;
        }
        return {};
    }
};