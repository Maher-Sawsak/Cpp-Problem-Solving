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




	cout << "\n\nThe Array After Insert Value 200 at Beginning Is : ";
	MyArray.InsertAtBeginning(200);
	MyArray.PrintList();


	cout << "\n\nThe Array After Insert Value 400 at End Is : ";
	MyArray.InsertAtEnd(400);
	MyArray.PrintList();



}

