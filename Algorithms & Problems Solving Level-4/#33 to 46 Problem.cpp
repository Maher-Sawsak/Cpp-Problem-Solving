// #33 to 46 Problem.

#include <iostream>
#include"MaherLib.h"
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

short NumberOfDaysInACurrentMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumberOfDaysFromTheBeginningOfTheYear(short Day, short Month, short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInACurrentMonth(i, Year);
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

bool IsLastMonth(short Month) {

	return(Month == 12);

}

bool IsLastDayInMonth(sDate Date) {

	return(Date.Day == NumberOfDaysInACurrentMonth(Date.Month, Date.Year));

}

bool IsDate1BeforDate2(sDate Date1, sDate Date2) {

	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
}

bool IsDate1EqualToDate2(sDate Date1, sDate Date2) {
	return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
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



bool IsFirstDayInMonth(sDate Date) {

	return Date.Day == 1;
}
bool IsFirstMonthInYear(sDate Date) {

	return Date.Month == 1;

}

sDate DecreaseDateByOneDay(sDate Date) {

	if (IsFirstDayInMonth(Date)) {
		if (IsFirstMonthInYear(Date)) {
			
			Date.Month = 12;
			Date.Day = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
			Date.Year--;
		}
		else {

			Date.Month--;
			Date.Day = NumberOfDaysInACurrentMonth(Date.Month , Date.Year);
			
		}
	}
	else {
		Date.Day--;
	}
	return Date;
}

sDate DecreaseDateByXDay(sDate Date, int XDay) {

	for (int i = 0;i < XDay;i++) {

		Date = DecreaseDateByOneDay(Date);

	}
	return Date;
}

sDate DecreaseDateByOneWeek(sDate Date) {

	Date = DecreaseDateByXDay(Date, 7);
	return Date;
}

sDate DecreaseDateByXWeek(sDate Date, int xWeek) {


	for (int i = 0;i < xWeek;i++) {
		Date = DecreaseDateByOneWeek(Date);

	}
	return Date;

}

sDate DecreaseDateByOneMonth(sDate Date) {


	if (Date.Month == 1) {
		Date.Month = 12;
		Date.Year--;
	}
	else {
		Date.Month--;

	}

	short NumberOfDaysInTheCurrentMonth = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
	if (Date.Day > NumberOfDaysInTheCurrentMonth) {


		Date.Day = NumberOfDaysInTheCurrentMonth;
	}
	return Date;
}

sDate DecreaseDateByXMonth(sDate Date, short xMonth) {

	for (int i = 0; i < xMonth;i++) {
		Date = DecreaseDateByOneMonth(Date);
	}
	return Date;
}

sDate DecreaseDateByOneYear(sDate Date) {

	Date.Year--;

	if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
		Date.Day = 28;
	}

	return Date;

}

sDate DecreaseDateByXYear(sDate Date, short xYear) {

	for (int i = 0;i < xYear;i++) {

		Date = DecreaseDateByOneYear(Date);

	}
	return Date;
}

sDate DecreaseDateByXYearFaster(sDate Date, short xYear) {

	Date.Year -= xYear;

	if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
		Date.Day = 28;
	}
	return Date;

}

sDate DecreaseDateByOneDecade(sDate Date) {
	//Decade is equal to 10 years alaqed in arabic.

	Date = DecreaseDateByXYearFaster(Date, 10);

	return Date;

}

sDate DecreaseDateByXDecade(sDate Date, short xDecade) {

	for (int i = 0;i < xDecade;i++) {

		Date = DecreaseDateByOneDecade(Date);

	}
	return Date;
}

sDate DecreaseDateByXDecadeFaster(sDate Date, short xDecade) {

	Date.Year -= xDecade * 10;


	if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
		Date.Day = 28;
	}

	return Date;

}

sDate DecreaseDateByOneCentury(sDate Date) {
	//One Century is eequal to a hundred years.

	Date = DecreaseDateByXDecadeFaster(Date, 10);

	return Date;
}

sDate DecreaseDateByOneMillennium(sDate Date) {
	//One Millennium Is Equal To A Thousand Years.

	for (int i = 0;i < 10;i++) {

		Date = DecreaseDateByOneCentury(Date);
	}

	return Date;

}

int main()
{

	sDate Date1 = ReadFullsDate();

	Date1 = DecreaseDateByOneDay(Date1);
	cout << endl << "01-Subtracting One Day is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXDay(Date1, 10);
	cout << endl << "02-Subtracting 10 Day is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByOneWeek(Date1);
	cout << endl << "03-Subtracting One Week is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXWeek(Date1, 10);
	cout << endl << "04-Subtracting 10 Week is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 =	DecreaseDateByOneMonth(Date1);
	cout << endl << "05-Subtracting One Month is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXMonth(Date1, 5);
	cout << endl << "06-Subtracting 5 Month is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByOneYear(Date1);
	cout << endl << "07-Subtracting One Year is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXYear(Date1, 10);
	cout << endl << "08-Subtracting 10 Year is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXYearFaster(Date1, 10);
	cout << endl << "09-Subtracting 10 Year (faster) is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByOneDecade(Date1);
	cout << endl << "10-Subtracting One Decade is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXDecade(Date1, 10);
	cout << endl << "11-Subtracting 10 Decade is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByXDecadeFaster(Date1, 10);
	cout << endl << "12-Subtracting 10 Decade (faster) is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByOneCentury(Date1);
	cout << endl << "13-Subtracting One Century  is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = DecreaseDateByOneMillennium(Date1);
	cout << endl << "14-Subtracting One Millennium  is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

}

