#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;
vector<int> adj[N];
bool visit[N];

void dfs(int s)
{
	if (!visit[s])
	{
		visit[s] = true;
		for (auto &u : adj[s])
		{
			dfs(u);
		}
	}
}

int main()
{

	return 0;
}
