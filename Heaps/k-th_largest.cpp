#include <bits/stdc++.h>

using namespace std;

void find_k_th_largest(const vector<int> &v, const int &k)
{
	priority_queue<int, vector<int>, greater<int>> min_heap;

	// Insert first k elements
	for(int i = 0; i < k; ++i)
	{
		min_heap.push(v[i]);
	}

	// AFter first k elements, we keep adding
	for(int i = k; i < (int) v.size(); ++i)
	{
		if (min_heap.top() < v[i])
		{
			min_heap.pop();
			min_heap.push(v[i]);
		}
	}

	cout << "Final content" << endl;
	while(!min_heap.empty())
	{
		cout << min_heap.top() << " ";
		min_heap.pop();
	}
}


int main()
{
	vector<int> v = {3, 2, 4, 5, 6};
	cout << "Initially" << endl;
	for (auto tmp : v)
	{
		cout << tmp << " ";
	}
	cout << endl;
	find_k_th_largest(v, 3);
	return 0;

}
