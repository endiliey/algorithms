#include <iostream>

using namespace std;

int main()
{
	const int V = 5;
	int i, j, adj[V][V];
	for (i = 0; i < V; ++i)
		for (j = 0; j < V; ++j)
		   adj[i][j] = 0;
	for (i = 0; i < V; ++i)
		adj[i][i] = 1;
	while (cin >> i >> j)
	{
		adj[i][j] = 1;
		adj[j][i] = 1;
	}
	
	cout << "Adjacency Matrix is " << "\n";
	for (i = 0; i < V; ++i)
	{
		for (j = 0; j < V; ++j)
		{
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}		
	return 0;
}
