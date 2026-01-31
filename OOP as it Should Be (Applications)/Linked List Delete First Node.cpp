
#include <iostream>
using namespace std;
class Node {
public:
    int Value;
    Node* next;
};
void PrintNodes(Node *head) {

    if (head == NULL) {
        cout << "\n\nThe LLinked List is empty!!";
        return;
    }

    while (head != NULL) {
        cout << head->Value << " ";
        head = head->next;
    }

}

void InsertAtBeginning(Node*& head, int value)
{
    // Allocate memory to a node
    Node* new_node = new Node();

    // insert the data
    new_node->Value = value;
    new_node->next = head;

    // Move head to new node
    head = new_node;

}


////My Solution : 
//void DeleteFirstNode(Node*& head) {
// 
//    if (head == NULL)
//        return;
//
//    Node* Current = head;
//
//    if (Current->next == NULL) {
//        
//        delete head;
//        head = NULL;
//        return;
//    }
//
//    head = Current->next;
//    delete Current;
//   
//
//}

void DeleteFirstNode(Node*& head) {

    Node* Current = head;

    if (head == NULL)
    {
        return;
    }

    head = Current->next;
    delete Current;//free from memory
    return;

}

int main()
{
    Node* head = NULL;
    InsertAtBeginning(head,1) ;
    InsertAtBeginning(head,2) ;
    InsertAtBeginning(head,3) ;
    InsertAtBeginning(head,4) ;
    InsertAtBeginning(head,5) ;
    PrintNodes(head);
  
    
    cout << endl;
    DeleteFirstNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteFirstNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteFirstNode(head);
    PrintNodes(head);

    cout << endl;
    DeleteFirstNode(head);
    PrintNodes(head);


    cout << endl;
    DeleteFirstNode(head);
    PrintNodes(head);

}
