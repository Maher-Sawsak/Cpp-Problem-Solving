// Print All Prime Numbers From 1 To N

#include <iostream>
using namespace std;

enum enPrimeOrNotPrime {Prime = 1,NotPrime = 2};

int ReadNumber(string message) {
    int Number = 0;
    do {
        cout << message <<"\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
enPrimeOrNotPrime CheckPrime(int Number) {


	int M = round(Number / 2);
	for (int counter = 2;counter <= M;counter++) {

		if (Number % counter == 0)

			return enPrimeOrNotPrime::NotPrime;


	}
	return enPrimeOrNotPrime::Prime;
}

void PrintNumberType(int Number) {


	cout << "Prime Number From 1 To " << Number << " are :\n";

	for (int i = 1;i <= Number;i++) {
		if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
		{
			cout << i << "Is Prime\n";
		}
		

	}
}

int main() {

	PrintNumberType(ReadNumber("Please Enter a Positive Number :"));

	return 0;
}