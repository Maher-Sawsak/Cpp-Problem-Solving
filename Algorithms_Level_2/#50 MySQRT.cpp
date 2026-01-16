// MySQRT

#include <iostream>

using namespace std;

float MySQRT(int num)
{
	return pow(num, 0.5);
}

int main()
{
	float n;
	cout << "Enter A Number: ";
	cin >> n;
	cout << "\nMySQRT Result  : " << MySQRT(n);
	cout << "\nC++ sqrt Result: " << sqrt(n) << endl;
}