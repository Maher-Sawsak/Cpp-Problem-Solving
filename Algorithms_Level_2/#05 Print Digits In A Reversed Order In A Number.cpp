//Print Digits In A Reversed Order In A Number

//Doctor's Solution
#include <iostream>  
#include <string>    
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number = 0;


    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}


int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}








//My Solution
/*
#include <iostream>
#include<string>
using namespace std;

string ReadString(string Message) {
    
    string Number;

        cout << Message << endl;
        cin >> Number;

    return Number;

}


void ReversedNumberInOrder(string Number) {

   
    for (int i = Number.length() - 1; i >= 0 ;i--) 
    
        cout << Number[i] << endl;
  
}


int main()
{
    ReversedNumberInOrder(ReadString("Please Enter A Positive Number :\n"));
}
*/





