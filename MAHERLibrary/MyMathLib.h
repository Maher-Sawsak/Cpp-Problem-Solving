#pragma once

#include <iostream>
#include<string>

using namespace std;


namespace MyMathLib {

	using namespace std;

	enum enPrimeOrNotPrime { Prime = 1, NotPrime = 0 };


	enPrimeOrNotPrime CheckPrime(int Number) {


		int M = round(Number / 2);
		for (int counter = 2;counter <= M;counter++) {

			if (Number % counter == 0)

				return enPrimeOrNotPrime::NotPrime;


		}
		return enPrimeOrNotPrime::Prime;
	}

	float MySQRT(int num)
	{
		return pow(num, 0.5);
	}

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


	void PrintPrime_NotPrime(int Number) {


		cout << "Prime Number From 1 To " << Number << " are :\n";

		for (int i = 1;i <= Number;i++) {
			if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
			{
				cout << i << "Is Prime\n";
			}



		}
	}

	bool CheckPerfect(int Number) {

		int sum = 0;
		for (int i = 1;i < Number;i++) {

			if (Number % i == 0) {
				sum += i;
			}
		}

		return sum == Number;
	}

	void PrintingPerfect_NotPerfect(int Number) {

		if (CheckPerfect(Number))
			cout << Number << " Is Perfect \n";
		else
			cout << Number << " Is Not Perfect\n";
	}

	void PrintPerfectFrom1ToNumber(int Number) {


		for (int i = 1;i <= Number;i++) {
			if (CheckPerfect(i)) {

				cout << i << endl;

			}

		}

	}


	void PrintDigitsReversed(int Number)
	{
		int Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			cout << Remainder << endl;
		}
	}

	int SumDigits(int Number) {

		int Reminder = 0, sum = 0;

		while (Number > 0) {
			Reminder = Number % 10;
			Number = Number / 10;
			sum += Reminder;
		}

		return sum;

	}

	int ReversedNumber(int Number) {

		int Reminder = 0, Number2 = 0;;
		while (Number > 0) {
			Reminder = Number % 10;
			Number = Number / 10;
			Number2 = (Number2 * 10) + Reminder;
		}

		return Number2;
	}

	int CountDigitFrequency(int Number, int Digit) {

		int counter = 0, Reminder = 0;


		while (Number > 0) {

			Reminder = Number % 10;
			Number = Number / 10;

			if (Reminder == Digit)

				counter++;

		}
		return counter;

	}

	bool CheckPalindromeNumber(int Number) {

		return Number == ReversedNumber(Number);

	}

	void PrintPalindrome_NotPalindrom(int Number) {


		if (CheckPalindromeNumber(Number))

			cout << "\nYes,it is a Palindrome number\n";
		else
			cout << "\nNo,it is NOT a Palindrome number\n";

	}

	void PrintInvertedNumberTriangle(int Number) {

		for (int i = Number;i >= 1;i--) {

			for (int j = 1;j <= i;j++) {

				cout << i;


			}
			cout << endl;
		}
	}

	void PrintAscendingNumberTriangle(int Number) {

		cout << "\n";
		for (int i = 1;i <= Number;i++) {

			for (int j = 1;j <= i;j++) {

				cout << i;

			}
			cout << endl;
		}
	}

	void PrintInvertedLetterTriangle(int Number)
	{
		cout << "\n";

		for (int i = 65 + Number - 1; i >= 65; i--)
		{

			for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
			{
				cout << char(i);
			}

			cout << "\n";
		}
	}

	void PrintAscendingLetterTriangle(int Number)
	{
		cout << "\n";

		for (int i = 65; i <= 65 + Number - 1; i++)
		{

			for (int j = 1; j <= i - 65 + 1; j++)
			{
				cout << char(i);
			}

			cout << "\n";
		}
	}

	void PrintAll3LetterAAA_TO_ZZZ() {

		string word = " ";

		for (int i = 65;i <= 90;i++) {


			for (int k = 65; k <= 90;k++) {


				for (int j = 65;j <= 90;j++) {

					word = word + char(i);
					word = word + char(k);
					word = word + char(j);

					cout << word << endl;

					word = " ";


				}


			}


		}


	}

	bool BruteForcePassword(string TargetPassword) {
		string Attempt = "";
		int Counter = 0;

		// A=65, Z=90
		for (int i = 65; i <= 90; i++) {
			for (int j = 65; j <= 90; j++) {
				for (int k = 65; k <= 90; k++) {

					Counter++;

					Attempt = "";
					Attempt += char(i);
					Attempt += char(j);
					Attempt += char(k);

					if (Attempt == TargetPassword) {
						cout << "\nPassword Found: " << Attempt << endl;
						cout << "Total Trials: " << Counter << endl;
						return true;
					}

				}
			}
		}

		return false;
	}




	bool IsLeapYear(int Year) {

		return(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0);
	}


	//short hand if.
	short CalculateDaysInYear(short Number) {

		return IsLeapYear(Number) ? 366 : 365;
	}

	int CalculateHoursInYear(short Number) {

		return CalculateDaysInYear(Number) * 24;
	}

	long long CalculateMinutesInYear(short Number) {

		return CalculateHoursInYear(Number) * 60;

	}

	long long CalculateSecondsInYear(short Number) {

		return CalculateMinutesInYear(Number) * 60;
	}












}