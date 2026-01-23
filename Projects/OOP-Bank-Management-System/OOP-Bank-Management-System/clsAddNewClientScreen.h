#pragma once
#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsPerson.h"
class clsAddNewClientScreen :  protected clsScreen
{

private:
	static void _ReadClientInfo(clsBankClient& Client) {

		Client.FirstName = clsInputValidate::ReadString("\nPlease Enter The First Name      : ");
		Client.LastName = clsInputValidate::ReadString("\nPlease Enter The Last Name        : ");
		Client.Phone = clsInputValidate::ReadString("\nPlease Enter The Phone Number     : ");
		Client.Email = clsInputValidate::ReadString("\nPlease Enter The Email            : ");
		Client.PinCode = clsInputValidate::ReadString("\nPlease Enter The Pin Code         : ");
		Client.AccountBalance = clsInputValidate::ReadFloatNumber("\nPlease Enter The Account Balance  : ");

	}

	static void _PrintClient(clsBankClient Client) {

		cout << "\nName              :  " << Client.GetFullName() << endl;
		cout << "Account Number    :  " << Client.AccountNumber << endl;
		cout << "Phone Number      :  " << Client.Phone << endl;
		cout << "Email             :  " << Client.Email << endl;
		cout << "Pin Code          :  " << Client.PinCode << endl;
		cout << "Account Balance   :  " << Client.AccountBalance << endl;
	}

public:

	static void AddNewClient() {

	    //this from screen class will print the title in the top.
		_DrawScreenHeader("Add New Client Screen");

		string AccountNumber;

		AccountNumber = clsInputValidate::ReadString("Please Enter The Account Number For New Client : ");

		while (clsBankClient::IsClientExist(AccountNumber)) {

			AccountNumber = clsInputValidate::ReadString("Account Number Is Already Exist, Choose another one : ");

		}

		//GetAddNewClientObject will take the account number and it will return object with mode AddNew cuz ((Save() Need it)) and the Account Number.
		clsBankClient Client = clsBankClient::GetAddNewClientObject(AccountNumber);


		_ReadClientInfo(Client);


		clsBankClient::enSaveResult SaveResult;

		//Save will Return enum if failed to save data in the file or done successfully. 
		SaveResult = Client.Save();


		switch (SaveResult)
		{
		case clsBankClient::enSaveResult::svSuccessed:
			cout << "\nUpdate Done Successfully , Thanks :-) \n";
			_PrintClient(Client);
			break;
		case  clsBankClient::enSaveResult::svFailEmptyObject:
			cout << "\nUpdate Failed,The Client Data Is Empty\n";
			break;

		case clsBankClient::svFaildAccountNumberExists:
			cout << "\nThe Account Number Is Used! :-( \n";
		}

	}



};

