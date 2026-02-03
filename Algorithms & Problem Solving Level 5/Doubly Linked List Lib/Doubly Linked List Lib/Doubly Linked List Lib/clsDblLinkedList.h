#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{

protected:
    int _Size = 0;

public:

    class Node
    {

    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {

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
        _Size++;

    }

    // Print the linked list
    void PrintList()

    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {


        /*  1 - Create a new node with the desired value.
             2-Set the next pointer of the new node to the next node of the current node.
             3-Set the previous pointer of the new node to the current node.
             4-Set the next pointer of the current node to the new node.
             5-Set the previous pointer of the next node to the new node(if it exists).
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;

        _Size++;
    }

    void InsertAtEnd(T value) {

        /*
            1-Create a new node with the desired value.
            2-Traverse the list to find the last node.
            3-Set the next pointer of the last node to the new node.
            4-Set the previous pointer of the new node to the last node.
        */


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }


        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete) {

        /*
            1-Set the next pointer of the previous node to the next pointer of the current node.
            2-Set the previous pointer of the next node to the previous pointer of the current node.
            3-Delete the current node.
        */
        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;


        _Size--;
    }

    void DeleteFirstNode()
    {

        /*
            1-Store a reference to the head node in a temporary variable.
            2-Update the head pointer to point to the next node in the list.
            3-Set the previous pointer of the new head to NULL.
            4-Delete the temporary reference to the old head node.
        */

        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;

        _Size--;
    }

    void DeleteLastNode() {

        /*
            1-Traverse the list to find the last node.
            2-Set the next pointer of the second-to-last node to NULL.
            3-Delete the last node.
        */

        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        // we need to find the node before last node.
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;

        _Size--;
    }

    int Size() {
       //this algorithms it tooks O(1).
        return  _Size;
    }
    bool IsEmpty(){
        return (_Size == 0 ? true : false);
    }


    void Clear() {
    
        while (_Size > 0) {
            //the delete will change the size inside it.
            DeleteFirstNode();
        }
   
    }

    void Reverse() {
       
        Node* Current = head;
        Node* temp = nullptr;
        while (Current != nullptr) {
        
            temp = Current->prev;
            Current->prev = Current->next;
            Current->next = temp;
            //why its prev ? cuz we swap it so we must goby prev instead next to go to the next node.
            Current = Current->prev;
        }
        
        //Now the head is still point to same we will change it if u didn't do the next code will just give u the first node.

        if (temp != nullptr) {
            head = temp->prev;
        }


    }

    Node* GetNode(int IndexOfNode) {
       
        int Counter = 0;
        if (IndexOfNode >= _Size   || IndexOfNode < 0) {
            return nullptr;
        }

        Node* Current = head;

        while (Current != nullptr && (Current->next != NULL)) {

            if (Counter == IndexOfNode ) {
                return Current;
            }

            Current = Current->next;
            Counter++;
        }
        return nullptr;
    }

       
    T GetItem(int Index) {
    
        Node* ItemNode = GetNode(Index);
        //be careful here u cant use nullptr cuz it will return address noe any int or float etc.values.
        //you must use NULL cuz it will return 0 but nullptr its acctualy a null pointer empty space.
        if (ItemNode == NULL) {
            return NULL;
        }
        else {
            return ItemNode->value;
        }
    }

    bool UpdateItem(int Index , T Value) {
    
        Node* ItemNode = GetNode(Index);
        
        if (ItemNode != NULL) {
            ItemNode->value = Value;
            return true;
        }
        else {
            return false;
        }
    
    }




};
