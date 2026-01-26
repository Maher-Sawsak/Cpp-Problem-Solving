#pragma once
#include <iostream>
#include <iomanip>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsInputValidate.h"

class clsDeleteClientScreen : protected clsScreen
{
private:
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

public:

	static void ShowDeleteClient() {

		if (!CheckAccessRights(clsUser::enPermissions::pDeleteClient)) {
			return;
		}



		_DrawScreenHeader("Delete Client Screen");

		string AccountNumber;

		AccountNumber = clsInputValidate::ReadString("Please Enter The Account Number To Delete : ");

		while (!clsBankClient::IsClientExist(AccountNumber)) {

			AccountNumber = clsInputValidate::ReadString("Account Number Is Not Exist!! , Please Enter Again : ");

		}


		//GetAddNewClientObject will take the account number and it will return object with mode AddNew cuz ((Save() Need it)) and the Account Number.
		clsBankClient Client = clsBankClient::Find(AccountNumber);
		_PrintClient(Client);

		cout << "\nAre you sure you want to delete this client? y/n?  ";
		char Answer = 'n';
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y') {

			if (Client.Delete()) {

				cout << "\nClient Deleted Successfully!!\n";
				_PrintClient(Client);
			}
			else {

				cout << "\nError Client Was Not Deleted\n";
			}

		}


	}



};

