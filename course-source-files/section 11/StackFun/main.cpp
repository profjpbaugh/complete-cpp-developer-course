#include <iostream>
#include <stack>
#include <string>
using namespace std;

void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string origString);

int main()
{
	string strArray[5];

	strArray[0] = "racecar";
	strArray[1] = "fudge";
	strArray[2] = "civic";
	strArray[3] = "bob";
	strArray[4] = "dogs";

	for (string str : strArray)
	{
		printResult(str);
		cout << endl;
	}

	return 0;
}

void storeReverse(string origString, stack<char>& reverseStack)
{
	for (char c : origString)
	{
		reverseStack.push(c);
	}
}

bool isPalindrome(string origString)
{
	stack<char> reverseStack;
	storeReverse(origString, reverseStack);

	bool result = true;

	if (origString.length() == reverseStack.size())
	{
		for (char c : origString)
		{
			char currChar = reverseStack.top();
			if (currChar != c)
			{
				result = false;
				break;
			}
			reverseStack.pop();
		}
	}
	else
	{
		result = false;
	}

	return result;
}

void printResult(string origString)
{
	cout << "Is " << origString << " a palindrome?\t"
		<< boolalpha << isPalindrome(origString) << endl;
}