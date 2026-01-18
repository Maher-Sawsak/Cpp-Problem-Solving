#include <iostream>
#include <string>
#include"MaherLib.h"
using namespace std;

struct sDate {
	short Year;
	short Month;
	short Day;
};

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
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	cout << endl;
	return Date;
}

bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInACurrentMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short DayOfWeekOrder(short Day, short Month, short Year) {
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	//Gregorian:
	//0:sun , 1:Mon,2:Tue..etc.
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(sDate Date) {
	return(DayOfWeekOrder(Date.Day, Date.Month, Date.Year));
}

string ConvertDayOfWeekOrderToDayName(short GregorianIndex) {
	string Days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return Days[GregorianIndex];
}

bool IsDate1BeforDate2(sDate Date1, sDate Date2) {
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
}

bool IsLastDayInMonth(sDate Date) {
	return(Date.Day == NumberOfDaysInACurrentMonth(Date.Month, Date.Year));
}

bool IsLastMonth(short Month) {
	return(Month == 12);
}

sDate IncreaseDateByOneDay(sDate Date) {
	if (IsLastDayInMonth(Date)){
		if (IsLastMonth(Date.Month)){
			Date.Day = 1;
			Date.Month = 1;
			Date.Year++;
		}
		else{
			Date.Day = 1;
			Date.Month += 1;
		}
	}
	else{
		Date.Day += 1;
	}
	return Date;
}

sDate IncreaseDateByXDay(sDate Date, int XDay) {

	for (int i = 0;i < XDay;i++) {

		Date = IncreaseDateByOneDay(Date);

	}
	return Date;
}

bool IsWeekEnd(sDate Date) {
	short IndexDay = DayOfWeekOrder(Date);
	return (IndexDay == 5 || IndexDay == 6);
}

bool IsBusinessDay(sDate Date) {
	return !IsWeekEnd(Date);
}

short CalculateVacationDays(sDate Date, sDate Date2) {
	short DaysCounter = 0;
	while (IsDate1BeforDate2(Date, Date2)) {
		if (IsBusinessDay(Date)) {
			DaysCounter++;
		}
		Date = IncreaseDateByOneDay(Date);
	}
	return DaysCounter;
}

short ReadVacationDays() {

	short VacationDays = 0;
	cout << "\nPlease enter vacation days? ";
	cin >> VacationDays;

	return VacationDays;
}

sDate CalculateVacationReturnDate(sDate Date , short VacationDays) {

	short WeekendCounter = 0;
	// Calculates return date excluding weekends.
	// Note: The first while loop is to ensure we start counting from a workday (Input Sanitization),
	// although the logic works without it, it's better for separation of concerns.
	
	while (IsWeekEnd(Date)) {
	
	    Date = IncreaseDateByOneDay(Date);
	}
	for (int i = 0;i < VacationDays + WeekendCounter;i++) {
	
	
		if (IsWeekEnd(Date)) {
		
			WeekendCounter++;
		}
		Date  = IncreaseDateByOneDay(Date);
	
	}
	
	while (IsWeekEnd(Date)) {
	
		Date = IncreaseDateByOneDay(Date);
	}
	return Date;
}



int main()
{
	cout << "Start Vacation : \n";
	sDate StartDate = ReadFullsDate();

	short VacationDays = ReadVacationDays();
	
	sDate DateAfterEndingVacation = CalculateVacationReturnDate(StartDate, VacationDays);

	cout << "\nReturn Date : " << ConvertDayOfWeekOrderToDayName(DayOfWeekOrder(DateAfterEndingVacation))
		<< " , " << DateAfterEndingVacation.Day << "/" << DateAfterEndingVacation.Month << "/" << DateAfterEndingVacation.Year << endl;
	return 0;
}
