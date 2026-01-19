// Adding Objects to Vector.

#include <iostream>
#include<vector>
using namespace std;


class clsA {

   

public:
    int x;

    clsA(int Value) {
    
        x = Value;
    }
    void Print() {
        cout << "The Value Of X is : " << x << endl;
    }


};
int main()
{

    vector <clsA> V1;
    short NumberOfObjects = 5;

    for (int i = 0;i < NumberOfObjects;i++) {
    
        V1.push_back(clsA(i));
    
    }
    //Printing The Object in the vector.

    for (int i = 0;i < NumberOfObjects;i++) {
    
        V1[i].Print();
    }


 }