// OOP-Bank-Management-System.


#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsInputValidate.h"
#include <iomanip>

void PrintClientRecordLine(clsBankClient Client) {
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(20) << left << Client.GetFullName();
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(20) << left << Client.Email;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}


void ShowClientsList() {


	vector<clsBankClient> ClientsList = clsBankClient::GetClientsList();

	cout << "\n---------------------------------------------------------------------------------------------------\n";
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(20) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(20) << "Email";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n---------------------------------------------------------------------------------------------------\n";

	if (ClientsList.size() == 0) {
	
		cout << "\t\t\t\tNo Clients Available In the System!";

	}
	else {
	
		for (clsBankClient& C : ClientsList) {
			cout << endl;
			PrintClientRecordLine(C);
			
		}
		
	}

	cout << "\n\n----------------------------------------------------------------------------------------------------\n";

}


int main()
{
	ShowClientsList();
	
}
