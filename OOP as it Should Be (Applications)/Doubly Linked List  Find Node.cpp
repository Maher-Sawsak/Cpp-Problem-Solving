// Doubly Linked List Find A Node.


#include <iostream>
using namespace std;

class Node {
public:
    int Data;
    Node* next;
    Node* prev;
};

void InsertAtBeginning(Node*& head, int Value) {

    /*
        {{{ The Algorithms To Add A new Node At Beginning }}}

     1-Create a new node with the desired value.
     2-Set the next pointer of the new node to the current head of the list.
     3-Set the previous pointer of the current head to the new node.
     4-Set the new node as the new head of the list.
    */



    Node* new_node = new Node();

    new_node->Data = Value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
}


void PrintList(Node* head) {
    if (head == NULL) {

        cout << "\nThe Linked List is empty !! ";

    }

    cout << "\nForward :  ";
    while (head->next != NULL) {
        cout << head->Data << " ";
        head = head->next;
    }
    //here to print the last node cuz in the first while loop will not print the last node cuz node->next for the last value is NULL 
    //so it will ignore the last value .
    cout << head->Data << " (Tail reached)" << endl;

    cout << "\nBackward : ";
    while (head != NULL) {
        cout << head->Data << " ";
        head = head->prev;
    }


}



Node* FindNode(Node *head, int Value) {

    while (head != NULL) {
    
        if (head->Data == Value)
            return head;
        head = head->next;
    }

    return NULL;
}


int main()
{
    Node* head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    PrintList(head);
   
    
    Node* Found_node = FindNode(head, 5);

    if (Found_node != NULL) {
        cout << "\n\tNode by find function found successfully : ";
        cout << Found_node->Data << endl;
    }
    else {
        cout << "\n\tThe Found Is Null";
    }


}
