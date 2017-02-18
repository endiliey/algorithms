#include <iostream>
#include <queue>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl; using std::queue;

int main()
{
	queue<int> q;
	cout << "Pushing 5 to queue" << endl;
	q.push(5);
	cout << "Queue most front is " << q.front() << endl;
	cout << "Pushing 1, 2, 3, 4" << endl;
	for (auto i = 1; i != 5; ++i)
	{
		q.push(i);
	}
	cout << "Queue size is " << q.size() << endl;
	cout << "Queue back is " << q.back() << endl;
	if (q.empty())
		cout << "Queue is empty" << endl;
	else
		cout << "Queue is not empty" << endl;
	cout << "popping something from queue" << endl;
	q.pop();
	cout << "Front is " << q.front() << ", back is " << q.back() << endl;

	queue<string> q2;
	cout << "Let's play with string queue" << endl;
	q2.emplace("Toni is good");
	q2.emplace("Endi is bad");
	cout << "Queue 2 contains: "<< endl;
	while (!q2.empty())
	{
		cout << q2.front() << endl;
		q2.pop();
	}
	return 0;	
}
