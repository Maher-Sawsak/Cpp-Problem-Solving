// Static Members In Class. The variable-life among all program . if one object edit it it will change for all.

#include <iostream>

using namespace std;

class clsA {

public:
   static int counter;
    int NormalVar;


    clsA() {
        //This will count the number of object that will be created .
        counter++;
    
    }


    int NormalVariable(int Number) {
    
       return NormalVar = Number;
    
    }

    void PrintObjectData() {
    
        cout << "\n=========================================\n";
        cout << "Normal Variable  : " << NormalVar << endl;
        cout << "Static Variable : " << counter << endl;
        cout << "\n=========================================\n";

    }

};


int clsA::counter = 0;//static variable initialisation outside the class because its static .

int main()
{

    clsA A1, A2, A3;

    A1.NormalVariable(10);
    A2.NormalVariable(20);
    A3.NormalVariable(30);

    A1.PrintObjectData();
    A2.PrintObjectData();
    A3.PrintObjectData();

    
}
