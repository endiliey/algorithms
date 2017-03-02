#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(const vector<int> &A) {
    int maximumFound = INT_MIN;
    int tempMaximum = 0;
    
    for (auto &tmp : A)
    {
        tempMaximum += tmp;
        if (tempMaximum > maximumFound)
            maximumFound = tempMaximum;
        if (tempMaximum < 0)
            tempMaximum = 0;
    }
    return maximumFound;
}

int main()
{
	vector<int> A = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	cout << "Maximum sum is " << maxSubArray(A);
	return 0;
}
