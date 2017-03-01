#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> &A, int B)
{
	vector<int> ret; 
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B) % A.size()]);
	}
	return ret; 
}
int main()
{
	vector<int> A = {1, 2, 3, 4, 5};
	vector<int> B = rotateArray(A, 1);
	cout << "[ ";
	for (auto content : B )
	{
		cout << content << " ";
	}
	cout << "]" << endl;
	return 0;
}

