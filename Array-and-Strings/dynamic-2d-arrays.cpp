#include <iostream>

using namespace std;

int **malloc2d(int r, int c)
{
	int **t = new int*[r];
	for (int i = 0; i < r; i++)
		t[i] = new int[c];
	return t;
}

int main()
{
	int M, N;
	cin >> M >> N;
	int **a = malloc2d(M, N);
	return 0;
}
