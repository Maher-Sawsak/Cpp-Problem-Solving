// Find Node In A Linked List.


#include <iostream>
using namespace std;
class Node {
public:
    int Data;
    Node* next;
};


void PrintNodes(Node * head) {

    while (head != NULL) {
        cout << head->Data << " ";
      
        head = head->next;

    }


}


void InsertAtTheBeginning(Node * &head ,int Value) {

    Node *new_node = new Node();

    new_node->Data = Value;
    new_node->next = head;

    head = new_node;

}


Node* Find(Node* head, int Value) {
//it will return full node if its found other than this it will return a NULL Node.    

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

  
    InsertAtTheBeginning(head,1);
    InsertAtTheBeginning(head,2);
    InsertAtTheBeginning(head,3);
    InsertAtTheBeginning(head,4);
    InsertAtTheBeginning(head,5);


    PrintNodes(head);

    cout << endl;

    Node* FoundingNode = new Node();
    FoundingNode = Find(head, 2);

    cout<< FoundingNode->Data;
}
