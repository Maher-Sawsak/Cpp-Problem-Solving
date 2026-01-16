// HW_for_problem_16_in algorithms_by_c++ in lesson math functions lesson #27.cpp 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  a ,d;
	double Rectangle_Area;


	cout << "Please enter the value of a :";
	cin >> a;

	cout << "Please enter the value of d :";
	cin >> d;
	
	
	Rectangle_Area = a * sqrt(pow(d ,2) - pow(a ,2));

	cout << Rectangle_Area;

	return 0;

}
