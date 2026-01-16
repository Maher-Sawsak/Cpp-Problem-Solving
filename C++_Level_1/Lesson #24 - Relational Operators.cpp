// Lesson #24 - Relational Operators.cpp 
//here false denoted by 0 and true denoted by 1
#include <iostream>
using namespace std;
int main()
{
	int A , B;

	cout << "Please enter the first number A ?";
	cin >> A;

	cout << "Please enter the second number B ?";
	cin >> B;


	cout << A << " = " << B  <<" is " << (A == B) << endl;
	cout << A << " != " << B <<" is " << (A != B) << endl;
	cout << A << " > " << B <<" is " << (A > B) << endl;
	cout << A << " < " << B <<" is " << (A < B) << endl;
	cout << A << " >= " << B <<" is " << (A >= B) << endl;
	cout << A << " <= " << B <<" is " << (A <= B) << endl;


	return 0;
}
