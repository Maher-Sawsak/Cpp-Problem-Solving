// #57 Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include"MaherLib.h"
using namespace std;

enum enDateBeforAfterEqual { Befor = -1, Equal = 0, After = 1 };
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

bool IsDate1BeforDate2(sDate Date1, sDate Date2) {

	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
}

bool IsDate1EqualToDate2(sDate Date1, sDate Date2) {
	return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2) {

	return (!IsDate1BeforDate2(Date1, Date2) && !IsDate1EqualToDate2(Date1, Date2));

}

enDateBeforAfterEqual CompareDates(sDate Date1 , sDate Date2) {
	//Two Solution For it one is more readable its the second one.

	/*
	
	return(IsDate1BeforDate2(Date1, Date2) ? enDateBeforAfterEqual::Befor : 
	IsDate1AfterDate2(Date1, Date2) ? enDateBeforAfterEqual::After : enDateBeforAfterEqual::Equal);
	*/

	if (IsDate1BeforDate2(Date1, Date2));
	return enDateBeforAfterEqual::Befor;

	if (IsDate1EqualToDate2(Date1, Date2));
	return enDateBeforAfterEqual::Equal;


	return enDateBeforAfterEqual::After;	

}

int main()
{
	sDate Date1 = ReadFullsDate();
	sDate Date2 = ReadFullsDate();

	if (CompareDates(Date1, Date2) == enDateBeforAfterEqual::After) {

		cout<< enDateBeforAfterEqual::After << " : After";
	}
	else if(CompareDates(Date1, Date2) == enDateBeforAfterEqual::Befor){
		cout << enDateBeforAfterEqual::Befor << " : Befor";


	}
	else {
		cout << enDateBeforAfterEqual::Equal << " : Equal";

	}
}