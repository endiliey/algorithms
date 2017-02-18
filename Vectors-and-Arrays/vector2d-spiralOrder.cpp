#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(const vector<vector<int>> &A)
{
	vector<int> result;
	int n = A[0].size(), m = A.size(); 
	int T = 0, B = m - 1, L = 0, R = n - 1;
	int dir = 0;
	while (T <= B && L <= R)
	{
		// go right
		if (dir == 0)
		{
			for (int i = L; i <= R; ++i)
				result.push_back(A[T][i]);
			T++;
		}
		else if (dir == 1) // go bot
		{
			for (int i = T; i <= B; ++i)
				result.push_back(A[i][R]);
			R--;
		}
		else if (dir == 2) // go left
		{
			for (int i = R; i >= L; --i)
				result.push_back(A[B][i]);
			B--;
		}
		else // go top
		{
			for (int i = B; i >= T; --i)
				result.push_back(A[i][L]);
			L++;
		}
		dir = (dir + 1) % 4;
	}
	return result;

}
int main()
{
	vector<vector<int>> A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	vector<int> result = spiralOrder(A);
	for (auto temp : result)
	{
		cout << temp << " ";
	}
	return 0;
}
