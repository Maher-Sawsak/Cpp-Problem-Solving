// Check if a number is a perfect number
//Maher Sawsak

#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0; 
	do
	{
		cout << Message << endl;
		cin >> Number;          
	} while (Number <= 0);      

	return Number;             
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

void PrintingResult(int Number) {

	if (CheckPerfect(Number)) 
		cout << Number << " Is Perfect \n";
	else 
		cout << Number << " Is Not Perfect\n";
}

int main()
{

	PrintingResult(ReadPositiveNumber("Please Enter The Number : \n"));

	return 0;
}
