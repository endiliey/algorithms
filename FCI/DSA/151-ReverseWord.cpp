class Solution {
public:
    void reverseWords(string &s) {
		string result = "";
		int j = s.length();
		for(int i = s.length() - 1; i >= 0; i--)
		{
			if (s[i] == ' ')
				j = i;
			else if (i == 0 || s[i - 1] == ' ')
			{
				if (result.length() != 0)
					result += " ";
				result += s.substr(i, j - i);
			}
		}		
		s = result;
    }
};
