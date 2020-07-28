#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	queue<string> names;

	//enqueue
	names.push("John");
	names.push("Sally");
	names.push("Bob");
	names.push("Sam");
	names.push("Ali");
	names.push("Karen");

	while (!names.empty())
	{
		cout << names.front() << endl;
		names.pop();  //dequeue
	}

	return 0;
}