#include <iostream>
using namespace std;

int multiply(int a, int b, int c);

int main()
{
	int solution = multiply(5, 10, 2);
	
	cout << "Solution is: " << solution << endl;

	return 0;
}

int multiply(int a, int b, int c)
{
	return a * b * c;
}