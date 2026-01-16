// Check All Digits Frequency In A Number


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

int CountDigitFrequency(int Number, int Digit) {

    int counter = 0, Reminder = 0;


    while (Number > 0) {

        Reminder = Number % 10;
        Number = Number / 10;

        if (Reminder == Digit)

            counter++;

    }
    return counter;

}

void PrintAllDigitsFrequency(int Number)
 {

    for (int i = 0;i < 10;i++) {

        if (CountDigitFrequency(Number, i) == 0)
            continue;
        cout <<"Digit " << i << " Frequency is " << CountDigitFrequency(Number, i)<<" Time(s) " << endl;
    
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please Enter The Number :\n");
    PrintAllDigitsFrequency(Number);
}
