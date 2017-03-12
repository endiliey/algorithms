#include <bits/stdc++.h>

using namespace std;

bool checkDuplicatesWithinK(const vector<int> &arr, int k)
{
	unordered_set<int> set;

	for (int i = 0; i < (int) arr.size(); ++i)
	{
		if (set.find(arr[i]) != set.end())
			return true;
		set.insert(arr[i]);

		if (i >= k)
			set.erase(arr[i - k]);
	}
	return false;
}

int main()
{
	vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
	if (checkDuplicatesWithinK(arr, 3))
		cout << "True" << endl;
	return 0;
}
