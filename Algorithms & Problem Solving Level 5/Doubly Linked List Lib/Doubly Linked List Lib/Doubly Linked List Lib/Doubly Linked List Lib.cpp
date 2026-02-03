// Doubly Linked List Lib.


#include <iostream>
#include "clsDblLinkedList.h"


int main()
{
	clsDblLinkedList <float> MyObject;
	if (MyObject.IsEmpty()) {
		cout << "\n\nYes, Your Linked List Is Empty\n";
	}
	else {
		cout << "\n\nYour Linked List Is  Full\n";
	}
	MyObject.InsertAtBeginning(1.6);
	MyObject.InsertAtBeginning(2.8);
	MyObject.InsertAtBeginning(3.83);
	MyObject.InsertAtBeginning(4.42);
	MyObject.InsertAtEnd(5);

	MyObject.PrintList();


    MyObject.DeleteLastNode();

	cout << "\n\nResult for deleteing Last Node  :  ";
	MyObject.PrintList();

	cout << "\n\nThe size of the linked list is  : " << MyObject.Size() << endl;
	cout << "\n\nResult for deleteing   First Node :  ";
	MyObject.DeleteFirstNode();
	MyObject.PrintList();



	cout << "\n\nResult After Finding Node 2 : ";
	clsDblLinkedList <float>::Node *N1 = MyObject.Find(2.8);
	if (N1 != NULL) {
		cout << "\nThe Value Found :)";
	}
	else {
		cout << "\nThe Value Not Found :(";
	}

	cout << "\n\nThe size of the linked list is  : " << MyObject.Size();

	
	
	if (MyObject.IsEmpty()) {
		cout << "\n\nYes, Your Linked List Is Empty\n";
	}
	else {
		cout << "\n\nYour Linked List Is  Full\n";
	}

	MyObject.Clear();
	cout << "\n\nExcuting the Clear  :     " << MyObject.Size() << endl;



}
