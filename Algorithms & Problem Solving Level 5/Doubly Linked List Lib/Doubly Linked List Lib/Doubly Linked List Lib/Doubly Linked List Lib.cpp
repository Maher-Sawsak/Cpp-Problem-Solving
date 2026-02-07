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

	cout << "\nThe Index Of Value 40 Is : " << MyArray.Find(40) << endl;


	cout << "\n\nThe Array After Delete Value 40 Is : ";
	cout << endl << MyArray.DeleteItem(40) << endl;//it will return true or false.
	MyArray.PrintList();




}

