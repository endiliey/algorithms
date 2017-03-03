#include <bits/stdc++.h>

using namespace std;

vector<int> primeSum(int A) {
    vector<bool> isPrime(A + 1, true);
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for (int i = 2; i <= A; i++)
    {
        if (i > A / i)
            break;
        if (isPrime[i])
            for(int j = i; j * i <= A; j++)
                isPrime[i * j] = false;
    }
    
    vector<int> pairSum;
    for (int i = 2; i <= A; i++)
    {
        if (isPrime[i] && isPrime[A - i])
        {
            pairSum.push_back(i);
            pairSum.push_back(A - i);
            break;
        }
    }
    return pairSum;    
}

int main()
{
	int n;
	cin >> n;
	vector<int> ans = primeSum(n);
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}

