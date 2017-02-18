#include <iostream>
#include <queue>

using namespace std;

void push(queue<int> &q1, queue<int> &q2, int val)
{
	q1.push(val);
}

int pop(queue<int> &q1, queue<int> &q2)
{
	if (q1.empty())
	{
		cout << "NO ITEM IN STACK" << endl;
		return -1;
	}
	while(q1.size() > 1)
	{
		q2.push(q1.front());
		q1.pop();
	}
	auto x = q1.front();
	q1.pop();
	q2.swap(q1);
	return x;
}
int main()
{
	queue<int> q1;
	queue<int> q2;
	push(q1, q2, 5);
	push(q1, q2, 7);
	cout << "Pushing 5 and 7 to stack" << endl;
	cout << "Popping " << pop(q1, q2) << endl;
	cout << "popping " << pop(q1, q2) << endl;
	cout << "Pushing 1 to stack" << endl;
	push(q1, q2, 1);
	cout << "popping " << pop(q1, q2) << endl;
	cout << "popping again " << pop(q1, q2) << endl;
	cout << "popping again " << pop(q1, q2) << endl;
	cout << "popping again " << pop(q1, q2) << endl;

	return 0;
}
