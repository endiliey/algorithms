#include <iostream>
#define CAPACITY 1000

using namespace std;

struct stack
{
	int data[CAPACITY];
	int top = 0;
};

bool stackEmpty(const stack &s)
{	
	if (s.top == 0)
		return true;
	return false;
}

void push(stack &s, int x)
{
	s.top++;
	s.data[s.top] = x;
}

int pop(stack &s)
{
	if (stackEmpty(s))
	{
		cout << "error" << endl;
		return -1;
	}
	else
	{
		s.top--;
		return s.data[s.top + 1];
	}
}

int main()
{
	stack s1;
	if (stackEmpty(s1))
		cout << "Stack is empty" << endl;
	cout << "Pushing 5 into stack" << endl;
	push(s1, 5);
	if (!stackEmpty(s1))
		cout << "Stack is not empty" << endl;
	cout << "Popped out " <<  pop(s1) << endl;
}
