#include <iostream>

using namespace std;

static const int N = 10;

int main()
{
	int i, j, p, q, id[N], sz[N];
	for (i = 0; i != N; ++i)
	{
		id[i] = i;
		sz[i] = 1;
	}
	while (cin >> p >> q)
	{
		for (i = p; i != id[i]; i = id[i])
		{
			id[i] = id[id[i]];
		}
		cout << "i is now " << i << endl;
		for (j = q; j != id[j]; j = id[j]);
		{
			id[j] = id[id[j]];
		}	
		cout << "j is now " << j << endl;
		if (i == j) continue;
		if (sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] += sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] += sz[j];
		}
		cout << "id = ";
		for (auto tmp : id)
			cout << tmp << ", ";
		cout << endl << "sz = ";
		for (auto tmp2 : sz)
			cout << tmp2 << ", ";
		cout << endl;
		cout << " " << p << " " << q << endl;
	}
}
