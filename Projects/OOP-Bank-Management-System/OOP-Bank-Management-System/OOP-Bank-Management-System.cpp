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


void UpdateClient() {


	string AccountNumber;

	AccountNumber = clsInputValidate::ReadString("Please Enter The Account Number : ");

	while (!clsBankClient::IsClientExist(AccountNumber)) {

		AccountNumber = clsInputValidate::ReadString("Invalid Account Number!! Please Enter Again : ");

	}
	clsBankClient Client = clsBankClient::Find(AccountNumber);
	Client.Print();

	cout << "---------------------------------\n";
	cout << "          Update Client            ";
	cout << "\n---------------------------------";
	ReadClientInfo(Client);


	clsBankClient::enSaveResult SaveResult;

	//Save will Return enum if failed to save data in the file or done successfully. 
	SaveResult = Client.Save();


	switch (SaveResult)
	{
	case clsBankClient::enSaveResult::svSuccessed:
		cout << "\nUpdate Done Successfully , Thanks :-) \n";
		break;
	case  clsBankClient::enSaveResult::svFailEmptyObject:
		cout << "\nUpdate Failed, Maybe The Client Data Is Empty\n";
		break;
	}

}


int main()
{
	UpdateClient();

}
