class Solution {
public:
    bool isAnagram(string s, string t) 
	{
        if (s.length() != t.length())
            return false;
        unordered_map<char, int> hashmap;
        for (auto &chr : s)
            hashmap[chr]++;
        for (auto &chr : t)
        {
            hashmap[chr]--;
            if (hashmap[chr] < 0)
                return false;
        }
        return true;
    }
};
