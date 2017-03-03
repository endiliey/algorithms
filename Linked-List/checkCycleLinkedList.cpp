#include <iostream>
#include <set>

using namespace std;

struct node
{
	int item;
	node* next;
	node(int a, node* t)
	{
		item = a;
		next = t;
	}
};

typedef node* link;

void printList(link head)
{
	link it = head;
	while (it != nullptr)
	{
		cout << it->item << "->";
		it = it->next;
	}
	cout << endl;
}

bool detectCycle(link head)
{
	if (head == nullptr)
		return false;
	link fast = head;
	link slow = head;

	while (fast->next != nullptr)
	{
		fast = fast->next;
		if (fast->next != nullptr)
		{
			fast = fast->next;
			slow = slow->next;
		}
		if (fast == slow)
			return true;
	}
	return false;
}

int main()
{
	link head = new node(0, 0);
	link it = head;
	for(int i = 1; i != 5; i++)
	{
		link temp = new node(i, 0);
		it->next = temp;
		it = it->next;
		temp = new node(5 - i, 0);
		it->next = temp;
		it = it->next;
	}
	it->next = head;

	if (detectCycle(head))
		cout << "There is a cycle" << endl;
	return 0;
}
