/*
 * -----------------------------------------------------------------------------------------------------
 * Problem Statement: Delete Client from File (Bank System)
 * -----------------------------------------------------------------------------------------------------
 * Description:
 * This program implements a function to delete a specific client record from a flat file database ("Client.txt").
 * It uses a vector to load data into memory, marks the target record for deletion, and then rewrites
 * the file excluding the marked record.
 *
 * Algorithm / Workflow:
 * 1. Load Data: Read all client records from "Client.txt" into a vector of structures (sClient).
 * 2. Search: Ask the user for the "Account Number" and search for it in the vector.
 * 3. Confirm: If found, display client details and ask for deletion confirmation (Y/N).
 * 4. Logical Delete: If confirmed, set a boolean flag (MarkedForDelete = true) for that client object in the vector.
 * 5. Physical Delete (Save): Iterate through the vector and write all clients back to "Client.txt",
 * skipping any client where MarkedForDelete is true.
 *
 * -----------------------------------------------------------------------------------------------------
 * key Concepts: File I/O, Vectors, Structs, Logical Deletion vs Physical Deletion.
 * -----------------------------------------------------------------------------------------------------
 */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip> // For setw() Fun.
#include "MaherLib.h"

using namespace std;

const string ClientsFileName = "Client.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool   MarkedForDelete = false; 
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
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

string ReadAccountNumber(string Message) { 

    string AccountNumber = "";

    cout << Message << endl;

    cin >> AccountNumber;

    return AccountNumber;
}

vector<sClient> LoadClientsFromFile(string FileName) { 

    vector<sClient> vClients; 
    fstream MyFile; 

    MyFile.open(FileName, ios::in); // Read Mode

    if (MyFile.is_open()) {

        string Line; 
        while (getline(MyFile, Line)) {

            sClient Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

void PrintClientRecord(sClient Client) { 

    cout << setw(20) << left << "Account Number " << Client.AccountNumber << endl;
    cout << setw(20) << left << "Pin Code Is" << Client.PinCode << endl;
    cout << setw(20) << left << "Name" << Client.Name << endl;
    cout << setw(20) << left << "Phone" << Client.Phone << endl;
    cout << setw(20) << left << "Account Balance" << Client.AccountBalance << endl;
    cout << endl;
}

bool FindClientByAccountNumber(string AccountNumber, sClient& Client, vector<sClient> vClients) { 

    for (sClient& C : vClients) {

        if (C.AccountNumber == AccountNumber) {
            Client = C;
            return true;
        }
    }
    return false;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") { 

    string Line = "";

    Line = Client.AccountNumber + Seperator;
    Line += Client.PinCode + Seperator;
    Line += Client.Name + Seperator;
    Line += Client.Phone + Seperator;
    Line += to_string(Client.AccountBalance);

    return Line;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients) {

    for (sClient& C : vClients) {

        if (AccountNumber == C.AccountNumber) {

            C.MarkedForDelete = true; 
            return true;
        }
    }
    return false;
}

vector<sClient> SaveClientsToFile(string FileName, vector<sClient> vClients) { 


    fstream MyFile;
    MyFile.open(FileName, ios::out); // Write Mode

    if (MyFile.is_open()) {

        string DataLine = "";

        for (sClient& C : vClients) {

            if (C.MarkedForDelete == false) { // Only save if NOT marked for delete

                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient> vClients) { 

    char Answer = 'n';
    sClient Client;

    if (FindClientByAccountNumber(AccountNumber, Client, vClients)) {

        PrintClientRecord(Client);

        cout << "Are you sure you want to delete this client? y/n ?\n"; 
        cin >> Answer;

        if (tolower(Answer) == 'y') { 

            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);

         
            SaveClientsToFile(ClientsFileName, vClients);

            // Refresh vector logic (kept as per your request)
            vClients = LoadClientsFromFile(ClientsFileName);

            cout << "Client Deleted Successfully.\n";
            return true;
        }
    }
    else {
        cout << "Account With Number (" << AccountNumber << ") Not Found !!\n";
        return false;
    }

    return false; 
}

int main()
{
    vector<sClient> vClients = LoadClientsFromFile(ClientsFileName); // Renamed vVectorClient

    string AccountNumber = ReadAccountNumber("Please Enter The Account Number You Are Looking For?");

    DeleteClientByAccountNumber(AccountNumber, vClients);

    return 0;
}