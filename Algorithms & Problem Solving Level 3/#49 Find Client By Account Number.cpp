// #47 Problem.
//Print The Information For An Account Number If  its not in the file print not found with the account number.
#include <iostream>
#include <fstream>
#include<cctype>
#include <string>
#include <vector>
#include"MaherLib.h"

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
    cout <<  setw(20) << left<<"Account Number "  << Client.AccountNumber << endl;
    cout << setw(20) << left << "Pin Code Is"  << Client.PinCode << endl;
    cout << setw(20) << left << "Name"  << Client.Name << endl;
    cout << setw(20) << left << "Phone"  << Client.Phone << endl;
    cout << setw(20) << left << "Account Balance"  << Client.AccountBalance << endl;

    cout << endl;

}


string ReadAccountNumber() {

string AccountNumber = "";
cout << "Please Enter The Account Number :  ";
cin >> AccountNumber;

    return AccountNumber;
}


bool FindClientByAccountNumber(string AccountNumber, sClient& Client) {

    vector<sClient> vClientsInfo = stFile_LoadDataFromFileToVector(ClientsFileName);

    for (sClient& C : vClientsInfo) {

        if (C.AccountNumber == AccountNumber) {

            Client = C;
            return true;
        }

    }

    return false;

}

void PrintClientDataByAccountNumber(vector<sClient> vClientsInfo) {

    string AccountNmberForSearch = ReadAccountNumber();

    sClient sTempClient;
 
        if (FindClientByAccountNumber(AccountNmberForSearch , sTempClient)) {
        
             PrintOneClientRecord(sTempClient);
            
        }
        else {

            cout << "Client With Account Number (" << AccountNmberForSearch << ")" << "Not Found!";
        }

}

int main()
{
    vector<sClient> vVector = stFile_LoadDataFromFileToVector(ClientsFileName);


    PrintClientDataByAccountNumber(vVector);


    return 0;
}



