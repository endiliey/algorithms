#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[5][5];
	for (int i = 0; i != 5; i++)
	{
		for (int j = 0; j != 5; j++)
		{
			a[i][j] = i + j;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Rotated : " << endl;
	int len = 5;
	for (int i = 0; i < len / 2; i++)
		for (int j = i; j < len - i - 1; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[len - j - 1][i];
			a[len - j - 1][i] = a[len - i - 1][len - j - 1];
			a[len - i - 1][len - j - 1] = a[j][len - i - 1];
			a[j][len - i - 1] = temp;
		}

	for (int i = 0; i != 5; i++)
	{
		for (int j = 0; j != 5; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}
