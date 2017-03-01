#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int diff = a.length() - b.length();
	if (diff != 0)
	{
		bool foundDiff = false;
		unordered_map<char, int> ca;
		unordered_map<char, int> cb;
		if (diff != 0)
		{
			for (auto &chr: a)
				ca[chr]++;
			for (auto &chr : b)
				cb[chr]++;
			for (auto &chr : a)
			{
				if (ca[chr] != cb[chr])
				{
					if (foundDiff)
					{
						cout << "false" << endl;
						return 0;
					}
					foundDiff = true;
				}
			}
			for (auto &chr : b)
			{
				if (ca[chr] != cb[chr])
				{
					if (foundDiff)
					{
						cout << "false" << endl;
						return 0;
					}
					foundDiff = true;
				}
			}
		}
	}
	else
	{
		int cntr = 0;		
		for (int i = 0; i < (int) a.length(); i++)
		{
			if (a[i] != b[i])
				cntr++;
			if (cntr >= 2)
			{
				cout << "False" << endl;
				return 0;
			}		
		}
	}

	cout << "true" << endl;
	return 0;
   	
}
