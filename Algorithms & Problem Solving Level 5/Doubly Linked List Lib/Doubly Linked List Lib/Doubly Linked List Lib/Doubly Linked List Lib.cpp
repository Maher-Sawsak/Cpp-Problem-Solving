// Doubly Linked List Lib.
#include <iostream>
#include "clsMyStack.h"
#include "clsDynamicArray.h"
using namespace std;

int main()
{

	clsDynamicArray <int> MyArray(5);

	cout << "\nIs Empty Result  :  " << MyArray.IsEmpty();
	cout << "\nThe Size Is        :  " << MyArray.Size() << endl;

	MyArray.SetItem(0, 10);
	MyArray.SetItem(1, 20);
	MyArray.SetItem(2, 30);
	MyArray.SetItem(3, 40);
	MyArray.SetItem(4, 50);
	MyArray.PrintList();





	cout << "\n\nThe Array After Insert Value 700 at Index (3) Is : ";
	MyArray.InsertAt(5, 700);
	MyArray.PrintList();


}

