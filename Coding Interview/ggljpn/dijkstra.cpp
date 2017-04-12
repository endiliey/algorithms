#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;
vector<pair<int, int>> v[N]; // store adjacency list
int d[N]; // store distance
bool V[N]; // check visit

// shortest path from x to all other nodes
void dijk(int x, int n)
{
	priority_queue<pair<int, int>> q;
	for (int i = 1; i <= n; i++)
		d[i] = 1e9;
	d[x] = 0;
	q.push({0, x});

	while(!q.empty())
	{
		int a = q.top().second;
		q.pop();
		if (!V[a])
		{
			V[a] = true;
			for (auto b : v[a])
			{
				if (d[a] + b.second < d[b.first])
				{
					d[b.first] = d[a] + b.second;
					q.push({-d[b.first], b.first});
				}
			}
		}
	}
}


int main()
{
	//first element at pair is distance
	//second element at pair is the node
	return 0;
}
