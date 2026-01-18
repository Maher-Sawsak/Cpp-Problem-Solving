#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;

struct sDate {

	short Year;
	short Month;
	short Day;
};




bool IsDate1EqualToDate2(sDate Date1, sDate Date2) {
	return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
}

short ReadDay() {

	short Day;
	cout << "please enter a day? ";
	cin >> Day;


	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year? ";
	cin >> Year;
	return Year;
}

sDate ReadFullsDate() {
	sDate Date;
	cout << endl;
	Date.Day = ReadDay();
	cout << endl;
	Date.Month = ReadMonth();
	cout << endl;
	Date.Year = ReadYear();
	cout << endl;
	cout << endl;

	return Date;
}

int main()
{
	sDate Date1 = ReadFullsDate();

	sDate Date2 = ReadFullsDate();

	if (IsDate1EqualToDate2(Date1, Date2)) {
	
		cout << "\nYes,They are equal\n";
	}
	else {
		cout << "\nNo, They are not equal\n";
	
	}

	return 0;
}