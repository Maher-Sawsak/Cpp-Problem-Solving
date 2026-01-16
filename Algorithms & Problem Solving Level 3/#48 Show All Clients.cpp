// #47 Problem.

#include"MaherLib.h"
#include <iostream>
#include <fstream>
#include<cctype>
#include <string>
#include <vector>

using namespace std;

const string ClientsFileName = "Client.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = MyStringLib::vSplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);//cast string to double

    return Client;
}

vector<sClient> stFile_LoadDataFromFileToVector(string FileName) {

    vector<sClient> vVector;
	fstream MyFail;

	MyFail.open(FileName, ios::in);//Read Mode

    string word = "";

	if (MyFail.is_open()) {

		string Text;

		while (getline(MyFail, Text)) {


            word = Text;

			vVector.push_back(ConvertLineToRecord(Text));

		}


		MyFail.close();

	}

    return vVector;

}

void PrintOneClientRecord(sClient Client) {
cout << "| " << setw(15) << left << Client.AccountNumber; 
cout << "| " << setw(10) << left << Client.PinCode; 
cout << "| " << setw(40) << left << Client.Name;
cout << "| " << setw(12) << left << Client.Phone;    
cout << "| " << setw(12) << left << Client.AccountBalance; 

cout << endl;

}

void PrintHeader(vector<sClient> vVector) {


    cout << "\n\t\t\t\t\tClient List (" << vVector.size() << ") Client(s).\t\t\n";

    cout << "------------------------------------------------------------------------------------------------------\n";
    cout << "| " << setw(15)<< left << "Account Number";
    cout << "| " << setw(10)<< left << "Pin Code";
    cout << "| " << setw(40)<< left << "Name";
    cout << "| " << setw(12)<< left << "Phone";
    cout << "| " << setw(12)<< left << "Account Balance";

    cout << "\n------------------------------------------------------------------------------------------------------\n";

}

void PrintHeaderAndAllClients(vector<sClient> vClientsInfo) {

    PrintHeader(vClientsInfo);
  
    for (sClient& C : vClientsInfo) {
    
        PrintOneClientRecord(C);
    
    }

    cout << "------------------------------------------------------------------------------------------------------\n";

}


int main()
{
    vector<sClient> vVector = stFile_LoadDataFromFileToVector(ClientsFileName);


    PrintHeaderAndAllClients(vVector);


    return 0;
}



