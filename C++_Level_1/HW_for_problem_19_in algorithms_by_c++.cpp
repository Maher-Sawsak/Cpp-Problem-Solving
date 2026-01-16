
//HW_for_problem_19_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double pi = 3.14;
	double D, Area;

	cout << "Please enter  the value of D:";
	cin >> D;

	Area = (pi * pow(D, 2)) / 4;

	cout << ceil(Area);

}