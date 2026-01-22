#pragma once

#include <iostream>

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



};

