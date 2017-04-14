class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (auto i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (hash.find(target - num) == hash.end())
            {
                hash[num] = i;
            }
            else
            {
                result.push_back(hash[target - num]);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};
