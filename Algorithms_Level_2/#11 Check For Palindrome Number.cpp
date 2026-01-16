// Check For Palindrome Number

#include <iostream>
using namespace std;

enum enPalindrome { Palindrome = 1,NotPalindrome = 2};

int ReadPositiveNumber(string Message) {
	int Number;
	
	do {
	
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;

}

int ReversedAllNumber(int Number) {

	int Reminder = 0;int Number2 = 0;

	while (Number > 0) {
	
		Reminder = Number % 10;
		Number = Number / 10;

		Number2 = (Number2 * 10) + Reminder;
	}
	return Number2;
}

bool CheckPalindromeNumber(int Number) {

	return Number == ReversedAllNumber(Number);
		
}

void PrintingPalindrome(bool Palindrome) {


	if (Palindrome)

		cout << "\nYes,it is a Palindrome number\n";
	else
		cout << "\nNo,it is NOT a Palindrome number\n";

}

int main()
{
	PrintingPalindrome(CheckPalindromeNumber(ReadPositiveNumber("Please Enter The Number :")));

	return 0;
}
