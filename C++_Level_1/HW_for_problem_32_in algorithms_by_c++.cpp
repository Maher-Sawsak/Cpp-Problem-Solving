//HW_for_problem_32_in algorithms_by_c++ in lesson math functions lesson #27

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Number_base , The_power;
	
	cout << "Please enter the base :";
	cin >> Number_base;

	cout << "Please enter the power :";
	cin >> The_power;
	
	
	cout << round (pow(Number_base , The_power));

	return 0;
}
