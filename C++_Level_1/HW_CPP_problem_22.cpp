//This Solution For Homework In C++ level 1 for lesson 22


#include <iostream>

int main()
{
     
    using namespace std;

    int a, b ;
    float Area;
    const float Pi = 3.14;

    cout << "Please Enter The Number For a :\n";
    cin >> a;


    cout << "Please Enter The Number For a :\n";
    cin >> b;


    Area = (Pi * (b * b / 4)) * (2 * a - b) / (2 * a + b);

    cout << Area;

    return 0;

}
