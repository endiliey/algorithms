#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
struct node
{
	int v;
	node* next;
	node(int i, node* t)
	{
		v = i;
		next = t;
	}
};

typedef node* link;

void printList(link head)
{
	link it = head;
	while (it != 0)
	{
		cout << it->v << " ";
		it = it->next;
	}
}
int main()
{
	const int V = 5;
	int i, j;
	link adj[V];
	for (i = 0; i < V; ++i)
		adj[i] = 0;
	while (cin >> i >> j)
	{
		adj[j] = new node(i, adj[j]);
		adj[i] = new node(j, adj[i]);
	}

	cout << "Adjacency List is " << "\n";
	for (i = 0; i < V; ++i)
	{
		cout << i << ": ";
		printList(adj[i]);
		cout << "\n";
	}		

	
	
}
