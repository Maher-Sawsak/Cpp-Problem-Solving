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



	cout << "\nThe Array After Deleting Item At Index (2) Is : ";
	MyArray.DeleteItemAt(2);
	MyArray.PrintList();
	cout << "\nThe Size Is After Deleting Item At Index (2) Is :  " << MyArray.Size() << endl;


	cout << "\nThe Array After Deleting Item At Index (0) Is : ";
	MyArray.DeleteItemAt(0);
	MyArray.PrintList();
	cout << "\nThe Size Is After Deleting at index 0 :  " << MyArray.Size() << endl;
}

