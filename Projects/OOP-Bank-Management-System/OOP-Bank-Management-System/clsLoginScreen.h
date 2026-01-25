#pragma once
#include<iostream>
#include "clsUser.h"
#include "clsMainScreen.h"
#include "clsScreen.h"
//here global will contain the current user to check if I will let him login and will be important for storing permissions.
#include "Global.h"
class clsLoginScreen : protected clsScreen
{
	static void _Login() {

		bool LoginFailed = false;
		string UserName, Password;
		
		do {

			if (LoginFailed) {
				cout << "\nInvalid User Name OR Password!!\n";
			
			}

			cout << "\nPlease Enter User Name ? ";
			cin >> UserName;

			cout << "\nPlease Enter Password ? ";
			cin >> Password;

			//find it will return either full object or empty if its not Exist.
			CurrentUser = clsUser::Find(UserName, Password);
			LoginFailed = CurrentUser.IsEmpty();

		} while (LoginFailed);

		clsMainScreen::ShowMainMenue();
	}

public:

	static void ShowLoginScreen() {
	
		_DrawScreenHeader("Login Screen");

		_Login();
	
	}



	
};

