#pragma once
#include<iostream>
#include<iomanip>
#include <vector>
#include "clsUser.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
class clsFindUserScreen : protected clsScreen
{
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

	static void ShowFindUserScreen() {
	
	
		string UserName = "";
		cout << "\nPlease Enter The User Name? ";
		cin >> UserName;
	
		while (!clsUser::IsUserExist(UserName)) {
		
			cout << "\nUser Is Not Exist, Please Enter The User Name Again? ";
			cin >> UserName;
		
		}
	
		clsUser User = clsUser::Find(UserName);

		if (!User.IsEmpty()) {
			cout << "\nUser Found :-) ";

		}
		else {
			cout << "\nUser Not Found!";
		}

		_PrintUser(User);
	
	
	}



};

