// Print All Perfect Numbers From 1 To N

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
void PrintPerfectFrom1ToNumber(int Number) {


	for (int i = 1;i <= Number;i++) {
		if (CheckPerfect(i)) {

			cout << i << endl;

		}
		
	}

}



int main()
{
	PrintPerfectFrom1ToNumber(ReadPositiveNumber("Please Enter a Number :\n"));
}
