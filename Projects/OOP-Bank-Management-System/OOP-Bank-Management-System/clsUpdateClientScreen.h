#pragma once

#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsInputValidate.h"
#include "clsScreen.h"

static class clsUpdateClientScreen : protected clsScreen
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



static void _ReadClientInfo(clsBankClient& Client) {

	Client.FirstName = clsInputValidate::ReadString("\nPlease Enter The First Name      : ");
	Client.LastName = clsInputValidate::ReadString("\nPlease Enter The Last Name        : ");
	Client.Phone = clsInputValidate::ReadString("\nPlease Enter The Phone Number     : ");
	Client.Email = clsInputValidate::ReadString("\nPlease Enter The Email            : ");
	Client.PinCode = clsInputValidate::ReadString("\nPlease Enter The Pin Code         : ");
	Client.AccountBalance = clsInputValidate::ReadFloatNumber("\nPlease Enter The Account Balance  : ");
	
}


public:

	static void ShowUpdateClient() {
		if (!CheckAccessRights(clsUser::enPermissions::pUpdateClients)) {
			return;
		}


		_DrawScreenHeader("Update Client Screen");

		string AccountNumber;

		AccountNumber = clsInputValidate::ReadString("Please Enter The Account Number : ");

		while (!clsBankClient::IsClientExist(AccountNumber)) {

			AccountNumber = clsInputValidate::ReadString("Invalid Account Number!! Please Enter Again : ");

		}
		clsBankClient Client = clsBankClient::Find(AccountNumber);
		_PrintClient(Client);


		char Anser = 'n';

		cout << "Are you sure you want to update this client data ? y/n? ";
		cin >> Anser;

		if (Anser == 'Y' || Anser == 'y') {
			cout << "\n---------------------------------\n";
			cout << "          Update Client            ";
			cout << "\n---------------------------------\n";
			_ReadClientInfo(Client);


			clsBankClient::enSaveResult SaveResult;

			//Save will Return enum if failed to save data in the file or done successfully. 
			SaveResult = Client.Save();


			switch (SaveResult)
			{
			case clsBankClient::enSaveResult::svSuccessed:
				cout << "\nUpdate Done Successfully , Thanks :-) \n";
				break;
			case  clsBankClient::enSaveResult::svFailEmptyObject:
				cout << "\nUpdate Failed, Maybe The Client Data Is Empty\n";
				break;
			}

		}



	}

};

