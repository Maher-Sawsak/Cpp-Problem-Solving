//HW_for_problem_20_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	const double pi = 3.14;
	double Area, A;

	cout << "PLease enter the value of A :";
	cin >> A;

	Area = pi * pow(A / 2, 2);

	cout << ceil(Area);

	return 0;

}

