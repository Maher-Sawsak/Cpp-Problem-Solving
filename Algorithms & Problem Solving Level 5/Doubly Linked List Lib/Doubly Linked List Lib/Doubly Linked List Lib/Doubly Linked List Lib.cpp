// Doubly Linked List Lib.


#include <iostream>
#include "clsDblLinkedList.h"


int main()
{
	clsDblLinkedList <int> MyObject;
	if (MyObject.IsEmpty()) {
		cout << "\n\nYes, Your Linked List Is Empty\n";
	}
	else {
		cout << "\n\nYour Linked List Is  Full\n";
	}
	MyObject.InsertAtBeginning(4);
	MyObject.InsertAtBeginning(3);
	MyObject.InsertAtBeginning(2);
	MyObject.InsertAtBeginning(1);
	MyObject.InsertAtEnd(5);

	MyObject.PrintList();

	cout << endl;

	cout << endl;

	if (MyObject.UpdateItem(2, 500)) {
	
		cout << "\nUpdated Successful :)\n";
	}else{
	
		cout << "\nSorry , Error\n";
	}
	MyObject.PrintList();
}
