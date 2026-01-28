#pragma once
#include <iostream>
#include <iomanip>
#include "clsUtil.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include "clsCurrency.h"

class clsUpdateCurrencyRateScreen : protected clsScreen
{

	static void _PrintCurrencyRecord(clsCurrency CurrencyData) {

		cout << "\nCurrency Card : ";
		cout << "\n_________________________________________";

		cout << "\nCountry     :  " << CurrencyData.Country();
		cout << "\nCode        :  " << CurrencyData.CurrencyCode();
		cout << "\nName        :  " << CurrencyData.CurrencyName();
		cout << "\nRate(1$) =  :  " << CurrencyData.Rate();

		cout << "\n_________________________________________\n";

	}

	


public :

	static void ShowUpdateRateScreen()  {
		
		_DrawScreenHeader("Update Currency Screen");
		
		string CurrencyCode = "";
		CurrencyCode = clsInputValidate::ReadString("\nPlease Enter Currency Code ? ");

	


		while (!clsCurrency::IsCurrencyExist(CurrencyCode)) {
		
			CurrencyCode = clsInputValidate::ReadString("\nThe Country Code Is Not Exist , Please Enter Again :  ");
		
		}
		clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
		_PrintCurrencyRecord(Currency);


		char Answer = 'n';
		cout << "\nAre you sure you want to update the rate of this currency ? y/n? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y') {

			cout << "\nUpdate Currency Rate : ";
			cout << "\n----------------------";
			Currency.UpdateRate(clsInputValidate::ReadFloatNumber("\nEnter New Rate : "));
		
			cout << "\nCurrency Rate Updated Successfully :-)";
			_PrintCurrencyRecord(Currency);
		}
	
	
	}


};

