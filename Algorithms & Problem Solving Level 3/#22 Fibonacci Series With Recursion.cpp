//Problem 22.

#include <iostream>
#include"MaherLib.h"
using namespace std;



void PrintFibonacciByRecursion(int Number, int prev1 , int prev2) {

	int FibNumber = 0;
	if (Number > 1) {
	
	    FibNumber = prev1 + prev2;
		prev2 = prev1;
		prev1 = FibNumber;
		cout << FibNumber<< " ";
		

		PrintFibonacciByRecursion(Number-1 , prev1 , prev2);

	}
		
}
int main()
{

	PrintFibonacciByRecursion(10 ,1 ,0);


	return 0;
}