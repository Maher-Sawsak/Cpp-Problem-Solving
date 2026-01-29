// Template Functions.
#include <iostream>
using namespace std;

template <typename T> T SumOfTwoNumbers(T Number1 , T Number2) {

    return (Number1 + Number2);

}
//The length of the array must be int other than this will give an error.
template <typename T> T SumOfArray(T Array[] , int ArrLength) {
    
    T SumOfElement = 0;

    for (int i = 0;i < ArrLength;i++) {
        SumOfElement += Array[i];
    
    }
    return SumOfElement;

}
int main()
{
    cout << SumOfTwoNumbers(4, 9) << endl;
    cout << SumOfTwoNumbers(4.8, 9.4) << endl;
    cout << SumOfTwoNumbers(4.24732432894231, 9.5434329329722) << endl;
    //it will sum as ASCII code.a = 97 and A is 65 so the number will return also a char cuz the return typw will char.
    cout << SumOfTwoNumbers('a', 'A') << endl;


}
