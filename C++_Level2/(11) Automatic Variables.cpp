// Automatic Variables
/*This is a feature in C++ (since C++11) that allows a programmer to declare a variable using the keyword auto
instead of specifying the explicit data type.
The Compiler then takes on the responsibility of determining the variable's actual type at Compile Time,
based on the type of the value used for its initialization.*/
#include <iostream>
using namespace std;

int main()
{
    auto x = 10;
    auto y = 12.5;
    auto  z = "Mohammed Abu-Hadhoud";

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}