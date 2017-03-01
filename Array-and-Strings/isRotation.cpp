#include <bits/stdc++.h>

using namespace std;

bool isSubstring(string a, string b)
{
	if (a.find(b) != string::npos)
		return true;
	else
		return false;	
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int len = s1.length();

	if (len == s2.length() && len > 0)
	{
		string s3 = s1 + s1;
		if (isSubstring(s3, s2))
		{
			cout << "True" << endl;
			return 0;
		}
	}
	cout << "False" << endl;
	return 0;
}
