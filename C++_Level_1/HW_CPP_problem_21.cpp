

#include <iostream>

int main()
{

    using namespace std;
    const float  Pi = 3.14;
    int l;
    float Area;

    cout << "Enter The Value For l" <<endl;
    cin >> l;

    Area = (l * l) / (4 * Pi);
    cout << Area;
    return 0;
}
