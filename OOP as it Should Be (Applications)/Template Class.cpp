// Template Class.


#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T _Number1;
    T _Number2;

public:
    Calculator(T Number1 , T Number2) {
        _Number1 = Number1;
        _Number2 = Number2;    
    }
    T Add() {
    
        return (_Number1 + _Number2);
    }
    T Subtract() {
        return (_Number1 - _Number2);
    
    }
};
int main()
{
    Calculator <int> Object(3, 4);

    cout << Object.Add() << endl;
    cout << Object.Subtract() << endl;
}
