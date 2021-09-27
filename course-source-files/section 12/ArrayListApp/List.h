#ifndef LIST_H
#define LIST_H

class List
{
	public:

		virtual void add(int newEntry) = 0;
		virtual void add(int newEntry, int position) = 0;
		virtual void set(int newEntry, int position) = 0;  //replace element at position
		virtual bool contains(int entry) const = 0;  //does it exist?
		virtual int find(int entry) const = 0;  //return position of entry
		virtual int remove(int position) = 0;
		virtual void makeEmpty() = 0;
		virtual int size() const = 0; //get length of list
		virtual bool isEmpty() const = 0;
		virtual void printList() const = 0;
};
#endif 
