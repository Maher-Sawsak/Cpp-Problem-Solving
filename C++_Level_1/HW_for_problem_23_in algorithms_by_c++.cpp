//HW_for_problem_23_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double pi = 3.14;
    double A, B, C , Area , P , T;

    cout << "Please Enter The Value Of A :";
    cin >> A;

    cout << "Please Enter The Value Of B :";
    cin >> B;

    cout << "Please Enter The Value Of C :";
    cin >> C;
     
    P = (A + B + C) / 2;

    T = A * B * C;
    Area = pi * pow(T, 2) /  pow(4 * sqrt(P *(P - A)*(P - B)*(P -C)),2);

    cout <<  round (Area);
}
