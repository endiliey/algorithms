#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> dictionary;
	string input;
	while (cin >> input)
	{
		dictionary.push_back(input);
	}

	unordered_map<string, vector<string>> hmap;
	for (auto &word : dictionary)
	{
		string key = word;
		sort(key.begin(), key.end());
		hmap[key].push_back(word);
	}

	for (auto it = hmap.begin(); it != hmap.end(); it++)
	{
		for (auto &content : it->second)
		{
			cout << content << " ";
		}
	}

	return 0;
}
