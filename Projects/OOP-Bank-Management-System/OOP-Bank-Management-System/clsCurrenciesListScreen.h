#pragma once
#include <iostream>
#include <iomanip>
#include "clsUtil.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include "clsCurrency.h"
class clsCurrenciesListScreen : protected clsScreen
{


	static void _PrintCurrencyRecord(clsCurrency CurrencyData) {
	
		cout << setw(8) << left << "" << "| " << setw(30) << left << CurrencyData.Country();
		cout << "| " << setw(10) << left <<CurrencyData.CurrencyCode();
		cout << "| " << setw(45) << left << CurrencyData.CurrencyName();
		cout << "| " << setw(10) << left << CurrencyData.Rate();
	
	}


public:

	static void ShowCurrenciesListScreen() {
	

		vector<clsCurrency> vCurrenciesData = clsCurrency::GetCurrenciesList();

		string Title = "Currencies List Screen ";
		string SubTitle = "  (" + to_string(vCurrenciesData.size()) + ") Currency";

			_DrawScreenHeader(Title, SubTitle);
	
			cout << setw(8) << left << "" << "\n\t_____________________________________________________";
			cout << "__________________________________________________________\n" << endl;
	
			cout << setw(8) << left << "" << "| " << setw(30) << left << "Country()";
			cout << "| " << setw(10) << left << "Code";
			cout << "| " << setw(45) << left << "Name";
			cout << "| " << setw(10) << left << "Rate/(1$)";

			cout << setw(8) << left << "" << "\n\t_____________________________________________________";
			cout << "__________________________________________________________\n" << endl;
			if (vCurrenciesData.size() == 0) {
			
				cout << "\t\t\t\tNo Currencies available on the system!!";
			}
			else {

				//for Range Loop To visit all vector's element.
				for (clsCurrency& C : vCurrenciesData) {

					_PrintCurrencyRecord(C);
					cout << endl;

				}


				cout << setw(8) << left << "" << "\n\t_____________________________________________________";
				cout << "__________________________________________________________\n" << endl;

			}
			
			
	}









};

