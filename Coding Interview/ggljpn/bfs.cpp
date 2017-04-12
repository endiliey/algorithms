#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;
vector<int> adj[N];
bool V[N];

void bfs(int s)
{
	queue<int> q;
	q.push(s);
	V[s] = true;	

	while (!q.empty())
	{
		int front = q.front();
		q.pop();

		for (auto &it : adj[front])
		{
			if (!V[it])
			{
				V[it] = true;
				q.push(it);
			}
		}
	}
}

int main()
{

	return 0;
}
