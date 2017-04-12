#include <bits/stdc++.h>

using namespace std;
char maze[20][20]; // store the actual maze
bool visit[20][20]; // to avoid repeating visit
int N = 0; // to store how many dead-ends

struct point
{
	int x, y;
	point(int a, int b)
	{
		x = a;
		y = b;
	}	
};

// Check if the target point is feasible to explore
int pushIfValid(point target, int H, int W, stack<point> &s)
{
	if (target.x >= 0 && target.x < W && target.y < H && target.y >= 0)
	{
		if (maze[target.y][target.x] == '#')
		{
			return 1;
		}
		else
		{
			s.push(target);
		}
	}
	return 0;	
}

// Explore the maze with depth first search traversal (managing own stack)
void dfs_explore(point start, int H, int W)
{
	stack<point> s;
	s.push(start);

	while (!s.empty())
	{
		point current = s.top();
		s.pop();
		if(maze[current.y][current.x] != '#' && !visit[current.y][current.x])
		{
			visit[current.y][current.x] = true;
			int temp = 0;
			temp += pushIfValid(point(current.x + 1, current.y), H, W, s);
			temp += pushIfValid(point(current.x - 1, current.y), H, W, s);
			temp += pushIfValid(point(current.x, current.y + 1), H, W, s);
			temp += pushIfValid(point(current.x, current.y - 1), H, W, s);

			// if any 3 direction is dead-end, we increase count of dead ends
			if (temp == 3)
			{
				++N;
			}
		}		
	}
}


int main()
{
	int C;
	cin >> C;
	for (int i = 1; i <= C; ++i)
	{
		int H, W;
		N = 0;
		cin >> H >> W;

		// get the labyrinth
		for(int y = 0; y < H; ++y)
		{
			for (int x = 0; x < W; ++x)
			{
				cin >> maze[y][x];
			}
		}
		
		// reset the maze state (unvisited)
		for (int i = 0; i < 20; ++i)
			for (int j = 0; j < 20; ++j)
				visit[i][j] = false;

		dfs_explore(point(1, 0), H, W); // explore from the starting point
		cout << "Case #" << i << ": " << N << endl;

	}
	return 0;
}
