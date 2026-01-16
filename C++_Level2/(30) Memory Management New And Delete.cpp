// Memory Management New And Delete


//new to add an element 
//delet to delete it after done on it.


#include <iostream>

using namespace std;
int main()
{
	int* ptr;
	float *FloatPtr;
	
	
	ptr = new int;
	FloatPtr = new float;


	cout << "Enter The Integer Number : \n";
	cin >> *ptr;


	cout << "Enter The Float Number : \n";
	cin >> *FloatPtr;


	cout<< endl;


	cout << "The integer value at the pointer :" << *ptr << endl;
	cout << "The float value at the pointer :" << *FloatPtr << endl;


	cout << endl;



	delete ptr;
	delete FloatPtr;

	cout << "After Delete The Temporary Variable  :\n";
	cout << ptr << endl;
	cout << FloatPtr;

	return 0;
}