#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string output;
	string spaceReplace = "%20";
	string input = "Mr John Smith  ";

	for (int i = 0; i < n; i++)
	{
		if (input[i] == ' ')
		{
			output += spaceReplace;
		}
		else
			output += input[i];
	}

	cout << output << endl;
	return 0;	
}
