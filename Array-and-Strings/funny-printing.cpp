#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A = 4;
	int N = (2 * A) - 1;
	int temp = 0;
	int limit = N;
	vector<vector<int>> matrix(N, vector<int>(N));
	while (A > 0)
	{
		for (int i = temp; i < limit; i++)
		{
			for (int j = temp; j < limit; j++)
			{
				matrix[i][j] = A;
			}
		}
		A--;
		limit--;
		temp++;
	}


}
