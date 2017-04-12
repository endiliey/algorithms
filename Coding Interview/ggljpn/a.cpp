#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int C;
	cin >> C;
	
	// We use array to count how many button a letter need
	int bCount[26] = {0};
	vector<string> b;
	b.push_back("ADGJMPTW");
	b.push_back("BEHKNQUX");
	b.push_back("CFILORVY");
	b.push_back("SZ");
	
	for (int i = 0; i < 4; i++)
	{
		for (auto &c : b[i])
		{
			int ch = c - 'A';
			bCount[ch] = i + 1;	
		}
	}
	
	string input;
	for (int i = 1; i <= C; ++i)
	{
		int N = 0;
		cin >> input;
		for (char &c : input)
		{
			int ch = c - 'A';
			N += bCount[ch];
		}
		cout << "Case #" << i <<": " << N << endl;
	}
	return 0;
}
