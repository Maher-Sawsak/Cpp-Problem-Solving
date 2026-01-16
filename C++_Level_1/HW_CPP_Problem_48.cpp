// This problem in algorithms course 48 by C++

#include <iostream>

int main()
{
	using namespace std;

	int Loan_Amount, Settle_Loan, Monthly_Installment_Amount;

	cout << "Enter The Loan Amount: ";
	cin >> Loan_Amount;

	cout << "Enter The Settle Loan: ";
	cin >> Settle_Loan;

	Monthly_Installment_Amount = Loan_Amount / Settle_Loan;

	cout << Monthly_Installment_Amount; 

}
