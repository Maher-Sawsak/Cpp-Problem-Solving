#pragma once
#include<iostream>
#include "clsUser.h"
#include "clsMainScreen.h"
#include "clsScreen.h"
//here global will contain the current user to check if I will let him login and will be important for storing permissions.
#include "Global.h"
class clsLoginScreen : protected clsScreen
{
	static bool _Login() {
		short LoginFailedCounter = 0;
		bool LoginFailed = false;
        string UserName, Password;

       do {

				if (LoginFailed) {
					LoginFailedCounter++;
					cout << "\nInvalid User Name OR Password!!\n";
					cout << "You have " << 3 - LoginFailedCounter << " Trial(s) To login\n";
					
				}

				
				if (LoginFailedCounter == 3) {
					cout << "\n\nYou are locked after 3 failed trials\n";
					return false;
				}

				cout << "\nPlease Enter User Name ? ";
				cin >> UserName;

				cout << "\nPlease Enter Password ? ";
				cin >> Password;

				//find it will return either full object or empty if its not Exist.
				CurrentUser = clsUser::Find(UserName, Password);
				LoginFailed = CurrentUser.IsEmpty();

			} while (LoginFailed);
	        CurrentUser.RegisterLogIn();
			clsMainScreen::ShowMainMenue();
		}


public:

	static bool ShowLoginScreen() {
	
		_DrawScreenHeader("Login Screen");
	
			return _Login();
		
	}



	
};

