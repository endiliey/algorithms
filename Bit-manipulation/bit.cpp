#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	unsigned int n2 = n;
	unsigned int total = 0;
	while (n != 0)
	{
		n = n & (n - 1);
		cout << n << endl;
		total++;
	}
	
	cout << "Number of bit set of " << n2 << " is " << total << endl;
	return 0;
}
