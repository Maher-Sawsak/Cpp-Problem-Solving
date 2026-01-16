// DeclarationVsDefinitionFunction


#include <iostream>
using namespace std;


int Add2Number(int , int);

int main()
{

	cout << Add2Number(12,12);
}
int Add2Number(int a, int b) {

	int Number = a + b;

	return Number;
}
