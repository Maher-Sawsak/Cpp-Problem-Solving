#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsPerson.h"
#include "clsUser.h"
#include "clsInputValidate.h"
class clsDeleteUserScreen : protected clsScreen
{
private:
	static void _PrintUser(clsUser User)
	{
		cout << "\nUser Card:";
		cout << "\n___________________";
		cout << "\nFirstName   : " << User.FirstName;
		cout << "\nLastName    : " << User.LastName;
		cout << "\nFull Name   : " << User.FirstName + " " + User.LastName;
		cout << "\nEmail       : " << User.Email;
		cout << "\nPhone       : " << User.Phone;
		cout << "\nUser Name   : " << User.UserName;
		cout << "\nPassword    : " << User.Password;
		cout << "\nPermissions : " << User.Permissions;
		cout << "\n___________________\n";

	}


public:

	static void ShowDeleteClient() {

		_DrawScreenHeader("Delete User Screen");

		string AccountNumber;

		AccountNumber = clsInputValidate::ReadString("Please Enter The User Name To Delete : ");

		while (!clsUser::IsUserExist(AccountNumber)) {

			AccountNumber = clsInputValidate::ReadString("User Name Is Not Exist!! , Please Enter Again : ");

		}


		//GetAddNewClientObject will take the account number and it will return object with mode AddNew cuz ((Save() Need it)) and the Account Number.
		clsUser Client = clsUser::Find(AccountNumber);
		_PrintUser(Client);

		cout << "\nAre you sure you want to delete this user? y/n?  ";
		char Answer = 'n';
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y') {

			if (Client.Delete()) {

				cout << "\nUser Deleted Successfully!!\n";
				_PrintUser(Client);
			}
			else {

				cout << "\nError User Was Not Deleted\n";
			}

		}


	}



};

