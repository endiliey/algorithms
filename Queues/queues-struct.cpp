#include <iostream>
#define CAPACITY 1000

using namespace std;

struct queue
{
	int data[CAPACITY];
	int front = 0;
	int size = 0;
};

void enqueue(queue &q, int val)
{
	q.data[(q.size + q.front) % CAPACITY] = val;
	q.size++; 
}

int dequeue(queue &q)
{
	if (q.size == 0)
	{
		cout << "error, no element" << endl;
		return -1;
	}
	int x = q.data[q.front];
	q.front++;
	q.size--;
	return x;
}
int main()
{
	queue q1;
	cout << "Enqueueing 5 to the queue" << endl;
	enqueue(q1, 5);
	cout << "Enqueueing 10 to the queue" << endl;
	enqueue(q1, 10);
	cout << "Dequeueing " << dequeue(q1) << endl;
	cout << "Dequeueing " << dequeue(q1) << endl;
	cout << "Dequeueing again" << endl;
	dequeue(q1);	
	return 0;
}
