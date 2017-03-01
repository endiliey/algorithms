#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	bool found[128];
	memset(found, 0, sizeof found);
	for(int i = 0; i < (int) a.size(); i++)
	{
		int val = static_cast<int> (a[i]);
		if (found[val])
		{
			cout << "False" << endl;
			return 0;
		}
		found[val] = true;
	}
	cout << a << " is unique !! " << endl;
	return 0;
}
