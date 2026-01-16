// Sum All Digits In A Number

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int SumDigit(int Number) {

	int Reminder = 0 , sum = 0;

	while(Number > 0){
	Reminder = Number % 10;
	Number = Number / 10;
	sum += Reminder;
}

	return sum;

}

int main()
{

cout << "\nSum of Digit Is :\n" <<	SumDigit(ReadPositiveNumber("Please Enter The Number :\n"));

return 0;

}
