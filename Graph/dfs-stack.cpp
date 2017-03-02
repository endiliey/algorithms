#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int N = 3;
vector<int> V;
vector<list<int>> W(N);

void dfs(int i)
{
	stack<int> s;
	s.push(i);

	while(!s.empty())
	{
		int top = s.top();
		s.pop();
		if (!V[top])
		{
			cout << "Visiting " << top << endl;
			V[top] = true;
			for (auto &val : W[top])
				s.push(val);
		}
	}
}

bool check_graph_connected_dfs()
{
	int start_vertex = 0;
	V = vector<int>(N, false);
	dfs(start_vertex);
	return (find(V.begin(), V.end(), 0) == V.end());
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		W[a].push_back(b);
	}
	
	if (check_graph_connected_dfs())
		cout << "Graph is connected" << endl;
	else
		cout << "Graph is not connected" << endl;
	return 0;

}
