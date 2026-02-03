// Doubly Linked List Lib.


#include <iostream>
#include "clsDblLinkedList.h"


int main()
{
	clsDblLinkedList <int> MyObject;
	
	MyObject.InsertAtBeginning(4);
	MyObject.InsertAtBeginning(3);
	MyObject.InsertAtBeginning(2);
	MyObject.InsertAtBeginning(1);
	MyObject.InsertAtEnd(5);

	cout << "\n\nBefor Inserting : ";
	MyObject.PrintList();

	cout << endl;
	cout << "\nThe Result After Inserting A Node By Index  : ";

	MyObject.InsertAfter(3, 700);
	
	MyObject.PrintList();







}
