#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<char, int> m;
	string a;
	cin >> a;

	for (decltype(a.size()) i = 0; i < a.size(); ++i)
	{
		m[a[i]]++;
	}

	char query;
	while(cin >> query)
		cout << m[query] << endl;

	return 0;
}
