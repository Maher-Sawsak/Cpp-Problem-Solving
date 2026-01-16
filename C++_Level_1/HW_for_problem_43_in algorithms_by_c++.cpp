//HW_for_problem_43_in algorithms_by_c++ in lesson math functions lesson #27

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int total_seconds, reminder, number_of_days, number_of_hours, number_of_minutes, number_of_seconds;
	const int SecondsInDay = 86400;
	const int SecondsInHour = 3600;
	const int SecondsInMinutes = 60;
	
	cout << "Please enter the seconds :";
	cin >> total_seconds;
	
	number_of_days = total_seconds / SecondsInDay;
	
	reminder = total_seconds % SecondsInDay;

	number_of_hours = reminder / SecondsInHour;
	reminder = reminder % SecondsInHour;

	number_of_minutes = reminder / SecondsInMinutes;
	reminder = reminder % SecondsInMinutes;

	number_of_seconds = reminder;


	cout << round(number_of_days) << ":" <<round( number_of_hours )<< ":"  << round(number_of_minutes) << ":" << round(number_of_seconds);
		 
}