#include <iostream>
#include <stack>
#include <string>
 

using std::cout; using std::cin; using std::stack; using std::endl;
using std::string;

int main()
{
	stack<int> s1;
	stack<string> s2;
	cout << "Stack empty? " << s1.empty() << endl;
	s1.push(5);
	cout << "Stack top is " << s1.top() << endl;
	cout << "Pop from stack " << endl;
	s1.pop();
	if (!s1.empty()) 
		cout << "Stack top is now " << s1.top() << endl;
	else
		cout << "Stack is empty now " << endl;

	cout << "Stack number 2 size is " << s2.size() << endl;
	s2.push("endilie");
	cout << "Stack number 2 size now is " << s2.size() << endl;
	cout << "Stack top is " << s2.top() << endl;
	s2.pop();
	if (s2.empty())
		cout << "Stack is empty now " << endl;
	else
		cout << "Stack is not empty after popping" << endl;

	return 0;
}
