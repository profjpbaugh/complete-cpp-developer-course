#ifndef NODE_H
#define NODE_H

class Node
{
	public:
		Node(int data, Node* next)
		{
			this->data = data;
			this->next = next;
		}//end ctor

		void setData(int data)
		{
			this->data = data;
		}//end setData

		void setNext(Node* next)
		{
			this->next = next;
		}//end setNext

		int getData()
		{
			return data;
		}

		Node* getNext()
		{
			return next;
		}
	private:
		int data;
		Node* next;
};

#endif
