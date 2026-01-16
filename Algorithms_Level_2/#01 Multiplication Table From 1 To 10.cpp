// Problem #1algorithmsLevel2.cpp

#include <iostream>
using namespace std;

void PrintingMultiHeader() {

	cout << "\t\t\t\t\tMultiplication Table From 1 to 10\t\t" << endl;


	cout << "\t";
	for (int i = 1; i <= 10; i++) {

		cout << "\t" << i;

	}
	cout << endl;
	for (int j = 0; j <= 119;j++) {

		cout << "-";

	}

}

void MultiTable() {
	PrintingMultiHeader();

	for (int i = 1; i <= 10;i++) {
	
	
		cout << i << "\t|\t";

		for (int j = 1;j <= 10;j++) {
		
			cout << i * j <<"\t";
		
		}
		cout << endl;
	}

}


int main()
{
	MultiTable();
}


