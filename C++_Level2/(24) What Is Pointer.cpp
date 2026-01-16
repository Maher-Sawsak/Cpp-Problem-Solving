// What is Pointer
//The Pointer its a continuer contain an address for other variable.

#include <iostream>

using namespace std;

int main()
{


	int a = 10;
	int b = 20;

	int* ptr = &a;
	cout << "Pointer Value is : " << ptr << endl;
	cout << "after edit it your Pointer Value at its address is : " << *ptr << endl;


	ptr = &b;
	cout << "after edit it your Pointer Value is : " << ptr << endl;


	cout << "after edit it your Pointer Value at its address is : " << *ptr << endl;

	return 0;
}