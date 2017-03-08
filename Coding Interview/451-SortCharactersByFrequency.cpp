class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char, int> freq;
        vector<string> bucket(s.size() + 1,"");
        string result;
        
        // count frequency of each char
        for (char &c : s)
            freq[c]++;
        
        // put character into freq bucket
        for (auto &it : freq)
        {
            int val = it.second;
            char key = it.first;
            bucket[val].append(val, key);
        }
        
        // form descending sorted string
        for (int i = s.size(); i > 0; --i)
        {
            if (!bucket[i].empty())
                result.append(bucket[i]);
        }
        return result;
        
    }
};
