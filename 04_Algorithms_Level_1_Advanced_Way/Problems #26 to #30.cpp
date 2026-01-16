// Problems #26 to #30.cpp : This file contains the 'main' function. Program execution begins and ends there.

////problem #26.
//#include <iostream>
//using namespace std;
//
//int ReadOneNumber() {
//	
//	int Number;
//	
//	cout << "Please Enter A Number : \n";
//	cin >> Number;
//
//	return Number;
//}
//
//void PrintTheNumbersFromOneToNumber(int Number) {
//	for (int i = 1; i <= Number; i++) {
//		cout << i << endl;
//	}
//
//}
//
//int main()
//{
//
//	PrintTheNumbersFromOneToNumber(ReadOneNumber());
//
//	return 0;
//}


////problem #27.
//#include <iostream>
//using namespace std;
//
//int ReadOneNumber() {
//	
//	int Number;
//	
//	cout << "Please Enter Number : \n";
//	cin >> Number;
//
//	return Number;
//}
//
//void PrintRangeFromNto1_UsingDoWhileLoop(int Number) {
//	int	counter = Number + 1;
//	cout << "\nBy using Do While Loop :\n";
//		do {
//
//			counter--;
//			cout << counter << endl;
//	} while (counter > 1);
//
//}
//
//void PrintRangeFromNto1_UsingWhileLoop(int Number) {
//	
//	cout << "\nBy using While Loop :\n";
//
//	int	counter = Number;
//	while (counter >= 1) {
//	
//		cout << counter << endl;
//		counter--;
//	}
//
//}
//
//void PrintRangeFromNto1_UsingForLoop(int Number) {
//	cout << "\nBy using For Loop :\n";
//
//	for (int i = Number; i >= 1; i--) {
//		cout << i << endl;
//	}
//
//}
//
//int main()
//{
//	int N = ReadOneNumber();
//
//	PrintRangeFromNto1_UsingForLoop(N);
//	PrintRangeFromNto1_UsingDoWhileLoop(N);
//	PrintRangeFromNto1_UsingWhileLoop(N);
//	return 0;
//}



////problem #28.
////the best here is for loop.
//#include<iostream>
//using namespace std;
//
//enum enOddEvenNumber {odd = 1 , Even = 2};
//int ReadOneNumber() {
//
//	int Number;
//
//	cout << "Please Enter The Number:\n";
//	cin >> Number;
//
//	return Number;
//}
//
//enOddEvenNumber CheckNumberOddOrEven(int Number)
//{
//	if (Number % 2 != 0)
//		return enOddEvenNumber::odd;
//
//	else
//		return enOddEvenNumber::Even;
//
//	
//}
//
//int SumOddNumber_UsingDoWhileLoop(int Number) {
//
//
//
//	int sum = 0;
//	int counter = 0;
//
//	cout << "\nSum Odd Number Using Do While Statment \n";
//
//	do {
//		counter++;
//		if (CheckNumberOddOrEven(counter) == enOddEvenNumber::odd) {
//			sum += counter;
//		}
//
//	} while (counter < Number);
//
//	return sum;
//}
//
//int SumOddNumber_UsingWhileLoop(int Number) {
//	
//	int sum = 0;
//	int counter = 0; 
//
//	cout << "\nSum Odd Number Using While Statment \n";
//	
//	while (counter < Number) {
//		
//		counter++;
//		if (CheckNumberOddOrEven(counter) == enOddEvenNumber::odd)
//		{
//			sum += counter;
//		}
//	}
//
//	return sum;
//}
//
//int SumOddNumber_UsingForLoop(int Number) 
//{
//	cout << "\nSum Odd Number Using For Loop Statment \n";
//
//
//	int sum = 0;
//	for (int i = 1;i <= Number;i++) {
//	
//		if (CheckNumberOddOrEven(i) == enOddEvenNumber::odd) {
//		
//			sum += i;
//		}
//	}
//
//	return sum;
//}
//
//void PrintTheSum(int Result) {
//
//	cout << "\nThe Sum Of Odd Numbers Is :" << Result << endl;
//}
//
//
//
//int main() {
//	int N = ReadOneNumber();
//
//	PrintTheSum(SumOddNumber_UsingForLoop(N));
//
//	PrintTheSum(SumOddNumber_UsingWhileLoop(N));
//
//	PrintTheSum(SumOddNumber_UsingDoWhileLoop(N));
//
//	return 0;
//}





////problem #29.
////the best here is for loop.
//#include<iostream>
//using namespace std;
//
//enum enOddEvenNumber { odd = 1, Even = 2 };
//int ReadOneNumber() {
//
//	int Number;
//
//	cout << "Please Enter The Number:\n";
//	cin >> Number;
//
//	return Number;
//}
//
//enOddEvenNumber CheckNumberOddOrEven(int Number)
//{
//	if (Number % 2 != 0)
//		return enOddEvenNumber::odd;
//
//	else
//		return enOddEvenNumber::Even;
//
//
//}
//
//int SumEvenNumber_UsingDoWhileLoop(int Number) {
//
//
//
//	int sum = 0;
//	int counter = 0;
//
//	cout << "\nSum Even Number Using Do While Statement \n";
//
//	do {
//		counter++;
//		if (CheckNumberOddOrEven(counter) == enOddEvenNumber::Even) {
//			sum += counter;
//		}
//
//	} while (counter < Number);
//
//	return sum;
//}
//
//int SumEvenNumber_UsingWhileLoop(int Number) {
//
//	int sum = 0;
//	int counter = 0;
//
//	cout << "\nSum Even Number Using While Statement \n";
//
//	while (counter < Number) {
//
//		counter++;
//		if (CheckNumberOddOrEven(counter) == enOddEvenNumber::Even)
//		{
//			sum += counter;
//		}
//	}
//
//	return sum;
//}
//
//int SumEvenNumber_UsingForLoop(int Number)
//{
//	cout << "\nSum Even Number Using For Loop Statement \n";
//
//
//	int sum = 0;
//	for (int i = 1;i <= Number;i++) {
//
//		if (CheckNumberOddOrEven(i) == enOddEvenNumber::Even) {
//
//			sum += i;
//		}
//	}
//
//	return sum;
//}
//
//void PrintTheSum(int Result) {
//
//	cout << "\nThe Sum Of Odd Numbers Is :" << Result << endl;
//}
//
//
//
//int main() {
//	int N = ReadOneNumber();
//
//	PrintTheSum(SumEvenNumber_UsingForLoop(N));
//				   
//	PrintTheSum(SumEvenNumber_UsingWhileLoop(N));
//				   
//	PrintTheSum(SumEvenNumber_UsingDoWhileLoop(N));
//
//	return 0;
//}





//problem 30;

#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	
	} while (Number < 0);


	return Number;
}

int FactorialOfNumber(int Number) {
	
	int sum = 1;

	for (int i = Number; i >= 1;i--)
	{
		sum *= i;

	}

	return sum;
}


int main() {

	cout << FactorialOfNumber(ReadPositiveNumber("Please Enter Positive Number :\n"));
	return 0;
}