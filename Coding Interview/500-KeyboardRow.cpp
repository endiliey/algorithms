class Solution {
public:
    vector<string> findWords(vector<string>& words) 
	{
        unordered_set<char> r1 ({'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'});
        unordered_set<char> r2 ({'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'});
        unordered_set<char> r3 ({'z', 'x', 'c', 'v', 'b', 'n', 'm'});
        vector<unordered_set<char>> rows {r1, r2, r3};
        
        vector<string> validWords;
        for (int i = 0; i < words.size(); ++i)
        {
            int row = 0;
            for (int k = 0; k < 3; ++k)
            {
                if (rows[k].count((char)tolower(words[i][0])) > 0)
                    row = k;
            }
            
            validWords.push_back(words[i]);
            for (int j = 1; j < words[i].size(); ++j)
            {
                if (rows[row].count((char)tolower(words[i][j])) == 0)
                {
                    validWords.pop_back();
                    break;
                }
            }
        }
        return validWords;
    }
};
