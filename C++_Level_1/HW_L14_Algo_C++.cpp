

#include <iostream>
using namespace std;
//By refrence that is meam will effect on the orginal varible eill be connact by adrees
void Swap(int &Num1 , int &Num2)
{

    int temp;
    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

    cout <<"After swap inside the swap function " <<"Num1 = " << Num1 << "," <<" Num2 = " << Num2 << endl;

}
int main()
{
    int Num1, Num2;

    cout << "Enter the first number :";
    cin >> Num1;

    cout << "Enter the second number :";
    cin >> Num2;

    cout  <<"Befor swap " << "Num1 = " << Num1 << "," << " Num2 = " << Num2 << endl;

    Swap(Num1, Num2);


    cout <<"After Swap inside main " << "Num1 = " << Num1 << "," << " Num2 = " << Num2 << endl;

    return 0;

}
