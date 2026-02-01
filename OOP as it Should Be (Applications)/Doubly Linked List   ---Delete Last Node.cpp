// Doubly Linked List ---Delete First Node.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Create a node
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};

void InsertAtBeginning(Node*& head, int value) {


    /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the current head of the list.
        3-Set the previous pointer of the current head to the new node.
        4-Set the new node as the new head of the list.
    */

    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}


void DeleteLastNode(Node*& head) {

    if (head == NULL) {
        return;
    }
    

    //this if there is one node.
    if (head->next == NULL) {
        //deleting node.
        delete head;
        //making the head pointer to point to null cuz if its not will point to empty node.
        head = NULL;
        return;

    }

    Node* Current = head;
    //now here to find not the last node it will point the node whice is befor last node.
    while (Current->next->next != NULL) {
        Current = Current->next;
    }

    //now the temp is holding the last node.
    Node* temp = Current->next;
    Current->next = NULL;
    delete temp;
}



// Print the linked list
void PrintList(Node* head)
{

    if (head == NULL) {
        cout << "\nThe Linked List Is empty  : ";
    }

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }


}

int main()
{
    Node* head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Content:\n";
    PrintList(head);


    cout << "\nLinked List Content After Deleting The Last Node : \n";
    DeleteLastNode(head);
    PrintList(head);

    cout << "\nLinked List Content After Deleting The Last Node : \n";
    DeleteLastNode(head);
    PrintList(head);

    cout << "\nLinked List Content After Deleting The Last Node : \n";
    DeleteLastNode(head);
    PrintList(head);

    cout << "\nLinked List Content After Deleting The Last Node : \n";
    DeleteLastNode(head);
    PrintList(head);

    cout << "\nLinked List Content After Deleting The Last Node : \n";
    DeleteLastNode(head);
    PrintList(head);
} 