#include <iostream>
#include <stack>

using namespace std;

void enqueue(stack<int> &s1, stack<int> &s2, int val)
{
	s1.push(val);	
}

int dequeue(stack<int> &s1, stack<int> &s2)
{
	if (s2.empty())
	{
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
	}
	
	if (!s2.empty())
	{
		auto x = s2.top();
		s2.pop();
		return x;
	}
	cout << "error, nothing in queue" << endl;
	return -1;
}

int main()
{
	stack<int> s1;
	stack<int> s2;
	enqueue(s1, s2, 5);
	enqueue(s1, s2, 7);
	cout << "Just pushed 5 and 7 to queue" << endl;
	cout << "Dequeued " << dequeue(s1, s2) << endl;
	cout << "Just pushed 8 to queue" << endl;
	enqueue(s1, s2, 8);
	cout << "Just dequeued " << dequeue(s1, s2) << endl;
	cout << "Dequeud again " << dequeue(s1, s2) << endl;
	cout << "Dequeueing again " << dequeue(s1, s2) << endl;
	return 0;
}
