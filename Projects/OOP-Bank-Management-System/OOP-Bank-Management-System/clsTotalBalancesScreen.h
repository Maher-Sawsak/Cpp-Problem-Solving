#pragma once
#include <iostream>
#include "clsBankClient.h"
#include "clsString.h"
#include "clsScreen.h"
#include <iomanip>
class clsTotalBalancesScreen : protected clsScreen
{


static void _PrintClientRecordBalanceLine(clsBankClient Client) {
		cout<< setw(10) <<left<< " " << "| " << setw(15) << left << Client.AccountNumber;
		cout << setw(10) << left << " " << "| " << setw(40) << left << Client.GetFullName();
		cout << setw(10) << left << " " << "| " << setw(12) << left << Client.AccountBalance;
	}
public :

static void ShowTotalBalances() {
		

		vector<clsBankClient> ClientsList = clsBankClient::GetClientsList();
		_DrawScreenHeader("Balances List Screen", "      (" + to_string(ClientsList.size()) + ") Client(s)");

		double TotalBalance = clsBankClient::GetTotalBalances();
		cout << setw(10) << left << " " << "---------------------------------------------------------------------------------------------------\n";
		cout << setw(10) << left << " " << "| " << left << setw(15) << "Account Number";
		cout << setw(10) << left << " " << "| " << left << setw(40) << "Client Name";
		cout << setw(10) << left << " " << "| " << left << setw(12) << "Balance" << endl;
		cout << setw(10) << left << " " << "---------------------------------------------------------------------------------------------------\n";

		if (ClientsList.size() == 0) {

			cout << setw(10) << left << " " << "\t\t\t\tNo Clients Available In the System!";

		}
		else {

			for (clsBankClient& C : ClientsList) {
				cout << endl;
				_PrintClientRecordBalanceLine(C);

			}

		}

		cout << endl << setw(10) << left << " " << "---------------------------------------------------------------------------------------------------\n";
		cout << endl << "  \t\t\t\t\t" << "Total Balance : " << TotalBalance << endl;
		cout << "\t\t\t\t" << clsString::NumberToText(TotalBalance) << endl << endl << endl;
	}


};

