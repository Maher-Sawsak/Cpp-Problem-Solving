// Lesson #53 _____Continue Statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;

	for (int i = 1;i <= 5;i++) {
	
    int Number;
	cout << "Please Enter The Number :" << endl;
	cin >> Number;

	//that is condition for continue:
	if (Number > 50) {
		cout << "The number is greater than 50 and won't caculated." << endl;
		continue;
	}
	
	sum += Number;
	
	}
	cout << sum;

	return 0;
}
