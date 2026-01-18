// #61 Problem.
//Overlap Count.

#include <iostream>

using namespace std;

enum enDateBeforAfterEqual { Befor = -1, Equal = 0, After = 1 };

struct sDate {
	short Year;
	short Month;
	short Day;
};

struct sPeriod {
	sDate StartDate;
	sDate EndDate;
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

enDateBeforAfterEqual CompareDates(sDate Date1, sDate Date2) {
	//Two Solution For it one is more readable its the second one.

	/*

	return(IsDate1BeforDate2(Date1, Date2) ? enDateBeforAfterEqual::Befor :
	IsDate1AfterDate2(Date1, Date2) ? enDateBeforAfterEqual::After : enDateBeforAfterEqual::Equal);
	*/

	if (IsDate1BeforDate2(Date1, Date2))
		return enDateBeforAfterEqual::Befor;

	if (IsDate1EqualToDate2(Date1, Date2))
		return enDateBeforAfterEqual::Equal;


	return enDateBeforAfterEqual::After;

}

bool IsLastMonth(short Month) {

	return(Month == 12);

}

bool IsLastDayInMonth(sDate Date) {

	return(Date.Day == NumberOfDaysInACurrentMonth(Date.Month, Date.Year));

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

	int Days = 0;
	while (IsDate1BeforDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return includeEndDay ? ++Days : Days;

}

sPeriod ReadFullPeriod() {
	sPeriod Period;
	Period.StartDate = ReadFullsDate();
	Period.EndDate = ReadFullsDate();

	return Period;
}

bool IsOverlapPeriods(sPeriod Period1, sPeriod Period2)
{
	if (
		CompareDates(Period2.EndDate, Period1.StartDate) == enDateBeforAfterEqual::Befor
		||
		CompareDates(Period2.StartDate, Period1.EndDate) == enDateBeforAfterEqual::After
		)
		return false;
	else
		return true;
}

short CalculatePeriodLengthInDays(sPeriod Period, bool IncludeLastDay = false) {

	return (CalculateTheDifference(Period.StartDate, Period.EndDate, IncludeLastDay));
}



bool IsDateWithinPeriod(sPeriod Period, sDate Date) {

	return !((CompareDates(Date, Period.StartDate) == enDateBeforAfterEqual::Befor)
		||
		(CompareDates(Date, Period.EndDate) == enDateBeforAfterEqual::After));

}


int CountOverlapDays(sPeriod Period1 , sPeriod Period2) {


	short Period1Length = CalculatePeriodLengthInDays(Period1, true);
	short Period2Length = CalculatePeriodLengthInDays(Period2, true);
	short PeriodOverLapCounter = 0;
	if (!IsOverlapPeriods(Period1, Period2)) {
		return 0;
	}
	else {

		if (Period1Length < Period2Length) {
			while (IsDate1BeforDate2 (Period1.StartDate , Period1.EndDate)) {

				if (IsDateWithinPeriod(Period2, Period1.StartDate)) {

					PeriodOverLapCounter++;
				}

				Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);

			}

			
		}
		else {


			while (IsDate1BeforDate2(Period2.StartDate, Period2.EndDate)) {


				if (IsDateWithinPeriod(Period1, Period2.StartDate)) {

					PeriodOverLapCounter++;
				}
				Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
			}

	   }
	
		return PeriodOverLapCounter;
	}



}

int main()
{
	sPeriod Period1;
	sPeriod Period2;
	cout << "Enter Period 1 : \n";
	Period1 = ReadFullPeriod();
	cout << "Enter Period 2 : \n";
	Period2 = ReadFullPeriod();


	cout << endl << endl;

	cout << "The Period Count Is : " << CountOverlapDays(Period1, Period2) << endl;

}