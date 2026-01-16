// MyCeil

#include <iostream>

using namespace std;

int MyCeil(float num)
{
	int numToInt = int(num);
	if (num < 0) return numToInt;
	else
	{
		// Make sure MyCeil(10) = 10, and MyCeil(10.1) = 11
		if (num == numToInt) return numToInt;
		else return numToInt + 1;
	}
}

int main()
{
	float n;
	cout << "Enter A Number: ";
	cin >> n;
	cout << "\nMyCeil Result  : " << MyCeil(n);
	cout << "\nC++ Ceil Result: " << ceil(n) << endl;
}