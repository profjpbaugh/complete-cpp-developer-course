#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

void noChange(const double* const someValue);

int main()
{
	double* myDubzPtr = new double(5.25);

	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;

	noChange(myDubzPtr);

	delete myDubzPtr;
	myDubzPtr = nullptr;

	return 0;
}

//neither is a constant (both can be changed)
void noConst()
{
	cout << "In noConst" << endl;

	int* intPtr = new int(50);

	cout << "\torig value : " << *intPtr << endl;

	*intPtr = 100;
	cout << "\tchange data: " << *intPtr << endl;

	delete intPtr;  //delete current dynamic int

	intPtr = new int(125);
	cout << "\tnew integer entirely: " << *intPtr << endl;
	
	delete intPtr;
}

//pointer is constant (cannot be changed)
//data is not constant (can be changed)
void cp2ncd()
{
	cout << "In cp2ncd" << endl;

	int* const intPtr = new int(100);
	cout << "\torig value: " << *intPtr << endl;

	*intPtr = 250;
	cout << "\tnew integer value: " << *intPtr << endl;

	
	delete intPtr;

	//intPtr = new int(222);  //ERROR!  ptr is constant
}


//pointer is not constant (can be changed)
//data is constant (can't be changed)
void ncp2cd()
{
	cout << "In ncp2cd" << endl;

	const int* intPtr = new int(500);

	cout << "\torig value: " << *intPtr << endl;

	delete intPtr;

	intPtr = new int(100);  //ok!  

	//*intPtr = 1500;     //ERROR - data is constant

	delete intPtr;
}

//pointer is constant
//data is constant
void cp2cd()
{
	const int* const intPtr = new int(5000);

	cout << "inside cp2cd" << endl;
	cout << "\torig value: " << *intPtr << endl;

	//no changes allow
	//*intPtr = 1212;   //ERROR - data is constant
	//intPtr = new int(1212);   //ERROR - pointer is constant

	delete intPtr;
}

void noChange(const double* const someValue)
{
	cout << *someValue << endl;
}