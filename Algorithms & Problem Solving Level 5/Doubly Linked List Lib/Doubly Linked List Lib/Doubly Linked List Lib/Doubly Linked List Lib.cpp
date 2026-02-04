// Doubly Linked List Lib.


#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nMy Queue : ";
	MyQueue.Print();


	cout << "\n MyQueue Size : " << MyQueue.Size();
	cout << "\n My Queue Front : " << MyQueue.front();
	cout << "\n My Queue Back : " << MyQueue.back();

	MyQueue.pop();

	cout << "\n MyQueue Size After Popping : " << MyQueue.Size();
	cout << "\nMy Queue After Popping : ";
	MyQueue.Print();


	cout << "\nThe Item At Index (2) In Queue Is : " << MyQueue.GetItem(2);


	MyQueue.Reverse();
	cout << "\nMy Queue : After Reversing : ";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\nQueue after updating the item (2) to 600 value : ";
	MyQueue.Print();


	MyQueue.InsertAfter(2, 800);
	cout << "\nQueue after inserting 800 after item(2) : ";
	MyQueue.Print();
	
	MyQueue.InsertAtFront(1000);
	cout << "\nQueue after inserting at front  : ";
	MyQueue.Print();

	MyQueue.InsertAtBack(2000);
	cout << "\nQueue after inserting 2000 at back : ";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\n\n Queue after clear() : ";
	MyQueue.Print();

}
