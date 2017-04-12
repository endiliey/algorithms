#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int d[N][N];
int v[N][N];

// O(n3) shortest path
void floyd(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
			{
				d[i][j] = 0;
			}
			else if (v[i][j])
			{
				d[i][j] = v[i][j];
			}
			else
			{
				d[i][j] = 1e9;
			}
		}
	}

	for (int k = 1; k <= n; ++k)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}		
		}
	}
}

int main()
{

	return 0;
}
