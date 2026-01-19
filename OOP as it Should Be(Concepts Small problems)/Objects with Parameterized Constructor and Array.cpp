// Objects with Parameterized Constructor and Array.


#include <iostream>
using namespace std;


class clsA {
public:
    int x;

    //Parameterizrd constructor.
    clsA(int Value) {
        x = Value;
    }

    //here its the Method member.
    void Print() {
    
        cout << x << endl;
    }

};



int main()
{

    //hard coded array.
    clsA arrA[3] = { clsA(3) , clsA(6),clsA(9) };

    //here I used the loop just the print the element of arrA which is object so i can access the Methods.
    for (int i = 0;i < 3;i++) {
        arrA[i].Print();
    
    }

    return 0;
}
