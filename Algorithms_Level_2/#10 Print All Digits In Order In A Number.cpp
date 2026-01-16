// Print All Digits In Order In A Number


#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	
	} while (Number < 0);

	return Number;
}

int  ReversedAllNumber(int Number) {
	int Reminder = 0 , Number2 = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		Number2 = (Number2 * 10) + Reminder;
		
	}
	return Number2;

}

void PrintDigit(int Number) {

	int Reminder = 0;
	while (Number > 0 ) {
	
		Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;

	}


}

int main()
{
	PrintDigit(ReversedAllNumber(ReadPositiveNumber("Please Enter a Positive The Number :\n")));

}