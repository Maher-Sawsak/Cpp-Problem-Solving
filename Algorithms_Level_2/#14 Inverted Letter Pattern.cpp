// Problem #14AlgL2.cpp : This file contains the 'main' function. Program execution begins and ends there.


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

//it's Math you need to solve the equation to understand hoe it works.
void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";  

    for (int i = 65 + Number - 1; i >= 65; i--)
    {
        
        for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
        {
            cout << char(i);  
        }

        cout << "\n"; 
    }
}

int main()
{

    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}