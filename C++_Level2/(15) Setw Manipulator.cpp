// SetwManipulator

//Notes:
//Setw() is Not A Function its a Manipulator .
//Setw its in Library #include<iomanip>.

#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
    
   cout<< "---------|--------------------------------|---------|" << endl;
   cout << "  Code   |               Name             |  Mark   |" << endl;
   cout <<"---------|--------------------------------|---------|" << endl;


   cout << setw(9) << "S301" << "|" << setw(32) << "Computer Network" << "|" << setw(9) << "90" << "|" << endl;
   cout << setw(9) << "S101" << "|" << setw(32) << "Artificial Intelligent" << "|" << setw(9) << "90" << "|" << endl;
   cout << setw(9) << "C203" << "|" << setw(32) << "Software Project Management" << "|" << setw(9) << "90" << "|" << endl;


   cout << "-----------------------------------------------------";

    return 0;
}