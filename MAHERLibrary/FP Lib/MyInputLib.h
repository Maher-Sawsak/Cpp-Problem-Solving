#pragma once

#include <iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;
namespace MyInputLib {


	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


	int ReadNumber(string message) {
		int Number = 0;

		cout << message << "\n";
		cin >> Number;

		return Number;
	}

	int ReadPositiveNumber(string Message)
	{
		int Number = 0;
		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);

		return Number;
	}

	int RandomNumberInRange(int From, int To) {


		int RandomNumber = rand() % (To - From + 1) + From;

		return RandomNumber;
	}

	void Swap(int& A, int& B)
	{
		int Temp = 0;

		Temp = A;
		A = B;
		B = Temp;

	}





	void PrintFibonacciUsingLoop(int Number) {
		int prev2 = 0, prev1 = 1, FabNumber = 0;
		cout << "1\t";
		for (int i = 2;i <= Number;i++) {

			FabNumber = prev2 + prev1;
			cout << FabNumber << "\t";

			prev2 = prev1;
			prev1 = FabNumber;

		}



	}


	void PrintFibonacciByRecursion(int Number, int prev1, int prev2) {

		int FibNumber = 0;
		if (Number > 1) {

			FibNumber = prev1 + prev2;
			prev2 = prev1;
			prev1 = FibNumber;
			cout << FibNumber << " ";


			PrintFibonacciByRecursion(Number - 1, prev1, prev2);

		}

	}























































}


