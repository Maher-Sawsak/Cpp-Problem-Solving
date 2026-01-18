// #05 Problem
//Optimized Solution.

#include <iostream>
#include"MaherLib.h"
bool IsLeapYear(int Year) {

	return(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0);
}

//short hand if.
short CalculateDaysInMonth(short Month, short Year) {

	if (Month < 1 || Month > 12) {
		return 0;
	}

	short NumberOfDaysArr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDaysArr[Month - 1];

	
}

int CalculateHoursInMonth(short Month, short Year ) {

	return CalculateDaysInMonth(Month , Year) * 24;
}

long long CalculateMinutesInMonth(short Month, short Year ) {

	return CalculateHoursInMonth(Month, Year) * 60;

}

long long CalculateSecondsInMonth(short Month, short Year ) {

	return CalculateMinutesInMonth(Month , Year) * 60;
}

int main()
{
	short Year;
	cout << "Please Enter The Year :  ";
	cin >> Year;

	short Month;
	cout << "Please Enter The Month :  ";
	cin >> Month;


	cout << CalculateDaysInMonth(Month, Year) << endl;
	cout << CalculateHoursInMonth(Month, Year) << endl;
	cout << CalculateMinutesInMonth(Month, Year) << endl;
	cout << CalculateSecondsInMonth(Month, Year) << endl;



}
