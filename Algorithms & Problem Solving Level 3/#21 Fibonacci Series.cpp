// #21 Problem.


#include <iostream>
#include "MaherLib.h"

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

int main()

{
	cout << endl;

	PrintFibonacciUsingLoop(10);
	cout << endl;
	cout << endl;
	return 0;
}