// Call By Reference Using Pointers
//Pointers Contains The address only the value for it it address.


#include <iostream>

using namespace std;

void swap(int* a, int* b) {

	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{

	
	int a = 5, b = 6;

	cout << a << endl;
	cout << b << endl;
	
	cout<< endl << endl;

	cout << "After Swaping \n";
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;


}