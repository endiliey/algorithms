#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::vector;

bool binarySearch(int low, int high, const vector<int>&, int);

int main()
{
	// vector
	vector<int> v1 = {1, 2, 3, 4, 5};
	if(binarySearch(0, v1.size(), v1, 5))
	{
		cout << "found " << 5 << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	return 0;
}

bool binarySearch(int low, int high, const vector<int> &v1, int val)
{
	do
	{
		int mid = (low + high) / 2;
		if (v1[mid] == val)
			return true;
		else if (v1[mid] > val)
			high = mid;
		else
			low = mid + 1;
	}
	while (low <= high);
	
	return false;
}
