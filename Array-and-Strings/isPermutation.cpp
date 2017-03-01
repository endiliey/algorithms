#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
using namespace std;

bool isPermutation(string a, string b)
{
	if (a.length() != b.length())
		return false;
	sort(all(a));
	sort(all(b));

	for (decltype(a.length()) i = 0; i < a.length(); i++)
	{
		if (a[i] != b[i])
			return false;
	}
	return true;
}
int main()
{
	string a, b;
	cin >> a >> b;
	if (isPermutation(a, b))
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}
