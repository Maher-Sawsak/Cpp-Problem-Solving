// What is ‘this’ pointer.

#include <iostream>
using namespace std;


class clsEmployee {

public:

    string ID;
    string Name;
    float Salary;
    

    clsEmployee(string ID,string Name, float Salary) {
   
        //herei used (this) pointer because the compiler doest know which ID for the parameter 
        //and which for the object itself to assign to ID =ID?????!!!!!.
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;

    }
   
   static void PrintObjectData(clsEmployee Employee) {
    
       Employee.Print();
    }

   //I Know the name is long its practise to remember when i come back.
   void PrintObjectDataByCallingAnotherFunctionItsParameterWantObject() {
       return PrintObjectData(*this);
   
   }


    void Print() {
        cout << endl << Name << " " << ID << " " << Salary << endl;
    }

};






int main()
{
    clsEmployee Employee1("#31" , "Maher Sawsak",50000.323);
    
    Employee1.PrintObjectData(Employee1);

    //it will take the Employee1 it self as a parameter inside it. and print what we need.
    Employee1.PrintObjectDataByCallingAnotherFunctionItsParameterWantObject();
}