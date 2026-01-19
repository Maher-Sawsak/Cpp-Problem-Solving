// Virtual Functions.


#include <iostream>
using namespace std;


class clsPerson {
public:

    virtual void Print() {
        cout << "\nHi, I'm  a Person!!";
    }

};

class clsEmployee : public clsPerson {

public:
    void Print() {
        cout << "\nHi, I'm  an Employee!!";

    }

};
class clsStudent : public clsEmployee {
public:

    void Print() {

        cout << "\nHi, I'm  a Student!!";

    }

};






int main()
{

    clsEmployee Employee;

    clsStudent Student;

    Employee.Print();
    Student.Print();


    //Look at the person class i used the virtual for to print the correct anser>
    //if i remove the virtual keyword in the person class it will Print() the print method that is in the person class twice.
    clsPerson * Person1 = &Employee;
    clsPerson * Person2 = &Student;

    Person1->Print();
    Person2->Print();

}

