// Linked List Delete Last Node.


#include <iostream>
using namespace std;

class Node {
public :
    int value;
    Node* next;
};

void PrintNodes(Node *head) {

    if (head == NULL) {
        cout << "\nThe Linked List is empty\n";
        return;
    }

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }

}

void AddNodeAtBeginning(Node *&head , int Value) {

    Node* new_node = new Node();

    new_node->value = Value;
    new_node->next = head;

    head = new_node;

}

void DeleteLastNode(Node *&head) {
 
    if (head == NULL) return;

    Node* Prev = head, * Current = head;

    if (Current->next == NULL) {
        head = NULL;
        delete Current;
        return;
    }

    while (Current != NULL && Current->next != NULL) {
            Prev = Current;
            Current = Current->next;
    }

    Prev->next = NULL;//make te previous node poin to nothing then delete the last node
    delete Current;
   
}


int main()
{
    Node* head = NULL;

    AddNodeAtBeginning(head, 5);
    AddNodeAtBeginning(head, 4);
    AddNodeAtBeginning(head, 3);
    AddNodeAtBeginning(head, 2);
    AddNodeAtBeginning(head, 1);
    PrintNodes(head);

    cout << endl;
    DeleteLastNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteLastNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteLastNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteLastNode(head);
    PrintNodes(head);

    //This will gave us a temp cuz the linkedlist is empty.
    cout << endl;
    DeleteLastNode(head);
    PrintNodes(head);

}
