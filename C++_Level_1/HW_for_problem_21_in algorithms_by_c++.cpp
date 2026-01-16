//HW_for_problem_21_in algorithms_by_c++ in lesson math functions lesson #27


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14;
    double Area, L;
 
    
    cout <<"Please enter the value for L :";
    cin >> L;

    Area = pow(L, 2) / (4 * pi);

    cout << floor(Area);
    return 0;

}
