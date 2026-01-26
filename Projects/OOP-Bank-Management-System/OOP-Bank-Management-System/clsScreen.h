#pragma once

#include <iostream>
#include"Global.h"
#include "clsUser.h"
#include "clsDate.h"
using namespace std;


class clsScreen
{


protected:

	static void _DrawScreenHeader(string Title ,string SubTitle =" ") {
	
		cout << "\n\t\t\t\t-----------------------------------------------------------\n";
		cout << "\n\t\t\t                              " << Title << endl;

		if (SubTitle != " ") {
		
			cout << "\n\t\t\t                            " << SubTitle << endl;
		}
		cout << "\n\t\t\t\t----------------------------------------------------------\n\n";
		 
		cout << " \t\t\t\tUser : " <<CurrentUser.UserName <<"\n";
		// I Used Anonymous Object.
		//when I write the name of class and after it () like {{{ clsDate() }}} it menas, hi compiler now go and create an object without name temp object.
		//after the line finish the object the temp object will be deleted.
		cout << "\n \t\t\t\tDate : " << clsDate::DateToString(clsDate()) << "\n\n\n";

	
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

