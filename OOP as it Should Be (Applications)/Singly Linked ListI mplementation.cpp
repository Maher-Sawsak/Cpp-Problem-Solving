// Singly Linked ListI implementation.

#include <iostream>
using namespace std;

class Node {
public :
	int Data;
	Node* Next;
};

int main()
{


	//its pointer will point to a node so that's why typr is node.
	Node * Head;

	
	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;


	//Here to allocate 3 nodes in the heap.
	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->Data = 1;
	Node2->Data = 2;
	Node3->Data = 3;


	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = NULL;


	Head = Node1;

	while (Head != NULL) {
	
		cout << Head->Data << endl;
		Head = Head->Next;
	}


	return 0;
}