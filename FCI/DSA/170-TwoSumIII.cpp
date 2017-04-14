#include <bits/stdc++.h>

using namespace std;

class TwoSum
{
	unordered_map<int, int> hash;
	
	bool find(int value)
	{
		for (auto &p : hash)
		{
			int num = p.first;
			int y = value - num;
			if (y == num)
			{
				// for duplicates ensure there 2 individual nums
				if (hash[num] >= 2)
					return true;
			}
			else if (hash[y] > 0)
			{
				return true;
			}
		}
		return false;
	}

	void add(int input)
	{
		hash[input]++;		
	}
};




int main()
{
	
}
