#pragma once
#include <iostream>
#include <iomanip>
#include "clsUtil.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include "clsCurrenciesListScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsUpdateCurrencyRateScreen.h"
#include "clsCurrencyCalculatorScreen.h"
class clsCurrencyScreen : protected clsScreen
{
	enum enCurrencyExhange { crListCurrencies = 1, crFindCurrency = 2, crUpdateCurrency = 3, crCurrencyCalculator = 4, crGoBackToMainMenue = 5 };
	
	static void _GoBackToCurrencyMenue() {

		cout << "\n\nPress any key to go back to currency menue...";
		system("pause>0");
		ShowCurrencyExchangeMenue();
	}

	static int _ReadCurrencyMenueOption() {
		int Choice = clsInputValidate::ReadIntNumberBetween(1, 8, "\t\t\t\t\t  Invalid! Enter Number Between [1 to 5] : ", "\t\t\t\t\t  Enter Number Between[1 to 5] : ");
		return Choice;
	}




	static void _ShowListCurrencies() {
		//cout << " List Currencies Will Be Here...";
		clsCurrenciesListScreen::ShowCurrenciesListScreen();
	}
	
	static void _ShowFindCurrency() {

		//cout << " Find Currency Will Be Here...";
		clsFindCurrencyScreen::ShowFindCurrencyScreen();
	}
	
	static void _ShowUpdateRate() {

		//cout << " Update Rate Will Be Here...";
		clsUpdateCurrencyRateScreen::ShowUpdateRateScreen();
	}
	
	static void _ShowCurrencyCalculator() {
		
	//	cout << " Currency Calculator Will Be Here...";
		clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();
	}




	static void _PerformCurrencyMenueOption(enCurrencyExhange Choice) {
	
	
		switch (Choice) {

		case enCurrencyExhange::crListCurrencies :
			system("cls");
			_ShowListCurrencies();
			_GoBackToCurrencyMenue();
			break;


			case enCurrencyExhange::crFindCurrency:
			system("cls");
			_ShowFindCurrency();
			_GoBackToCurrencyMenue();
			break;



			case enCurrencyExhange::crUpdateCurrency:
				system("cls");
				_ShowUpdateRate();
				_GoBackToCurrencyMenue();
				break;


			case enCurrencyExhange::crCurrencyCalculator:
				system("cls");
				_ShowCurrencyCalculator();
				_GoBackToCurrencyMenue();
				break;

			case enCurrencyExhange::crGoBackToMainMenue:
             //ther will be no code here.
				break;
		
		}
	
	
	}




public:

	static void ShowCurrencyExchangeMenue() {
	
		system("cls");
		_DrawScreenHeader("Currency Exchange Main Screen");


		cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;
		cout << setw(42) << " " << setw(37) << left << "   Currency Exchange Menue." << endl;

		cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

		cout << setw(42) << " " << setw(37) << left << "[1] List Currecies ." << endl;
		cout << setw(42) << " " << setw(37) << left << "[2] Find Currency ." << endl;
		cout << setw(42) << " " << setw(37) << left << "[3] Update Currency ." << endl;
		cout << setw(42) << " " << setw(37) << left << "[4] Currency Calculator ." << endl;
		cout << setw(42) << " " << setw(37) << left << "[5] Main Menue ." << endl;
		cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

		_PerformCurrencyMenueOption((enCurrencyExhange)_ReadCurrencyMenueOption());


	}
};

