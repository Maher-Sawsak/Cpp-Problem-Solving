//Check A Digit_s Frequency In A Number


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
    
    int counter = 0 , Reminder = 0;

    
    while (Number > 0) {
    
        Reminder = Number % 10;
        Number = Number / 10;
       
        if (Reminder == Digit)
         
            counter ++;
   
    }
    return counter;

}

void PrintFrequencyNumber(int Number , int Digit) {

    cout << "\n Digit " << Digit << " Frequency is : "
       << CountDigitFrequency(Number, Digit) <<" Time(s) \n";



}




int main()
{
    int Number = ReadPositiveNumber("Please Enter The Number: \n");
    short Digit = ReadPositiveNumber("Please Enter The Digit :\n");



    PrintFrequencyNumber(Number, Digit);



	return 0;
}
