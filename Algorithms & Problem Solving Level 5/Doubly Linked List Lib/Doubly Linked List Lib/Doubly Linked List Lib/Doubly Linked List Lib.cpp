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

	MyArray.SetItem(0, 500);
	MyArray.SetItem(1, 599);
	MyArray.SetItem(2, 600);
	MyArray.SetItem(3, 700);
	MyArray.SetItem(4, 800);
	MyArray.SetItem(5, 999);

	MyArray.PrintList();



	cout << "\n\nthe Result For Reversing  : ";
	MyArray.Reverse();
	MyArray.PrintList();



	cout << endl;
	MyArray.Clear();
	MyArray.PrintList();

}

