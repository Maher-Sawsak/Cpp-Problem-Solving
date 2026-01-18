// #47 to 53 Problems.


#include <iostream>
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

bool IsLastMonth(short Month) {

	return(Month == 12);

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


short DayOfWeekOrder(short Day, short Month,short Year) {


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

void SwapDates(sDate& Date1, sDate& Date2) {

	sDate TempDate;
	//We can doit directly like tempdate = date1 but for training i dont want right now.


	TempDate.Day = Date1.Day;
	TempDate.Month = Date1.Month;
	TempDate.Year = Date1.Year;

	Date1.Day = Date2.Day;
	Date1.Month = Date2.Month;
	Date1.Year = Date2.Year;

	Date2.Day = TempDate.Day;
	Date2.Month = TempDate.Month;
	Date2.Year = TempDate.Year;

}

int CalculateTheDifference(sDate Date1, sDate Date2, bool includeEndDay = false) {

	short counter = 0;

	while (IsDate1BeforDate2(Date1, Date2)) {

		Date1 = IncreaseDateByOneDay(Date1);
		counter++;

	}
	return includeEndDay ? ++counter  : counter;
}



bool IsEndOfWeek(sDate Date) {

	return DayOfWeekOrder(Date) == 6;

}

bool IsWeekEnd(sDate Date) {

	short IndexDay = DayOfWeekOrder(Date);
	return (IndexDay == 5 || IndexDay == 6);

}

bool IsBusinessDay(sDate Date) {

	return!IsWeekEnd(Date);
}

short DayUntillTheEndOfWeek(sDate Date) {

	return (6 - DayOfWeekOrder(Date));

}

//My Solution The Time Complexity Is BigO(1) Its better than docotr's solution.
//short DayUntillTheEndOfMonth(sDate Date) {
//
//	return NumberOfDaysFromTheBeginningOfTheYear(NumberOfDaysInACurrentMonth(Date.Month, Date.Year), Date.Month, Date.Year) -
//		NumberOfDaysFromTheBeginningOfTheYear(Date.Day, Date.Month, Date.Year);
//
//}


short DayUntillTheEndOfMonth(sDate Date) {

	sDate EndOfMonthDate;

	EndOfMonthDate.Day = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
	EndOfMonthDate.Month = Date.Month;
	EndOfMonthDate.Year = Date.Year;

	return CalculateTheDifference(Date, EndOfMonthDate , true);

}

short DayUntillTheEndOfYear(sDate Date) {

	short NumberOfDayFromBiginning = NumberOfDaysFromTheBeginningOfTheYear(Date.Day, Date.Month, Date.Year);

    short DaysInYear = isLeapYear(Date.Year) ? 366 : 365 ;
	return ++DaysInYear - NumberOfDayFromBiginning;

}


int main()
{
	sDate Date = ReadFullsDate();


	cout << "Today Is : " << ConvertDayOfWeekOrderToDayName(DayOfWeekOrder(Date)) << " , "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	cout << "\nIs it End of Week ?\n";
	IsEndOfWeek(Date) ? cout << "Yes, Its End Of The Week\n" : cout << "No, Its Not End Of The Week.\n";

	cout << "\nIs it Weekend ? \n";
	IsWeekEnd(Date) ? cout << "Yes it is weekend\n" : cout << "No, It is Not weekend\n";

	cout << "\nIs it Business Day? \n";
	IsBusinessDay(Date) ? cout << "Yes, it is Business Day\n" : cout << "No, Its Not Business Day\n";
	


	cout <<"\nDay until end of week : " << DayUntillTheEndOfWeek(Date) << " Day(s). \n" << endl;

	cout<<"Day until end of month : " << DayUntillTheEndOfMonth(Date) <<" Day(s). \n" << endl;

	cout <<"Day until end of year : " << DayUntillTheEndOfYear(Date) << " Day(s).\n";
}
