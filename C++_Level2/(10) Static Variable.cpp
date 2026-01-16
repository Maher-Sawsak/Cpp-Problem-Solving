// Static Variable
//A Static Variable : is a special type of variable in programming
// characterized by unique properties regarding its Lifetime and Scope.
#include <iostream>
using namespace std;



 void add() {

     static int Number = 1;

     cout << "The Number is : " << Number << endl;


     Number++;
}



int main()
{
    add();
    add();
    add();

    return 0;
}
