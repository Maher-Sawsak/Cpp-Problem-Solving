
//the problem 47 in algorithms course by C++

#include <iostream>
int main() {

	using namespace std;

	int Loan_Amount , Monthly_Payment , Settle_The_Loan;

	cout << "Enter The Loan Amount : ";
	cin >> Loan_Amount;

	cout << "Enter The Monthly Payment: ";
	cin >> Monthly_Payment;

	Settle_The_Loan = Loan_Amount / Monthly_Payment;

	cout <<Settle_The_Loan << " Months";

	return 0;

}