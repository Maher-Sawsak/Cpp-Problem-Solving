//Ternary Operator: Short Hand IF.

#include<iostream>

using namespace std;

int ReadNumber(string Message) {
	int Number;
	cout << Message << endl;
	cin >> Number;
	return Number;
}
int main() {
	int Number = ReadNumber("Please Enter Any Number :");
	string Result = "  ";

	Result = (Number == 0) ? "its Zero" : (Number > 0) ? "its Positive Number " : "its Nigative Number ";
	cout << Result;


}
