#include <bits/stdc++.h>

#define SIZE 5
int W[SIZE][SIZE]; // adjancency matrix
using namespace std;

struct point
{
	int x;
	int y;
	point(int a, int b)
	{
		x = a;
		y = b;
	}
};

void dfs_connected(point start);

void pushIfValid(point target, stack<point> &s)
{
	if (target.x < SIZE && target.x >= 0 && target.y < SIZE && target.y >= 0)
		s.push(target);
}

int main()
{
	int island = 0;
	cout << "Input " << SIZE << " x " << SIZE << " island :" << endl;
	
	for (int i = 0; i < SIZE; ++i)
		for (int j = 0; j < SIZE; ++j)
			cin >> W[i][j];

	cout << "Number of island is : " << endl;
	for (int i = 0; i < SIZE; ++i)
		for (int j = 0; j < SIZE; ++j)
		{
			if (W[i][j] == 1)
			{
				dfs_connected(point(i, j));
				island++;
			}
		}

	cout << island << endl;
	return 0;
}

void dfs_connected(point start)
{
	stack<point> s;
	s.push(start);
   
	while (!s.empty())
	{
		point current = s.top();
		s.pop();
      
		if (W[current.x][current.y] == 1)
		{
			W[current.x][current.y] = 2;
			pushIfValid(point(current.x + 1, current.y), s);
			pushIfValid(point(current.x - 1, current.y), s);
			pushIfValid(point(current.x, current.y + 1), s);
			pushIfValid(point(current.x, current.y - 1), s);
		}
	}
   
}
           
/*
0  X  0  D  0
0  0  D  D  D
A  0  0  D  0
0  C  C  0  0
B  0  C  0  E
          
*/
