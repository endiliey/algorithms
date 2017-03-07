class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> found;
        for (auto &num : nums)
        {
            if (found.find(num) == found.end())
                found.insert(num);
            else
                return true;
        }
        return false;    
    }
};
