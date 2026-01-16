

//HW_for_problem_22_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	const double pi = 3.14;
	double a, b , Area;


	cout << "Please enter the value a :";
	cin >> a;
	cout << "Please enter the value of B :";
	cin >> b;

	Area = ((pi * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));

   cout << floor(Area);

   return 0;
}
