#pragma once
#include <iostream>
#include "clsBankClient.h"
#include "clsTransactionsScreen.h"
#include "clsUser.h"
class clsTransferScreen :protected clsScreen
{

	static void _PrintClient(clsBankClient Client) {
		cout << "\nClient Recode :\n";
		cout << "------------------------------------------\n";
		cout << "\nName              :  " << Client.GetFullName() << endl;
		cout << "Account Number    :  " << Client.AccountNumber << endl;
		cout << "Account Balance   :  " << Client.AccountBalance << endl;
		cout << "------------------------------------------\n";

	}

	static string _ReadAccountNumber() {
		string AccountNumber;
		cout << "\nPlease Enter The Account Number : ";
		cin >> AccountNumber;

		while (!clsBankClient::IsClientExist(AccountNumber)) {
			cout << "\nAccount Number Is Not Exist, Please Enter Again : ";
			cin >> AccountNumber;

		}
		return AccountNumber;
	}
	static double _ReadAmount(clsBankClient SourceClient) {
		double Amount;
		cout << "\nPlease Enter The Amount To Transfer ? ";
		cin >> Amount;
	
		while (SourceClient.AccountBalance < Amount) {
			cout << "\nAmount Exceeds The Available Balance, eEnter Another Amount ? ";
			cin >> Amount;
		
		}
		return Amount;
	}

public:


	static void ShowTotalTransferScreen() {
	
		_DrawScreenHeader("Transfer Screen");

		clsBankClient Client1From = clsBankClient::Find(_ReadAccountNumber());
		_PrintClient(Client1From);
	
		clsBankClient Client2To = clsBankClient::Find(_ReadAccountNumber());
		_PrintClient(Client2To);

	
		double Amount = _ReadAmount(Client1From);
	   
		char Answer = 'n';
		cout << "Are you sure to perform this transfer operation ? y/n ? ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y') {

			if (Client1From.Transfer(Amount, Client2To)) {
			
				cout << "\nTransfer Done Successfullly ! ";
			}

		}
		else {

			cout << "\nError!! Transfer Was Cancelled ";
				
		}

		_PrintClient(Client1From);
		_PrintClient(Client2To);

	}


};

