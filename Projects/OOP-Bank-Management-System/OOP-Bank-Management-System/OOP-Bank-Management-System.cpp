// OOP-Bank-Management-System.


#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include <iomanip>
#include "clsScreen.h"
#include"clsMainScreen.h"
#include "clsLoginScreen.h"


int main()
{
	//clsMainScreen::ShowMainMenue();
	
	//this while solving call stack error when i logout it will now show login screen again.

	while (true) {
		if (!clsLoginScreen::ShowLoginScreen()) {
			return 0;
		}
	}

}
