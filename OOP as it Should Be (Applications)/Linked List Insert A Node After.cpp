// Linked List Insert A Node After.


#include <iostream>
using namespace std;

class Node {

public:
    int Data;
    Node* Next;

};

void PrintNodes(Node * head) {

    while (head != NULL) {
        cout << head->Data << " ";
        head = head->Next;
    }

}

void InsertAtBeginning(Node * &head,int Value) {

    Node* new_node = new Node();
    new_node->Data = Value;
    new_node->Next = head;

    head = new_node;

}
Node* FindNode(Node * head , int Value) {

    while (head != NULL) {
        if (head->Data == Value)
            return head;

        head = head->Next;
    }
    return NULL;
}

void InsertAfter(Node * prev_Node ,int Value) {

    if (prev_Node == NULL) {
        cout << "\nThe previous Node Can't be Null";
        return;
    }


    Node* new_node = new Node();

    new_node->Data = Value;
    
    new_node->Next = prev_Node->Next;


    prev_Node->Next = new_node;

}

int main()
{

    Node* head = NULL;

    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);


    PrintNodes(head);

    Node* TempNode = NULL;
    TempNode = FindNode(head, 3);
       

    InsertAfter(TempNode, 200);
    cout << endl;
    cout << endl;
    PrintNodes(head);
}
