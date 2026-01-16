//HW_for_problem_18_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double pi = 3.14;
    double r , circle_area;

    cout << "Please enter the value for r :";
    cin >> r;

    circle_area = pi * pow(r, 2);

    cout << ceil(circle_area);
}