// OverLoading Function


/*
-we have 4 different functions doing sum, but we have many names.

- what is the problem if we just have one name of function for all of them ? !

- some programming languages don’t allow having the same function name, but in C++ we can.


- so we can name all functions to be "MySum".

-- - that’s called overloading.-- -
*/

#include <iostream>
using namespace std;

double MySum(double a, double b) {
    return (a + b);
}

int MySum(int a, int b) {
    return (a + b);
}

int MySum(int a, int b, int c) {
    return (a + b + c);
}

int MySum(int a, int b, int c, int d) {
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;    // 30
    cout << MySum(10.1, 20.1) << endl; // 30.2
    cout << MySum(10, 20, 30) << endl; // 60
    cout << MySum(10, 20, 30, 40) << endl; // 100
    
    return 0;
}
