// Pointers And Structure

//Note :
// ptr->name its equivelent to (*P)name.


#include <iostream>
using namespace std;


struct stEmployee {


    string Name ;
    float Salary;

};

int main()
{
    stEmployee stFirstEmployee;

    stFirstEmployee.Name = "Maher Sawsak";
    stFirstEmployee.Salary = 1890;


    stEmployee* ptr;
    ptr = &stFirstEmployee;


    //There is two way to acsess the value by ptr Look at it :
    cout << (*ptr).Name << endl;
    cout << ptr->Salary << endl;

    return 0;
}
