#include <iostream>
#include <vector>

using namespace std;

vector<int> palindromeSelf(vector<int> A) 
{
    vector<int> B(2 * A.size(), 0);
    for (int i = 0; i < A.size(); i++) 
	{
        B[i] = A[i];
        B[i + A.size()] = A[(A.size() - 1 - i)];
    }
    return B;
}

int main()
{
	vector<int> A = {5, 10, 3, 6};
	vector<int> B = palindromeSelf(A);
	cout << "[ ";
	for (auto temp : B)
	{
		cout << temp << " ";
	}
	cout << "]" << endl;
	return 0;
}


