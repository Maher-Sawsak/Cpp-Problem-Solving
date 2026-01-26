#pragma once

#include <iostream>
#include"Global.h"
#include "clsUser.h"
using namespace std;


class clsScreen
{

public:
	static void _DrawScreenHeader(string Title ,string SubTitle =" ") {
	
		cout << "\n\t\t\t\t-----------------------------------------------------------\n";
		cout << "\n\t\t\t                              " << Title << endl;

		if (SubTitle != " ") {
		
			cout << "\n\t\t\t                            " << SubTitle << endl;
		}
		cout << "\n\t\t\t\t----------------------------------------------------------\n\n";
		 

	
	}


	static bool CheckAccessRights(clsUser::enPermissions Permission) {
	

		//CheckStatusPermission this will return true if the user have permission to enter screen requested.
		if (!CurrentUser.CheckStatusPermission(Permission)) {
			cout << "\t\t\t\t\t______________________________________";
			cout << "\n\n\t\t\t\t\t  Access Denied! Contact your Admin.";
			cout << "\n\t\t\t\t\t______________________________________\n\n";
			return false;
		}
		else {
		
			return true;
		}

	
	
	}
};

