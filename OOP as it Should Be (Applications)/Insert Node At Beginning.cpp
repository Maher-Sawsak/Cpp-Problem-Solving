// Insert Node At Beginning.

#include <iostream>
using namespace std;


class Node {
public:
    int Data;
    Node* next;
};

void PrintNodes(Node * head) {

    while (head!= NULL) {
        cout << head->Data << " ";
        head = head->next;
    }


}

//we will passing the head pointer by reference.
void InsertAtBeginning(Node * &head , int Value) {

    //it will allocate a node in the memory heap.
    Node * new_node = new Node();

    //the new node when we insert a node at beginning must make the pointer next to point to the previous head point.
    new_node->Data = Value;
    new_node->next = head;

    //the head will point to the to the new node cuz its first node now.
    head = new_node;

}


int main()
{

    Node* head = NULL;

    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 6);
    InsertAtBeginning(head, 8);
    InsertAtBeginning(head, 10);

    PrintNodes(head);
}
