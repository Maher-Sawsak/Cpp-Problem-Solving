// #18 Problem.cpp 
#pragma warning(disable : 4996)

#include"MaherLib.h"
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

short NumberOfDaysFromTheBeginningOfTheYear(short Day, short Month, short Year)
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

	return(Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));

}

bool IsDate1BeforDate2(sDate Date1, sDate Date2) {

	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
}

bool IsDate1EqualToDate2(sDate Date1, sDate Date2) {
	return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
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

int CalculateTheDifference(sDate Date1, sDate Date2, bool includeEndDay = false) {

	short counter = 0;

	while (IsDate1BeforDate2(Date1, Date2)) {

		Date1 = IncreaseDateByOneDay(Date1);
		counter++;

	}
	return includeEndDay ? ++counter : counter;
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


sDate GetSystemDate() {

	sDate RightNowDate;

	time_t t = time(0);
	tm* now = localtime(&t);


	//cuz year start from 1900 so we add 1900 to the result.
	RightNowDate.Year =  now->tm_year + 1900;
	//Mont Start From Zero So we add one to it
	RightNowDate.Month = now->tm_mon + 1;

	RightNowDate.Day = now->tm_mday;

	return RightNowDate;

}



int main()
{
	sDate Date = ReadFullsDate();
	sDate RightNowDate = GetSystemDate();

	cout<<"\nYour Age is : " << CalculateTheDifference(Date, RightNowDate) <<" Day(s) " << endl;
}
