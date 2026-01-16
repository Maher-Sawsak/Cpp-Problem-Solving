// Pointer To Void


//if you want to access the value for void pointer you must casting 
//How To cast a pointer from void to another type by this formula

//*******************************************  *static_cast<Type_To_Cast*>(Pointer_Name);  *************

#include <iostream>
using namespace std;

int main()
{
	void* ptr;

	int integerNumber = 10;

	float floatNumber = 10.9;



	//for float Number .
	ptr = &floatNumber;
	cout << "The address of Float Number : ";
	cout << ptr << endl;//it will print address .
	//we want to print value here :
	cout << "The Valu of Float Number : ";
	cout << *static_cast<float*>(ptr) << endl;

	cout<< endl << endl;

	//here is for the integer varaiable to print address and value after casting.
	ptr = &integerNumber;
	cout << "The address of Integer Number : ";//address
	cout << ptr << endl;

	cout << "The Value of Integer Number : ";//value
	cout << *static_cast<int*>(ptr) << endl;

	return 0;
}