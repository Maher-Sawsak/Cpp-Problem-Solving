#pragma once
#include "clsUtil.h"
#include "clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
class clsWithdrawScreen  : protected clsScreen
{

	static void _PrintClient(clsBankClient Client) {
		cout << "\nClient Recode :\n";
		cout << "------------------------------------------\n";
		cout << "\nName              :  " << Client.GetFullName() << endl;
		cout << "Account Number    :  " << Client.AccountNumber << endl;
		cout << "Phone Number      :  " << Client.Phone << endl;
		cout << "Email             :  " << Client.Email << endl;
		cout << "Pin Code          :  " << Client.PinCode << endl;
		cout << "Account Balance   :  " << Client.AccountBalance << endl;
		cout << "------------------------------------------\n";

	}


	static string _ReadAccountNumber() {

		return clsInputValidate::ReadString("\nPlease enter AccountNumber? ");

	}



public :
	static void ShowWithdrawScreen() {
	
	
		_DrawScreenHeader("Withdraw Screen");
	
		string AccountNumber = clsInputValidate::ReadString("Please enter an account number : ");
		
		while (!clsBankClient::IsClientExist(AccountNumber)) {
		
			AccountNumber = clsInputValidate::ReadString("Invalid, Please enter an exist account number : ");
		
		}
	
		clsBankClient Client = clsBankClient::Find(AccountNumber);
		_PrintClient(Client);
	
		double Amount = clsInputValidate::ReadDblNumber("Please enter the amount : ");
	
		char Answer = 'n';
		cout << "Are you sure to performe this operation ? (y / n)? ";
		cin >> Answer;

		if (Answer == 'y' || 'Y') {

			if (Client.Withdraw(Amount)) {

				cout << "\nThe operation withdraw done successfully !!";
				cout << "\nThe new balance is : " << Client.AccountBalance;

			}
			else {

				cout << "\nCannot withdraw, Insuffecient Balance!\n";
				cout << "Amount to withdraw is : " << Amount << endl;
				cout << "Your balance is  : " << Client.AccountBalance << endl;

			}
		}
		else {
		
			cout << "\nThe operaiton was cancalled";
		}


	
	}





};

