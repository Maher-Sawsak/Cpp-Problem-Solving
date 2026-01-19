// Passing Objects To Functions ByRef ByVal.


#include <iostream>
using namespace std;

class clsA {
public:
    int x = 50;

    void Print() {
    
        cout << x;
    }



};

void AssigneeByV(clsA A) {
    A.x = 100;
}
void AssigneeByRef(clsA& A) {
    A.x = 200;
}

int main()
{
    clsA S;
  
    cout << "\nBefor Any Assigning Method : ";
    S.Print();
   
    cout << "\nAfter Using Assinging Method By Value: ";
    AssigneeByV(S);
    S.Print();
   
    
    cout << "\nAfter Assigning Method By Reference: ";
    AssigneeByRef(S);
    S.Print();



}