#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
	virtual void enqueue(int newEntry) = 0;
	virtual int dequeue() = 0;
	virtual int peekFront() const = 0;
	virtual bool isEmpty() const = 0;
	virtual void makeEmpty() = 0;
};

#endif 
