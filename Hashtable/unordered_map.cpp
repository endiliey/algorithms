/*
 * Learn of using hashtable via c++ stl unordered_map
*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	unordered_map<char, int> m;
	string a;
	cin >> a;
	int n = a.size();
	cout << m['b'];
	for (int i = 0; i < n;++i)
	{
		m[a[i]]++;
		if (i > n / 2)
			m[a[i]]++;
	}

	cout << m[a[0]];
	cout << m[a[n - 1]];
	return 0;

}
