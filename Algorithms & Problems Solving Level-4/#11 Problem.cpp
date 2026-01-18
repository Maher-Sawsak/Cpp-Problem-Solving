//Year Calendar.

#include <iostream>
#include <string>
#include <cstdio> 
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

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	// 0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {
		"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	return arrDayNames[DayOfWeekOrder];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}


short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,
	short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}

short ReadDay() {

	short Day;
	cout << "please enter a day? ";
	cin >> Day;


	return Day;
}

sDate ConvertNumberToDateAndPrint(short Number , short Year) {

	sDate Date;
	short RemainingDays = Number;
	short Months = 1;
	while (true) {
	

		if (RemainingDays > NumberOfDaysInAMonth(Months, Year)) {
		
			RemainingDays -= NumberOfDaysInAMonth(Months, Year);
			Months++;
		}
		else {
		
			Date.Day = RemainingDays;
			break;
		}
	}
	Date.Month = Months;
	Date.Year = Year;
	return Date;
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

int main()
{
	sDate  Date;
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();
	short Number = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);



	
	cout << "Number of days from beginning of year: " << Number << endl;
	Date = ConvertNumberToDateAndPrint(Number, Year);

	cout << endl << "Date: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	return 0;
}