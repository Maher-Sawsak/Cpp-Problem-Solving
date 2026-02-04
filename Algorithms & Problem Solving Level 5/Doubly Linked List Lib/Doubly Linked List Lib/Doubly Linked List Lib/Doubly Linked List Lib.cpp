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

	cout << "\n\n\n MyQueue Size After Popping : " << MyQueue.Size();
	
	cout << "\nMy Queue After Popping : ";
	MyQueue.Print();
}
