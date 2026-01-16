// Vectors Initialization
/* 



Syntax :

st::vector <Typr> VectorName = Value; 

 And vector is in #include<vector> Library.

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers = { 1,2,3,4,5,6,7,8,9,10 };

   



    for (int &Number : vNumbers) {

        cout << Number << endl;
    
    }

}
