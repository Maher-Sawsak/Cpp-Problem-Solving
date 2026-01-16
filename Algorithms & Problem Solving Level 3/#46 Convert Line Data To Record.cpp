// #46 Problem.

#include <iostream>
#include<string>
#include<cctype>
#include<vector>
#include"MaherLib.h"
using namespace std;
struct stBank {

	string Name;
	string PhoneNumber;
	string AccountNumber;
	string PinCode;
	double AccountBalance;

};



string PrintClientInfo(stBank ClientInfo, string Serparator = "#//#") {

	string stClientInfo = "";

	stClientInfo += ClientInfo.AccountNumber + Serparator;
	stClientInfo += ClientInfo.PinCode + Serparator;
	stClientInfo += ClientInfo.Name + Serparator;
	stClientInfo += ClientInfo.PhoneNumber + Serparator;
	stClientInfo += to_string(ClientInfo.AccountBalance);

	return stClientInfo;
}


stBank ConvertLineToRecord(string Line, string Separator = "#//#") {

	stBank Client;

	vector<string> vClientData = MyStringLib::vSplitString(Line, Separator);

	if (vClientData.size() < 5) {
		return Client;
	}

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.PhoneNumber = vClientData[3];

	Client.AccountBalance = stod(vClientData[4]);

	return Client;
}

void PrintClientRecord(stBank Client) {
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code     : " << Client.PinCode;
	cout << "\nName         : " << Client.Name;
	cout << "\nPhone        : " << Client.PhoneNumber;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}






int main()
{

	stBank  ClientFullInfo;
	string LineInfo = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	cout << LineInfo << endl;



	ClientFullInfo = ConvertLineToRecord(LineInfo);
	PrintClientRecord(ClientFullInfo);

	return 0;
}