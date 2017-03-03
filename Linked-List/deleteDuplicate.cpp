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
		cout << it->item << " ";
		it = it->next;
	}
	cout << endl;
}

void deleteDuplicate(link head)
{
	set<int> mySet;
	link it = head;
	link previous = 0;
	while (it != nullptr)
	{
		if (mySet.find(it->item) != mySet.end())
		{
			previous->next = it->next;
		}
		else
		{
			mySet.insert(it->item);
			previous = it;
		}
		it = it->next;
	}
}

int main()
{
	link head = new node(0, 0);
	link it = head;
	for(int i = 1; i != 5; i++)
	{
		link temp = new node(i, nullptr);
		it->next = temp;
		it = it->next;
		temp = new node(5 - i, 0);
		it->next = temp;
		it = it->next;
	}
	cout << "Before deletion: ";
	printList(head);
	deleteDuplicate(head);
	cout << "After deletion: ";
	printList(head);	
	return 0;
}
