//This Homework Solution for the problem 39 in algorithms course .


#include <iostream>

int main()
{

	using namespace std;
	int CashPaid, TotalBill , PaidBack;

	cout << "Please Enter The Total Bill :\n";
		cin >> TotalBill;


    cout << "Please Enter The Cash Paid :\n";
    cin >> CashPaid;
	
	
	PaidBack = CashPaid - TotalBill;


	cout << PaidBack;

	return 0;
}
