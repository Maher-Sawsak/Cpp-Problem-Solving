#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include"clsString.h"
#include"clsPerson.h"
#include "clsDate.h"

class clsBankClient : public clsPerson
{

private :
	enum enMode{EmptyMode = 0 , UpdateMode = 1 , AddNewMode = 2};

	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;
	//this will be for delete to mark.
	bool _MarkedForDelete = false;
	enMode _Mode;


	static clsBankClient _ConvertLineToClientObject(string Line, string Delim = "#//#") {
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

	void _SaveTransferFDataTiFile(double Amount, clsBankClient  DestinationClient, string Separator = "#//#") {

		fstream MyFile;
		MyFile.open("Transfer.txt", ios::out | ios::app);

		if (MyFile.is_open()) {

			MyFile << _PrepareTransferLogRecord(Amount, DestinationClient, _AccountNumber) << endl;

		}
		MyFile.close();

	}


	string _PrepareTransferLogRecord(float Amount, clsBankClient DestinationClient,
		string UserName, string Seperator = "#//#")
	{
		string TransferLogRecord = "";
		TransferLogRecord += clsDate::GetSystemDateTimeString() + Seperator;
		TransferLogRecord += AccountNumber + Seperator;
		TransferLogRecord += DestinationClient.AccountNumber + Seperator;
		TransferLogRecord += to_string(Amount) + Seperator;
		TransferLogRecord += to_string(AccountBalance) + Seperator;
		TransferLogRecord += to_string(DestinationClient.AccountBalance) + Seperator;
		TransferLogRecord += UserName;
		return TransferLogRecord;
	}

	static string _ConvertClientObjectToLine(clsBankClient Client, string Separator = "#//#") {
		string Line = "";
		Line += Client.FirstName + Separator;      // vClient[0]
		Line += Client.LastName + Separator;       // vClient[1]
		Line += Client.Email + Separator;          // vClient[2]
		Line += Client.Phone + Separator;          // vClient[3]
		Line += Client.AccountNumber + Separator;  // vClient[4]
		Line += Client.PinCode + Separator;        // vClient[5]
		Line += to_string(Client.AccountBalance);  // vClient[6]
		return Line;
	}

	static clsBankClient _GetEmptyClientObject() {
		return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
	}

	static void _SaveClientsDataToFile(vector<clsBankClient> vContainingClientData) {
	
		fstream MyFile;
		MyFile.open("Clients.txt", ios::out);//Write mode it will delete all data and write new data the passes by vector.
	
		string DataLine;
		if (MyFile.is_open()) {
		
		
			for (clsBankClient &C : vContainingClientData) {
			//this will only write the marked as false and by default its false delete will mark the obj I want to delete as true so won't be written. 
				if (C._MarkedForDelete == false) {

					DataLine = _ConvertClientObjectToLine(C, "#//#");
					MyFile << DataLine << endl;
				}
			}
			MyFile.close();

		}
	
	}

	static vector<clsBankClient> _LoadClientsDataFromFile() {
	
		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);//Read Only Mode In file

		vector<clsBankClient> vClients;
		

		if (MyFile.is_open()) {
			string Line;
			while (getline(MyFile, Line)) {

				clsBankClient Client = _ConvertLineToClientObject(Line);

				vClients.push_back(Client);

			}

			MyFile.close();
		}

		return vClients;
	}
	
	void _Update() {

		vector<clsBankClient> _vClient = _LoadClientsDataFromFile();

		for (clsBankClient& C : _vClient) {

			if (C.AccountNumber == AccountNumber) {
				C = *this;
				break; //I used break for time and also the Account Number Will be unique Number fro each client.
			}
		}
		_SaveClientsDataToFile(_vClient);
	}

	void _AddNew() {
	
		_AddDataLineToFile(_ConvertClientObjectToLine(*this));
	
	}

	void _AddDataLineToFile(string ClientDataByLine) {
	
		fstream MyFile;
		MyFile.open("Clients.txt", ios::out | ios::app);//this mode if the file exist app mode will add to it without deleting all data.
	
		if (MyFile.is_open()) {
		
		
			MyFile << ClientDataByLine << endl;
			MyFile.close();

		}
	}

public:

	//I will not use it, Becase no UI related code iside object.
	/*void Print() {

		cout << "\nName              :  " << clsPerson::GetFullName() << endl;
		cout << "Account Number    :  " << _AccountNumber << endl;
		cout << "Phone Number      :  " << clsPerson::GetPhone() << endl;
		cout << "Email             :  " << clsPerson::GetEmail() << endl;
		cout << "Pin Code          :  " << _PinCode << endl;
		cout << "Account Balance   :  " << _AccountBalance << endl;

	}*/


	bool IsEmpty() {

		return (_Mode == enMode::EmptyMode);
	
	}
	clsBankClient(enMode Mode, string FirstName, string LastName,
		string Email, string Phone, string AccountNumber, string PinCode,
		float AccountBalance) :
		clsPerson(FirstName, LastName, Email, Phone)

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




	static clsBankClient Find(string AccountNumber) {
			
		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);
		
		vector<clsBankClient> vBankClient;
		string Line;

		if (MyFile.is_open()) {
		
			while (getline(MyFile, Line)) {
			
				clsBankClient Client = _ConvertLineToClientObject(Line);

				if (Client.AccountNumber == AccountNumber) {
				
					MyFile.close();
					return Client;
				}
							
			}
						
			MyFile.close();
		}
	//Here it will return enum failed .
		return _GetEmptyClientObject();
	}

	static clsBankClient Find(string AccountNumber,string PinCode) {

		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);

		vector<clsBankClient> vBankClient;
		string Line;

		if (MyFile.is_open()) {

			while (getline(MyFile, Line)) {

				clsBankClient Client = _ConvertLineToClientObject(Line);

				if (Client.AccountNumber == AccountNumber && Client.PinCode == PinCode) {

					MyFile.close();
					return Client;
				}

			}

			MyFile.close();
		}

		return _GetEmptyClientObject();
	}

	bool Delete() {
	
		vector<clsBankClient> vClients;
		vClients = _LoadClientsDataFromFile();

		for (clsBankClient& C : vClients) {

			if (C.AccountNumber == AccountNumber) {

				C._MarkedForDelete = true;
				break;
			}

		}

		_SaveClientsDataToFile(vClients);

		*this = _GetEmptyClientObject();
		return true;
	}


  static bool IsClientExist(string AccountNumber) {
	
	  clsBankClient Client = clsBankClient::Find(AccountNumber);

	  //This Will cheek the mode is ot empty or not that comes from Find Method.
	 return (!Client.IsEmpty());
	
}


  enum enSaveResult { svFailEmptyObject = 0, svSuccessed = 1, svFaildAccountNumberExists = 2 };


  //This method to save client data to file.
  enSaveResult Save() {


	  switch (_Mode) {
		  //If the client object empty i will not save it in the file cuz i dont want an empty client in file.
	  case  enMode::EmptyMode:

		  return enSaveResult::svFailEmptyObject;

	  case enMode::UpdateMode:

		  _Update();

		  return enSaveResult::svSuccessed;

	  case enMode::AddNewMode:
		  //If The client accountnumber exist so i will return false he can't add client with same account number.
		  if (IsClientExist(AccountNumber)) {
			  return enSaveResult::svFaildAccountNumberExists;
		  }
		  else {
			  // Change mode to UpdateMode after successful creation to prevent 
             // creating duplicate records if Save() is called again.
			  _AddNew();
			  _Mode = enMode::UpdateMode;
			  return enSaveResult::svSuccessed;
		  }

	  }
  
  }

  
  static clsBankClient GetAddNewClientObject(string AccountNumber) {
      //This will take the Account Number And put The Mode for it, because i need it in the save method to know, which function should i use?.
	  return clsBankClient(enMode::AddNewMode, "", "", "", "", AccountNumber ,"", 0);
  }


  static vector <clsBankClient> GetClientsList() {
  
	  return _LoadClientsDataFromFile();
  }

  static double GetTotalBalances() {
  
	  vector<clsBankClient> vClients = GetClientsList();
  
	  double TotalBalance = 0;
	  
	  for (clsBankClient& C : vClients) {
	  
		  TotalBalance += C.AccountBalance;
	  
	  }
	  return TotalBalance;

  }


  void Deposit(double Amount) {

	  AccountBalance += Amount;
	  Save();

  }


  bool Withdraw(double Amount) {
	  if (Amount > AccountBalance) {
		  return false;
	  }

	  AccountBalance -= Amount;
	  Save();
	  return true;


  }


  bool Transfer(double Amount, clsBankClient & DestinationClient) {

	  if (Amount > AccountBalance) {
		  return false;
	  }

	  Withdraw(Amount);
	  DestinationClient.Deposit(Amount);

	  this->_SaveTransferFDataTiFile(Amount, DestinationClient);
	  return true;
    
  }



};

