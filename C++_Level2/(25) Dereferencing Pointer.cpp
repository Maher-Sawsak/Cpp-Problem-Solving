// Dereferencing Pointer
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr = &a;

	cout << "a Value is : " << a << endl;
	cout << "Ptr Value inside the Ptr  is : " << ptr << endl;

	cout << endl << endl << endl;

	cout << "The address of a is " << &a << endl;
	cout << "Value of the address that Ptr is pointing to is  " << *ptr << endl;

	cout << endl << endl << endl;



	//This modify will be applying on a itself.
	*ptr = 15;
	cout << " a Value (after modifying) by *Ptr is :" << a << endl;
	cout << "Value of the address that Ptr (after modifying) is pointing to is  " << *ptr << endl;

	cout << endl << endl << endl;

	*ptr = 20;
	cout << " a Value (after modifying again) by *Ptr is :" << a << endl;
	cout << "Value of the address that Ptr (after modifying again) is pointing to is  " << *ptr << endl;
	cout << endl << endl << endl;



	return 0;

}