// Union.


#include <iostream>
using namespace std;

// you can't define a string data type in the union because the string have a constructor and destructor 
// and union doesn't accept any thing any thing having constructor or destructor
//the union is shared same memory space for all variacbles and the space will be aequal to the biggest variabl's size.
union MyUnion {

    int Value;
    float floatValue;
    char Letter;
};

int main()
{
    MyUnion myUnion;


    myUnion.Value = 4;
    cout << myUnion.Value << endl;


    myUnion.Letter = 'A';
    cout << myUnion.Letter << endl;


    myUnion.floatValue = 33.323f;
    cout << myUnion.floatValue << endl;

}
