// Doubly Linked List Insert at End.
#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node* next;
    Node* prev;

};


void InsertAtEnd(Node*& head, int Value) {

    Node* new_node = new Node();
    new_node->value = Value;
    new_node->next = NULL;
    
    if (head == NULL) {
        new_node->prev = NULL;
        head = new_node;
    
    }
    else {
    
        Node* Current = head;
        while (Current->next != NULL) {
            Current = Current->next;
        }
        Current->next = new_node;
        new_node->prev = Current;    
    
    }


}

void PrintList(Node * head) {

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    
    }

}



int main()
{

    Node* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);


    PrintList(head);

}
