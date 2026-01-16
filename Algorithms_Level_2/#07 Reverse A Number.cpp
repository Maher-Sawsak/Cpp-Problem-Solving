// Reverse A Number

#include <iostream>
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

    void ReverseNumber(int Number) {
    
        int Reminder = 0, Number2 = 0;;
        while (Number > 0) {
            Reminder = Number % 10;
            Number = Number / 10;
            Number2 = (Number2 * 10) + Reminder;
        }
    
        cout << Number2;
    }

    int main()
    {

        ReverseNumber(ReadPositiveNumber("Please Enter The Number "));

        return 0;    
}
