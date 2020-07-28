#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> someVec;
	vector <string> anotherVec(3);

	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);

	cout << "someVec size: " << someVec.size() << endl;

	anotherVec[0] = "John";
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	anotherVec.push_back("Shannon");

	for (int val : someVec)
	{
		cout << val << endl;
	}

	cout << endl;

	for (string name : anotherVec)
	{
		cout << name << endl;
	}

	cout << "Front and back:" << endl;
	cout << "front: " << anotherVec.front() << endl;
	cout << "back: " << anotherVec.back() << endl;

	anotherVec.pop_back();
	anotherVec.insert(anotherVec.begin(), "Don");

	cout << "now, front is " << anotherVec.front() << endl;
	cout << "now, back is " << anotherVec.back() << endl;

	return 0;
}