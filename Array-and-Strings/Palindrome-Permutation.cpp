#include <iostream>
#include <unordered_map>
#include <cctype>
using namespace std;

int main()
{
	string a = "Rats live on no evil star";
	//string a = "Tact coa";
	//string a = "endi toni";
	
	unordered_map<char, int> cntr;
	for (auto &chr : a)
	{
		if (chr == ' ')
			continue;
		chr = tolower(chr);
		cntr[chr]++;
	}

	bool foundMiddle = false;
	for (auto &chr : a)
	{
		if (chr == ' ')
			continue;
		if (cntr[chr] % 2 == 1)
		{
			if (foundMiddle)
			{
				cout << "False" << endl;
				return 0;
			}
			foundMiddle = true;
		}	
	}

	cout << "True" << endl;
	return 0;
}
