// MyRound

#include <iostream>

using namespace std;

int MyRound(float num)
{
	int numToInt = int(num);
	if (num >= 0)
	{
		if (num + 0.5 >= numToInt + 1) return numToInt + 1;
		else return numToInt;
	}
	else
	{
		if (num - 0.5 <= numToInt - 1) return numToInt - 1;
		else return numToInt;
	}
}

int main()
{
	float n;
	cout << "Enter A Number: ";
	cin >> n;
	cout << "\nMyRound Result  : " << MyRound(n);
	cout << "\nC++ Round Result: " << round(n) << endl;
}