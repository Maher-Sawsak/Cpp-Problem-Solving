// #07 Problem.

//Reading a date and printing the name of day in the week.
//Gregorian Calendar.

#include <iostream>
using namespace std;

short DayOfWeekOrder(int Year , int Month , int Day) {

	short a = (14 - Month) / 12;

	short y = Year - a;

	short m = Month + (12 * a) - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;


}

string DayShortName(short OrderOfDay) {

	string ArrDyasOfWeek[7] = { "Sunday" , "Monday" , "Tuesday","Wednesday",
						        "Thursday" ,"Friday","Saturday" };

	return ArrDyasOfWeek[OrderOfDay];

}

int main()
{
	short Year = 0;
	short Month = 0;
	short Day = 0;

	short OrderOfDay = DayOfWeekOrder(Year, Month, Day);
	cout << "Please Enter The Year  ? \n";
	cin >> Year;

	cout << "Please Enter The Month  ? \n";
	cin >> Month;

	cout << "Please Enter The Day  ? \n";
	cin >> Day;


	cout << "Date :   " << Day << "/" << Month << "/" << Year << endl;
	cout << "Day Order :   " << OrderOfDay << endl;
	cout << "Day Name :   " << DayShortName(OrderOfDay) << endl;


	return 0;
}