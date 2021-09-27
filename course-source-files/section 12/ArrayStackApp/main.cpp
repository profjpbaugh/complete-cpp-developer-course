#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main()
{

	ArrayStack stack;
	ArrayStack stack2;

	for (int i = 0; i < 17; i++)  //make it get to the limit on last element
	{
		stack.push(i);
	}

	while (!stack.isEmpty())
	{
		stack2.push(stack.pop());
	}

	cout << "Same order as entered, using second stack:" << endl;
	while (!stack2.isEmpty())
	{
		cout << stack2.pop() << endl;
	}


	return 0;
}