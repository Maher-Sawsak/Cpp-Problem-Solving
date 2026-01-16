// MyFloor

#include <iostream>

using namespace std;

int MyFloor(float num)
{
	int numToInt = int(num);
	if (num >= 0) return numToInt;
	else
	{
		// Make sure MyFloor(-10) = -10, and MyFloor(-10.1) = -11
		if (num == numToInt) return numToInt;
		else return numToInt - 1;
	}
}

int main()
{
	float n;
	cout << "Enter A Number: ";
	cin >> n;
	cout << "\nMyFloor Result  : " << MyFloor(n);
	cout << "\nC++ Floor Result: " << floor(n) << endl;
}