#include <iostream>
using namespace std;

class MyNumber {
private:
    int* _PtrNumber; 

public:
    // 1. Constructor :
    MyNumber() {
        _PtrNumber = new int; 
        *_PtrNumber = 100;    
        cout << "Constructor: Memory Allocated (Room booked)" << endl;
    }

    // 2. Destructor
    ~MyNumber() {
        delete _PtrNumber; 
        cout << "Destructor: Memory Freed (Room Checked-out)" << endl;
    }

    void PrintVal() {
        cout << "Value is: " << *_PtrNumber << endl;
    }
};

int main() {
    cout << "--- Start of Main ---" << endl;

    //Way i added the curly bracits its for end the object and delete to see result for destructor.
    {
 
        MyNumber Obj1;

        Obj1.PrintVal();

    } 

    cout << "--- End of Main ---" << endl;
    return 0;
}