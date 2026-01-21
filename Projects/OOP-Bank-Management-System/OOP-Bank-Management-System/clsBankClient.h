#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include"clsString.h"
#include"clsPerson.h"

class clsBankClient : public clsPerson
{

private :
	enum enMode{EmptyMode = 0 , UpdateMode = 1};

	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;
	enMode _Mode;
	static clsBankClient _ConvertLinetoClientObject(string Line , string Delim = "#//#") {
		
		vector<string> vClient = clsString::Split(Line, Delim);
		
		return clsBankClient(
			enMode::UpdateMode,
			vClient[0], // Account Number
			vClient[1], // Pin Code
			vClient[2], // First Name
			vClient[3], // Last Name
			vClient[4], // Email
			vClient[5], // Phone
			stod(vClient[6])// Account Balance
		);
	}
	static clsBankClient _GetEmptyClientObject() {
		return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
	}
public:
	bool IsEmpty() {

		return (_Mode == enMode::EmptyMode);
	
	}
	clsBankClient(enMode Mode ,string FirstName, string LastName, string Email, string Phone, string AccountNumber, string PinCode, double AccountBalance)
		: clsPerson(FirstName, LastName, Email, Phone)
	{
		_Mode = Mode;
		_AccountNumber = AccountNumber;
		_PinCode = PinCode;
		_AccountBalance = AccountBalance;
	}

	void SetAccountNumber(string AccountNumber) {
		_AccountNumber = AccountNumber;
	}

	string GetAccountNumber() {
		return _AccountNumber;
	}

	//declspec(property(get = **** , put = ***)) This only work for visual studio compiler not for c++ language.
	_declspec(property(get = GetAccountNumber, put = SetAccountNumber)) string AccountNumber;




	void SetPinCode(string PinCode) {
	
		_PinCode = PinCode;
	}

	string GetPinCode() {
		return _PinCode;
	}
	_declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;

	void SetAccountBalance(float AccountBalance) {
		_AccountBalance = AccountBalance;
	}
	float GetAccountBalance() {
		return _AccountBalance;
	}

	_declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance;


	void Print() {

		cout << "Name              :  " << clsPerson::GetFullName() << endl;
		cout << "Account Number    :  " << _AccountNumber << endl;
		cout << "Phone Number      :  " << clsPerson::GetPhone() << endl;
		cout << "Email             :  " << clsPerson::GetEmail() << endl;
		cout << "Pin Code          :  " << _PinCode << endl;
		cout << "Account Balance   :  " << _AccountBalance << endl;

	}

	static clsBankClient Find(string AccountNumber) {
			
		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);
		
		vector<clsBankClient> vBankClient;
		string Line;

		if (MyFile.is_open()) {
		
			while (getline(MyFile, Line)) {
			
				clsBankClient Client = _ConvertLinetoClientObject(Line);

				if (Client.AccountNumber == AccountNumber) {
				
					MyFile.close();
					return Client;
				}
							
			}
						
			MyFile.close();
		}
	
		return _GetEmptyClientObject();
	}

	static clsBankClient Find(string AccountNumber,string PinCode) {

		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);

		vector<clsBankClient> vBankClient;
		string Line;

		if (MyFile.is_open()) {

			while (getline(MyFile, Line)) {

				clsBankClient Client = _ConvertLinetoClientObject(Line);

				if (Client.AccountNumber == AccountNumber && Client.PinCode == PinCode) {

					MyFile.close();
					return Client;
				}

			}

			MyFile.close();
		}

		return _GetEmptyClientObject();
	}


 bool IsClientExit() {
	
	 return (!IsEmpty());
	
}

};

