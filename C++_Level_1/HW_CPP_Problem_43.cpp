//This solution for the probleam 43 in algorithms course level 1 .

#include <iostream>

int main()
{
	using namespace std;
	int TotalSeconds , Number_of_days , Number_of_hours , Number_of_minutes  , Number_of_seconds , Reminder;

	const int second_per_day = 24 * 60 * 60;

	const int second_per_hour = 60 * 60;

	const int second_per_minutes = 60;


	cout << "Please Enter The Total Seconds:\n";
	cin >> TotalSeconds;


	Number_of_days = floor(TotalSeconds / second_per_day);
	Reminder = (TotalSeconds % second_per_day);
	
	Number_of_hours = floor(Reminder / second_per_hour);
	Reminder = (Reminder % second_per_hour);

	Number_of_minutes = floor(Reminder / second_per_minutes);
	Reminder = (Reminder % second_per_minutes);
	
	Number_of_seconds = Reminder;


	cout << Number_of_days << ":" << Number_of_hours << ":" << Number_of_minutes << ":" << Number_of_seconds;

	return 0;
}
