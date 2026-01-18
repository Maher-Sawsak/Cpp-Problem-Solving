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

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}


short NumberOfDaysFromTheBeginingOfTheYear(sDate Date)
{
	short TotalDays = 0;
	for (int i = 1; i <= Date.Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Date.Year);
	}
	TotalDays += Date.Day;
	return TotalDays;
}



void CompareTwoDatesEqualOrBigger(sDate Date1, sDate Date2) {


	short NumberFromFirstOfYear1 = NumberOfDaysFromTheBeginingOfTheYear(Date1);
	short NumberFromFirstOfYear2 = NumberOfDaysFromTheBeginingOfTheYear(Date2);

	if (Date1.Year == Date2.Year) {
		if (NumberFromFirstOfYear1 == NumberFromFirstOfYear2) {
		
			cout << "They Are The Same";
			return;
		}
		else if(NumberFromFirstOfYear1 > NumberFromFirstOfYear2){
		
			cout << "The Date1 Is Bigger Than Date2";
		}
		else {
			cout << "The Date2 Is Bigger Than Date1";
		
		}
	
	}
	else if (Date1.Year > Date2.Year) {
	
		cout << "The Date1 Is Bigger Than Date2";
	}
	else {
	
		cout << "The Date 2 Is Bigger Than Date1";
	}


}
void CompareTwoDatesEqualOrLower(sDate Date1, sDate Date2) {


	short NumberFromFirstOfYear1 = NumberOfDaysFromTheBeginingOfTheYear(Date1);
	short NumberFromFirstOfYear2 = NumberOfDaysFromTheBeginingOfTheYear(Date2);

	if (Date1.Year == Date2.Year) {
		if (NumberFromFirstOfYear1 == NumberFromFirstOfYear2) {

			cout << "They Are The Same";
			return;
		}
		else if (NumberFromFirstOfYear1 < NumberFromFirstOfYear2) {

			cout << "The Date1 Is Lower Than Date2";
		}
		else {
			cout << "The Date2 Is Lower Than Date1";

		}

	}
	else if (Date1.Year < Date2.Year) {

		cout << "The Date1 Is Lower Than Date2";
	}
	else {

		cout << "The Date 2 Is Lower Than Date1";
	}


}
bool IsDate1BeforDate2(sDate Date1, sDate Date2) {

	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
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
	
	if (IsDate1BeforDate2(Date1, Date2)) {
	
		cout << "\nYes, Date1 Is Less Than Date2\n";
	}
	else {
	
		cout << "No, Date1 Is Not Less Than Date2";
	}

	return 0;
}