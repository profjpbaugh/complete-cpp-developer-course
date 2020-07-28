#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int powResult = pow(2, 3);
	int sqrtResult = sqrt(25);
	int ceilResult = ceil(4.2);
	int floorResult = floor(4.2);
	int logResult = log2(512);


	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrtResult << endl;
	cout << "ceiling of 4.2 is " << ceilResult << endl;
	cout << "floor of 4.2 is " << floorResult << endl;
	cout << "log2 of 512 is " << logResult << endl;

	return 0;
}