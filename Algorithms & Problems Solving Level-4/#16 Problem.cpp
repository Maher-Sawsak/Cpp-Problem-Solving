// #15 Problem.


#include <iostream>
using namespace std;

struct sDate {

	short Year;
	short Month;
	short Day;

};

bool isLeapYear(short Year)
{
	// if year is divisible by 4 AND not divisible by 100
	// OR if year is divisible by 400
	// then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}


bool IsLastMonth(short Month) {

	return(Month == 12);

}

bool IsLastDayInMonth(sDate Date) {

	return(Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));

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

sDate IncreaseDateByOneDay(sDate Date) {

	if (IsLastDayInMonth(Date)) {
		if (IsLastMonth(Date.Month)) {
			Date.Day = 1;
			Date.Month = 1;
			Date.Year++;
		}
		else {
			 
				Date.Day = 1;
				Date.Month += 1;

			
		}
	}
	else {
		Date.Day += 1;
	}
return Date;
}

int main()
{
	sDate Date1 = ReadFullsDate();


	Date1 = IncreaseDateByOneDay(Date1);

	cout << Date1.Day<<"/" << Date1.Month << "/" << Date1.Year;
	return 0;
}