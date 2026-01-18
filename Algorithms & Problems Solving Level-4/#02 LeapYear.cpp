// #02 Problem
//Check Leap Year.

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


	if (Year % 400 == 0) {
		return true;
	}
	else if (Year % 100 == 0) {
	
		return false;
	}
	else if (Year % 4 == 0) {
	
		return true;
	}
	else {
	
		return false;
	}


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