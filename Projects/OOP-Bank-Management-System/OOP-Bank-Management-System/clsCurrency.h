#pragma once
#include <iostream>
#include <iomanip>
#include "clsUtil.h"
#include"clsInputValidate.h"
#include"clsScreen.h"
#include <vector>
#include <fstream>
class clsCurrency
{
	enum enMode { EmptyMode = 0, UpdateMode = 1 };
	enMode _Mode;
	string _Country;
	string _CurrencyCode;
	string _CurrencyName;
	float  _Rate;

	static clsCurrency _CovertLineToCurrencyObject(string Line) {
		vector<string> vCurrencyData = clsString::Split(Line,"#//#");
	
		return clsCurrency(enMode::UpdateMode, vCurrencyData[0], vCurrencyData[1], vCurrencyData[2],
			stof(vCurrencyData[3]));
	
	}
	
	static string _ConvertCurrencyObjectToLine(clsCurrency CurrencyObject , string Separator = "#//#") {
		string CurrencyLine;

		CurrencyLine = CurrencyObject._Country + Separator;
		CurrencyLine += CurrencyObject._CurrencyCode + Separator;
		CurrencyLine += CurrencyObject._CurrencyName + Separator;
		CurrencyLine += to_string(CurrencyObject._Rate) + Separator;

		return CurrencyLine;
	}

	static vector<clsCurrency> _LoadCurrencyDataFromFile() {
	
		vector <clsCurrency> vCurrency;
		fstream MyFile;
		MyFile.open("Currencies.txt", ios::in);

		if (MyFile.is_open()) {
		
		
			string DataLine;
			
			while (getline(MyFile, DataLine)) {
			
				clsCurrency TempCurrency = _CovertLineToCurrencyObject(DataLine);

				vCurrency.push_back(TempCurrency);
			
			}

			MyFile.close();
		
		}
	
		return vCurrency;
	}

	static void _SaveCurrencyDataToFile(vector <clsCurrency> vCurrencies) {
	
		fstream MyFile;
		MyFile.open("Currencies.txt", ios::out);

		if (MyFile.is_open()) {
		
			string Line;

			for (clsCurrency& C : vCurrencies) {
			
				Line = _ConvertCurrencyObjectToLine(C);
			   
				MyFile << Line << endl;
			   
			}
		
			MyFile.close();
		
		}
	
	}
	
	static clsCurrency _GetEmptyCurrencyObject() {
	
		return clsCurrency(enMode::EmptyMode, "","", "", 0);
	}
	 void _Update() {
	
		vector<clsCurrency> _vCurrencies = _LoadCurrencyDataFromFile();

		for (clsCurrency& TempC : _vCurrencies) {
		
			if (TempC.CurrencyCode() == CurrencyCode()) {
			
				TempC = *this;
			}
		

		}
	
		_SaveCurrencyDataToFile(_vCurrencies);
	}

public:

	clsCurrency(enMode Mode , string Country ,string CountryCode,string CountryName,float Rate) {
		_Mode = Mode;
		_Country     =   Country;
		_CurrencyCode = CountryCode;
		_CurrencyName = CountryName;
		_Rate		 = Rate;
	}

	static vector <clsCurrency> GetAllUSDRates()
	{

		return _LoadCurrencyDataFromFile();

	}


	string Country() {
		return _Country;
	}

	string CurrencyCode() {
		return _CurrencyCode;
	}

	string CurrencyName() {
		return _CurrencyName;
	}

	float Rate() {
		return _Rate;
	}



    bool IsEmpty() {
		return(_Mode == enMode::EmptyMode);
	}


	void UpdateRate(float NewRate)
	{
		_Rate = NewRate;
		_Update();
	}

	static   clsCurrency FindByCode(string CurrencyCode)
	{
		CurrencyCode = clsString::UpperAllString(CurrencyCode);

		fstream MyFile;
		MyFile.open("Currencies.txt", ios::in);//read Mode

		if (MyFile.is_open())
		{
			string Line;
			while (getline(MyFile, Line))
			{
				clsCurrency Currency = _CovertLineToCurrencyObject(Line);
				if (Currency.CurrencyCode() == CurrencyCode)
				{
					MyFile.close();
					return Currency;
				}
			}

			MyFile.close();

		}
		//if the object not found i will return an empty object that contain mode empty
		return _GetEmptyCurrencyObject();

	}

	static   clsCurrency FindByCountry(string Country)
	{
		Country = clsString::UpperAllString(Country);
	
		fstream MyFile;
		MyFile.open("Currencies.txt", ios::in);//read Mode

		if (MyFile.is_open())
		{
			string Line;
			while (getline(MyFile, Line))
			{
				clsCurrency Currency = _CovertLineToCurrencyObject(Line);
				if (clsString::UpperAllString(Currency.Country()) == Country)
				{
					MyFile.close();
					return Currency;
				}
			}

			MyFile.close();

		}
		//if the object not found i will return an empty object that contain mode empty
		return _GetEmptyCurrencyObject();

	}



static bool IsCurrencyExist(string CurrencyCode) 
	{
	clsCurrency Currency = FindByCode(CurrencyCode);

	return (!Currency.IsEmpty());

	}

static vector <clsCurrency> GetCurrenciesList()
{
	return _LoadCurrencyDataFromFile();
}
};

