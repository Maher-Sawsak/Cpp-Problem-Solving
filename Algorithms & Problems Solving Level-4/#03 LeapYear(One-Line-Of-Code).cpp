//Check Leap Year By One Line.

#include <iostream>
#include"MaherLib.h"
using namespace std;
int ReadNumber(string Message) {

	int Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}
bool IsLeapYear(int Year) {

	return(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0 );

}
int main()
{
	short LeapYear = ReadNumber("Please enter to check the leap year :\n");

	if (IsLeapYear(LeapYear)) {
		cout << "\nYes [" << LeapYear << "] Is a Leap Year.\n";
	}
	else {
		cout << "\nNo [" << LeapYear << "] It's Not a Leap Year.\n";

	}

}
