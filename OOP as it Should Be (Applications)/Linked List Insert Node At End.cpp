// Linked List Insert Node At End.


#include <iostream>
using namespace std;


class Node {
public:
	int Value;
	Node* Next;
};

void InsertAtTheEnd(Node * &head ,int Value) {

	Node* new_node = new Node();
	
	new_node->Value = Value;
	new_node->Next = NULL;

	if (head == NULL) {
		head = new_node;
		return;
	}
	//here this line means make LastNode point same the head that points to.so the LastNode pointer will move but head not. 
	Node* LastNode = head;

	while (LastNode->Next != NULL) {
	
		//here will stop at the last node the contain a value and the next for it its point to null.
		LastNode = LastNode->Next;

	}
 //here when last node contain a value but point to null we will make it to point to the new node that we will add it.
	LastNode->Next = new_node;
	return;
}

void InsertAtTheBeginning(Node *&head,int Value) {

	Node* new_node = new Node();

	new_node->Value = Value;
	new_node->Next = head;

	head = new_node;
}


void PrintNodes(Node * head) {
	while (head != NULL) {
		cout << head->Value << " ";

		head = head->Next;
	}
}


int main()
{
	Node* head = NULL;

	InsertAtTheEnd(head, 5);
	InsertAtTheEnd(head, 4);
	InsertAtTheEnd(head, 3);
	InsertAtTheEnd(head, 2);
	InsertAtTheEnd(head, 1);
	InsertAtTheBeginning(head, 6);

	PrintNodes(head);

	return 0;
}
