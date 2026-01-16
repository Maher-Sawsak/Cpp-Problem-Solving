//HW_for_problem_42_in algorithms_by_c++ in lesson math functions lesson #27

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int days, hours, minutes, seconds, total_seconds;

	cout << "please enter the days :";
	cin >> days;

	cout << "please enter the hours :";
	cin >> hours;

	cout << "please enter the minutes :";
	cin >> minutes;

	cout << "please enter the seconds :";
	cin >> seconds;

	total_seconds = days * 24 * 60 * 60;
	total_seconds = total_seconds + (hours * 60 * 60);
	total_seconds = total_seconds + (minutes * 60);
	total_seconds = total_seconds + seconds;


	cout << round(total_seconds) << " seconds";

	return 0;
}
