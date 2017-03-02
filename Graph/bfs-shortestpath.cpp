#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

vector<int> V;

int bfs(int start, int finish, vector<list<int>> &W)
{
	map<int, int> D; // to store shortest path length to this position

	queue<int> q;

	D[start] = 0; // start from here
	q.push(start);
	V[start] = true;

	while(!q.empty())
	{
		int current = q.front();
		q.pop();

		int current_length = D[current];

		if(current == finish)
		{
			return D[current];
			// shortest path is found, return its length
		}
		
		// try all possible paths from current
		for (auto &it : W[current])
		{
			if (!V[it])
			{
				V[it] = true;
				q.push(it);
				D[it] = current_length + 1;
			}
		}
	}

	// path was not found
	return -1;
}

int main()
{
	int N;
	cout << "Please enter how many vertices: " << endl;
	cin >> N;
	vector<list<int>> W(N); // make lot of adjacency list
	V = vector<int>(N, false); // initialize all to be false
	
	cout << "Please enter your target " << endl;
	int target;
	cin >> target;

	int a, b;
	cout << "Keep entering edges" << endl;
	while (cin >> a >> b)
	{
		W[a].push_back(b);
	}

	int shortestPath = bfs(0, target, W); // bfs	
	cout << "Shortest path from 0 to " << target << " is " << shortestPath<< endl;
	return 0;
}
