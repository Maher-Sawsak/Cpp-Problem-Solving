// #20 to #32 problems.

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





sDate IncreaseDateByOneDay(sDate Date ) {

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

sDate IncreaseDateByXDay(sDate Date, int XDay) {

	for (int i = 0;i < XDay;i++) {
	
		Date = IncreaseDateByOneDay(Date);
	
	}
	return Date;
}

sDate IncreaseDateByOneWeek(sDate Date) {

	Date = IncreaseDateByXDay(Date, 7);
	return Date;
}

sDate IncreaseDateByXWeek(sDate Date , int xWeek) {


	for (int i = 0;i < xWeek;i++) {
		Date = IncreaseDateByOneWeek(Date);
	
	}
	return Date;

}

sDate IncreaseDateByOneMonth(sDate Date) {


	if (Date.Month == 12) {
		Date.Month = 1;
		Date.Year++;
	}
	else {
		Date.Month++;

	}

	short NumberOfDaysInTheCurrentMonth = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
	if (Date.Day > NumberOfDaysInTheCurrentMonth) {


		Date.Day = NumberOfDaysInTheCurrentMonth;
	}
	return Date;
}

sDate IncreaseDateByXMonth(sDate Date , short xMonth) {
	
	for (int i = 0; i < xMonth;i++) {
		Date = IncreaseDateByOneMonth(Date);
	}
	return Date;
}

sDate IncreaseDateByOneYear(sDate Date) {
   
	Date.Year++;
	
	if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
		Date.Day = 28;
	}
	
	return Date;

}

sDate IncreaseDateByXYear(sDate Date, short xYear) {

	for (int i = 0;i < xYear;i++) {
	
		Date = IncreaseDateByOneYear(Date);
	
	}
	return Date;
}

sDate IncreaseDateByXYearFaster(sDate Date, short xYear) {

	Date.Year += xYear;

	if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
		Date.Day = 28;
	}
	return Date;

}

sDate IncreaseDateByOneDecade(sDate Date) {
    //Decade is equal to 10 years alaqed in arabic.

	Date = IncreaseDateByXYear(Date,10);

	return Date;

}

sDate IncreaseDateByXDecade(sDate Date, short xDecade) {

	for (int i = 0;i < xDecade;i++) {
	
		Date = IncreaseDateByOneDecade(Date);
	
	}
	return Date;
}

sDate IncreaseDateByXDecadeFaster(sDate Date, short xDecade) {

	Date.Year += xDecade * 10;


		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}

	return Date;

}

sDate IncreaseDateByOneCentury(sDate Date) {
	//One Century is eequal to a hundred years.

	Date = IncreaseDateByXDecadeFaster(Date, 10);

	return Date;
}

sDate IncreaseDateByOneMillennium(sDate Date) {
	//One Millennium Is Equal To A Thousand Years.

	for (int i = 0;i < 10;i++) {
	
		Date = IncreaseDateByOneCentury(Date);
	}

	return Date;
}


int main()
{

	sDate Date1 = ReadFullsDate();


	Date1 = IncreaseDateByOneDay(Date1);
	cout << endl <<"01-Adding One Day is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1  = IncreaseDateByXDay(Date1 , 10);
	cout << endl << "02-Adding 10 Day is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneWeek(Date1);
	cout << endl << "03-Adding One Week is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;



	Date1 = IncreaseDateByXWeek(Date1, 10);
	cout << endl << "04-Adding 10 Week is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByOneMonth(Date1);
	cout << endl << "05-Adding One Month is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByXMonth(Date1, 5);
	cout << endl << "06-Adding 5 Month is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneYear(Date1);
	cout << endl << "07-Adding One Year is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXYear(Date1 ,10);
	cout << endl << "08-Adding 10 Year is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByXYearFaster(Date1, 10);
	cout << endl << "09-Adding 10 Year (faster) is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByOneDecade(Date1);
	cout << endl << "10-Adding One Decade is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByXDecade(Date1 ,10);
	cout << endl << "11-Adding 10 Decade is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;


	Date1 = IncreaseDateByXDecadeFaster(Date1 ,10);
	cout << endl << "12-Adding 10 Decade (faster) is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;
    
	Date1 = IncreaseDateByOneCentury(Date1);
	cout << endl << "13-Adding One Century  is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

	Date1 = IncreaseDateByOneMillennium(Date1);
	cout << endl << "14-Adding One Millennium  is : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

}

