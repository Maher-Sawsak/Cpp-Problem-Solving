// Static Methods (Functions).
// You cann call the function even if don't create an object from this class>
//you can call the function by this syntax  nameOfClass::nameOfMethod
#include <iostream>
using namespace std;

class clsA {


public:
    static int Function1() {

        return 10;
    }
    
    int Function2() {
    
        return 20;
    
    }
   

};



int main()
{

    clsA A1, A2, A3;

    cout << clsA::Function1() << endl;

    cout<< A1.Function1() << endl;
    cout<< A2.Function1() << endl;
    cout<< A3.Function1() << endl;

    cout << A1.Function2() << endl;
    cout << A2.Function2() << endl;
    cout << A3.Function2() << endl;


}
