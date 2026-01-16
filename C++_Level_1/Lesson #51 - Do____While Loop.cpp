// Lesson #51 - Do____While Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadIntegerNumberInRangeByWhile(int From,int To) {
	int Number;
	cout << "Please Enter The Number between :" << From << " & " << To;;
	cin >> Number;

	while (Number < From || Number > To) {
		cout << "Please Enter The Number between :" << From << " & " << To;;
		cin >> Number;
	}
	return Number;



}

int ReadIntegerNumberInRangeByDoWhileLoop(int From,int To) {
	int Number;
	do {
		cout << "Please Enter The Number Between : " << From << " & " << To << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	
	return Number;
}

int main()
{

	//cout << "The Number You Entered Is By while Loop  :" << ReadIntegerNumberInRangeByWhile(18,45);

	cout << "The Number You Entered Is By Do While Loop:" << ReadIntegerNumberInRangeByDoWhileLoop(18, 45);

	return 0;
}
  
