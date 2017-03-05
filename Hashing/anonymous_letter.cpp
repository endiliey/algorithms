#include <bits/stdc++.h>

using namespace std;

bool anonymous_letter(const string &L, const string &M)
{
	unordered_map<char, int> hash;
	for (auto &chr : L)
	{
		hash[chr]++;
	}

	for (auto &chr : M)
	{
		auto it = hash.find(chr);
		if (it != hash.end())
		{
			--(it->second);
			if (it->second == 0)
			{
				hash.erase(it);
				if (hash.empty())
					return true;
			}
		}
	}
	return hash.empty();
}
int main()
{
	string L = "Endilie";
	string M = "Endiloe is good";
	if (anonymous_letter(L, M))
		cout << "True" << endl;
	return 0;
}
