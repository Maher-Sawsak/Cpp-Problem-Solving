// Number Pattern

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;

	do {
	
		cout << Message << endl;
		cin >> Number;
	
	} while (Number < 0);

	return Number;

}

void PrintingInvertedPattern(int Number) {

	cout << "\n";
	for (int i = 1;i <= Number;i++) {
	
		for (int j = 1;j <= i;j++) {
		
			cout << i;
		
		}
		cout << endl;
	}
}




int main()
{

	PrintingInvertedPattern(ReadPositiveNumber("Please Enter The Number :"));

	return 0;
}
