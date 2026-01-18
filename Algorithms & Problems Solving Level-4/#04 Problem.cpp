// #04 Problem



#include <iostream>
#include"MaherLib.h"

using namespace std;

bool IsLeapYear(short Year) {

	return(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0);
}

//short hand if.
short CalculateDaysInYear(short Number) {

	return IsLeapYear(Number) ? 366 : 365;
}

int CalculateHoursInYear(short Number) {

	return CalculateDaysInYear(Number) * 24;
}

long long CalculateMinutesInYear(short Number) {

	return CalculateHoursInYear(Number) * 60;

}

long long CalculateSecondsInYear(short Number) {

	return CalculateMinutesInYear(Number) * 60;
}

void AllInfoForYear(short Year) {

	cout << "Number of Days In Year [" << Year << "] is " << CalculateDaysInYear(Year) << endl;
	cout << "Number of Hours In Year [" << Year << "] is " << CalculateHoursInYear(Year) << endl;
	cout << "Number of Minutes In Year [" << Year << "] is " << CalculateMinutesInYear(Year) << endl;
	cout << "Number of Seconds In Year [" << Year << "] is " << CalculateSecondsInYear(Year) << endl;

}


int main()
{
	AllInfoForYear(2000);
}