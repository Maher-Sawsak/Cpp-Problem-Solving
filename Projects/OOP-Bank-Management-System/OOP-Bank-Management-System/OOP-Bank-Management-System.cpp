// OOP-Bank-Management-System.


#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include <iomanip>

void PrintClientRecordBalanceLine(clsBankClient Client) {
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(40) << left << Client.GetFullName();
	cout << "| " << setw(12) << left << Client.AccountBalance;
}


void ShowTotalBalances() {


	vector<clsBankClient> ClientsList = clsBankClient::GetClientsList();
	double TotalBalance = clsBankClient::GetTotalBalances();
	cout << "\n---------------------------------------------------------------------------------------------------\n";
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n---------------------------------------------------------------------------------------------------\n";

	if (ClientsList.size() == 0) {
	
		cout << "\t\t\t\tNo Clients Available In the System!";

	}
	else {
	
		for (clsBankClient& C : ClientsList) {
			cout << endl;
			PrintClientRecordBalanceLine(C);
			
		}
	
	}

	cout << "\n\n----------------------------------------------------------------------------------------------------\n";
	cout << endl <<"\t\t\t\t" << "Total Balance : " << TotalBalance << endl;
	cout << "\t\t\t\t" << clsString::NumberToText(TotalBalance) << endl << endl << endl;
}


int main()
{
	ShowTotalBalances();
	
}
