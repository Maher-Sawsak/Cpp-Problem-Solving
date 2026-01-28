#pragma once
#include <iostream>
#include <iomanip>
#include "clsUtil.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include "clsCurrency.h"

class clsFindCurrencyScreen : protected clsScreen
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

	static short _ReadFindOption() {
	
		int Option = clsInputValidate::ReadIntNumberBetween(1, 2, "Invalid Number! Please Enter Number [1 OR 2]", "Find By : [1] Code or [2] Country  ?  ");
		return Option;
	}


public: 


	static void ShowFindCurrencyScreen() {

		_DrawScreenHeader("Find Currency Screen");

		short OptionNumber = _ReadFindOption();

		if (OptionNumber == 1) {


			string CurrencyCode;
			CurrencyCode = clsInputValidate::ReadString("\nPlease Enter The Country Code  : ");
			clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
			while (Currency.IsEmpty()) {

				CurrencyCode = clsInputValidate::ReadString("\nThe Country Code Is Not Exist , Please Enter Again :  ");
				 Currency = clsCurrency::FindByCode(CurrencyCode);
			}

			_PrintCurrencyRecord(Currency);
		}
		else {
			string CountryName;
			CountryName = clsInputValidate::ReadString("\nPlease Enter The Country Name  : ");
			//The Find its return empty object
			clsCurrency Currency = clsCurrency::FindByCountry(CountryName);

			while (Currency.IsEmpty()) {

				CountryName = clsInputValidate::ReadString("\n\nThe Country Name Is Not Exist , Please Enter Again :  ");
			      Currency = clsCurrency::FindByCountry(CountryName);
			}


			_PrintCurrencyRecord(Currency);

		}


	}


};

