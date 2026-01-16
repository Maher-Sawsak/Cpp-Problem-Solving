// Problems #41 to #45.cpp : This file contains the 'main' function. Program execution begins and ends there.



////problem #41.
//#include <iostream>
//using namespace std;
//
//float ReadNumberOfHours(string Message) {
//
//	float Hours;
//
//	cout << Message << endl;
//	cin >> Hours;
//
//	return Hours;
//}
//float CheckWeeks(float Hours) {
//
//	return Hours / 168;
//
//}
//
//float CheckDays(float Hours) {
//
//	return Hours / 24;
//}
//
//
//
//int main()
//{
//	float Hours = ReadNumberOfHours("Please Enter the number of hours");
//	cout << CheckWeeks(Hours)<< " Weeks\n";
//	cout << CheckDays(Hours) << " Days\n";
//	return 0;
//}


//
////problem #42.
//#include <iostream>
//using namespace std;
//
//struct stInfo {
//
//	int days, hours, minutes, seconds;
//};
//
//
//stInfo ReadTheInf() {
//
//	stInfo DailyInfo;
//
//	cout << "Please Enter The Days : \n";
//	cin >> DailyInfo.days;
//
//	cout << "Please Enter The hours : \n";
//	cin >> DailyInfo.hours;
//	cout << "Please Enter The minutes : \n";
//	cin >> DailyInfo.minutes;
//	cout << "Please Enter The seconds : \n";
//	cin >> DailyInfo.seconds;
//
//	return DailyInfo;
//
//}
//
//
//float TotalSecondsI(stInfo DailyInfo) {
//
//	int TotalSecondsInDay = 24 * 60 * 60;
//
//	int TotalSecondsInHour = 60 * 60;
//
//	int TotalSecondsInMinutes = 60;
//
//	float TotalSeconds = 0;
//	TotalSeconds = DailyInfo.days * TotalSecondsInDay;
//
//	TotalSeconds += DailyInfo.hours * TotalSecondsInHour;
//
//	TotalSeconds += DailyInfo.minutes * TotalSecondsInMinutes;
//
//	TotalSeconds += DailyInfo.seconds;
//
//
//
//	return TotalSeconds;
//}
//
//
//void PrintTheTotalSeconds(float TotalSeconds) {
//
//	cout << "The Total Seconds Is : " << TotalSeconds;
//
//}
//
//int main() {
//
//	PrintTheTotalSeconds(TotalSecondsI(ReadTheInf()));
//
//
//	return 0;
//}




////problem #43
//#include<iostream>
//using namespace std;
//
//float ReadNumber(string Message) {
//
//	float TotalSeconds;
//
//	cout << Message << endl;
//	cin >> TotalSeconds;
//
//	return TotalSeconds;
//}
//
//struct stClockType {
//	float NumberOfDays = 0;
//	float NumberOfHours = 0;
//	float NumberOfMinutes = 0;
//	float NumberOfSeconds = 0;
//};
//
//stClockType CalculateDayHoursAndMinutesAndSeconds(int TotalSeconds) {
//
//	
//	int  Reminder = 0;
//
//	stClockType stClockInfo;
//
//	 int SecondsPerDay = 24 * 60 * 60;
//
//	 int SecondsPerHour = 60 * 60;
//
//	int SecondsPerMinute = 60;
//
//
//	stClockInfo.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
//
//	Reminder = (TotalSeconds % SecondsPerDay);
//
//	stClockInfo.NumberOfHours = floor(Reminder / SecondsPerHour);
//
//	Reminder = (Reminder % SecondsPerHour);
//
//	stClockInfo.NumberOfMinutes = floor(Reminder / SecondsPerMinute);
//
//	Reminder = (Reminder % SecondsPerMinute);
//
//	stClockInfo.NumberOfSeconds = Reminder;
//
//
//	return stClockInfo;
//
//}
//
//void PrintingTheClock(stClockType info) {
//
//	cout  <<" Day : " << info.NumberOfDays << " Hours " << " : " << info.NumberOfHours << " : "
//	<<"Minutes " << info.NumberOfMinutes << " Seconds " << " : " << info.NumberOfSeconds;
//
//
//}
//
//int main() {
//	int TotalSeconds = ReadNumber("Please Enter The Total Seconds :\n");
//	 PrintingTheClock (CalculateDayHoursAndMinutesAndSeconds(TotalSeconds));
//
//	return 0;
//}



//problem #44
//#include<iostream>
//using namespace std;
//
//enum endays {sunday = 1, monday , thuesday , wednesday , thursday, friday, saturday};
//
//
//int ReadNumerInRange(string Message,int From, int To) {
//	int Number = 0;
//	do {
//	
//		cout << Message << endl;
//		cin >> Number;
//	
//	} while (Number < From || Number > To);
//
//	return Number;
//
//
//}
//
//endays CheckDay() 
//{
//	return (endays)ReadNumerInRange("Please Enter The Number : ", 1 , 7);
//
//	
//}
//
//string PrintTheResult(endays Result) {
//
//	switch (Result) {
//	case endays::sunday:
//		return "Sunday";
//		
//	case endays::monday:
//		return"Monday";
//
//	case endays::thuesday:
//		return "Tuesday";
//	
//	case endays::wednesday:
//		return "Wednesday";
//
//	case endays::thursday:
//		return "Thursday";
//
//	case endays::friday:
//		return "Friday";
//
//	case endays::saturday:
//		return "Saturday";
//
//	default :
//		return "Not a valid day";
//	}
//}
//
//int main() {
//
//
//	cout << PrintTheResult(CheckDay());
//
//
//
//	return 0;
//}


//problem #45

#include <iostream>
#include <string>
using namespace std;

enum enMonths {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};


int ReadNumberInRange(string Message, int From, int To) {
	int Number = 0;
	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;


}

enMonths ReadNumberOfYear()
{
	return (enMonths)ReadNumberInRange("Please Enter The Number Of Month From 1 To 12 : ", 1, 12);


}

string PrintTheResult(enMonths Result) {

	switch (Result) {
	case enMonths::January:
		return "January";

	case enMonths::February:
		return"February";

	case enMonths::March:
		return "March";

	case enMonths::April:
		return "April";

	case enMonths::May:
		return "May";

	case enMonths::June:
		return "June";

	case enMonths::July:
		return "July";

	case enMonths::August:
		return "August";

	case enMonths::September:
		return "September";


	case enMonths::October:
		return "October";

	case enMonths::November:
		return "November";

	case enMonths::December:
		return "December";

	default:
		return "Wrong Month";
	}
}

int main() {


	cout << PrintTheResult(ReadNumberOfYear());



	return 0;
}
