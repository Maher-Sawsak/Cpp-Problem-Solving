#pragma once
#include "clsUtil.h"
#include "clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
class clsDepositScreen : protected clsScreen
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
   

public:

	static void ShowDepositScreen() {

		_DrawScreenHeader("DepositScreen");
 
		string AccountNumber = _ReadAccountNumber();

		while (!clsBankClient::IsClientExist(AccountNumber)) {
		
			AccountNumber = clsInputValidate::ReadString("\nAccount Number Is Not Exist, Please Enter Exist Account ? ");
		    
		}
		//here this find will store the client mode cuz it's using inside a method will store the mode in the current object to use it later.
		clsBankClient Client = clsBankClient::Find(AccountNumber);
		_PrintClient(Client);

		double Amount = 0;

		Amount = clsInputValidate::ReadDblNumber("\nPlease Enter The Amount To Deposit " , "Invalid! Please Enter Valid Amount ? ");

		char Answer = 'n';
		cout << "\nAre you sure you want to perform this transaction? (y / n) ? ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y') {
		
			Client.Deposit(Amount);

			cout << "Amount Deposited Successfully .";

			cout << "\nNew Balance Is : " << Client.AccountBalance;
		}
		else {
		
			cout << "\nThe Operation Was Cancelled!!\n";
		}



	}












};

