#include <iostream>
#include "LinkedQueue.h"
using namespace std;

int main()
{
	LinkedQueue queue;

	cout << "About to enqueue 10 numbers" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "enqueuing " << (i * 100) << endl;
		queue.enqueue(i * 100);
	}

	queue.enqueue(1234);  //one more for fun

	cout << "About to dequeue, while queue is not empty!" << endl;

	while (!queue.isEmpty())
	{
		cout << queue.dequeue() << endl;
	}

	cout << "About to test for error:  dequeue on empty queue" << endl;
	queue.dequeue();

	return 0;
}