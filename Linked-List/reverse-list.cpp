#include <iostream>

using namespace std;

struct node
{
	int item;
	node* next;
	node(int x, node* t)
	{
		item = x;
		next = t;
	}
};

typedef node* link;

void printList(link head)
{
	link it = head;
	cout << "[ ";
	while(it != 0)
	{
		cout << it->item << ", ";
		it = it->next;
	}
	cout << "]" << endl;
	return;
}

link reverse(link x)
{
	link t, y = x, r = 0;
	while (y != 0)
	{
		t = y->next;
		y->next = r;
		r = y;
		y = t;
	}
	return r;
}

int main()
{
	link t = new node(1,0);
	link x = t;
	for(int i = 2; i <= 5; i++)
	{
		link temp = new node(i, 0);
		x->next = temp;
		x = x->next;
	}
	cout << "Before reverse " << endl;
	printList(t);
	t = reverse(t);
	cout << "After reverse " << endl;
	printList(t);	

}
