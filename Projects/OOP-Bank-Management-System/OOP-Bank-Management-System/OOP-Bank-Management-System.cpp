// OOP-Bank-Management-System.


#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsInputValidate.h"


void ReadClientInfo(clsBankClient& Client) {
	
	Client.FirstName = clsInputValidate::ReadString("\nPlease Enter The First Name      : ");
	Client.LastName = clsInputValidate::ReadString("\nPlease Enter The Last Name        : ");
	Client.Phone = clsInputValidate::ReadString("\nPlease Enter The Phone Number     : ");
	Client.Email = clsInputValidate::ReadString("\nPlease Enter The Email            : ");
	Client.PinCode = clsInputValidate::ReadString("\nPlease Enter The Pin Code         : ");
	Client.AccountBalance = clsInputValidate::ReadFloatNumber("\nPlease Enter The Account Balance  : ");
	
}


void DeleteClient() {


	string AccountNumber;

	AccountNumber = clsInputValidate::ReadString("Please Enter The Account Number To Delete : ");

	while (!clsBankClient::IsClientExist(AccountNumber)) {

		AccountNumber = clsInputValidate::ReadString("Account Number Is Not Exist!! , Please Enter Again : ");

	}


	//GetAddNewClientObject will take the account number and it will return object with mode AddNew cuz ((Save() Need it)) and the Account Number.
	clsBankClient Client = clsBankClient::Find(AccountNumber);
	Client.Print();

	cout << "\nAre you sure you want to delete this client? y/n?  ";
	char Answer = 'n';
	cin >> Answer;
	if (Answer == 'y' || Answer == 'Y') {
	
		if (Client.Delete()) {
		
			cout << "\nClient Deleted Successfully!!\n";
		}
		else {

			cout << "\nError Client Was Not Deleted\n";
		}

	}


}


int main()
{
	DeleteClient();
	
}
