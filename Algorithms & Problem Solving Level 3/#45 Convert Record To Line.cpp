// #45 Problem.


#include <iostream>
#include<string>
#include<cctype>
#include<vector>
#include "MaherLib.h"

using namespace std;

struct stBank {

	string Name;
	string PhoneNumber;
	string AccountNumber;
	string PinCode;
	double AccountBalance;

};

string sReadString(string Message) {
	string Sentence;
	cout << Message << endl;

	getline(cin, Sentence);

	return Sentence;

}


stBank stReadClientInfo(stBank ClientInfo) {



	ClientInfo.Name = sReadString("Please Enter The Name :");
	ClientInfo.PhoneNumber = sReadString("Please Enter The Phone Number  :");
	ClientInfo.PinCode = sReadString("Please Enter The Pin Code :");
	ClientInfo.AccountNumber = sReadString("Please Enter The Account Number :");

	cout<<("Please Enter The Account Balance");
	cin>> ClientInfo.AccountBalance;

	return ClientInfo;

}

string PrintClientInfo(stBank ClientInfo , string Serparator = "#//#") {

	string stClientInfo = "";

	stClientInfo+= ClientInfo.AccountNumber + Serparator;
	stClientInfo += ClientInfo.PinCode + Serparator;
	stClientInfo += ClientInfo.Name + Serparator;
	stClientInfo += ClientInfo.PhoneNumber + Serparator;

	stClientInfo += to_string(ClientInfo.AccountBalance);


	return stClientInfo;
}

int main()
{


	stBank stBankInformation;

	stBankInformation = stReadClientInfo(stBankInformation);

	cout<< PrintClientInfo(stBankInformation, "#//#");

	return 0;
}
