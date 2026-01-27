#pragma once
#pragma once
#include <iostream>
#include"clsUtil.h"
#include"clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include <iomanip>
class clsTransferLogScreen : protected clsScreen
{

    static void _PrintTransferData(clsBankClient::stTransferLogRecord UserTransferLogData)
    {
        
        cout << setw(8) << left << "" << "| " << setw(22) << left << UserTransferLogData.DateTime;
        cout << "| " << setw(11) << left << UserTransferLogData.SAccountNumber;
        cout << "| " << setw(11) << left << UserTransferLogData.DAccountNumber;
        cout << "| " << setw(11) << left << UserTransferLogData.Amount;
        cout << "| " << setw(11) << left << UserTransferLogData.SBalance;
        cout << "| " << setw(11) << left << UserTransferLogData.DBalance;
        cout << "| " << setw(11) << left << UserTransferLogData.UserName;

    }



public:


    static void ShowTransferLogScreen() {
    
        vector <clsBankClient::stTransferLogRecord> vTransferHistoryData = clsBankClient::GetTransfersLogList();

        _DrawScreenHeader("Transfer Log List Screen", "       (" + to_string(vTransferHistoryData.size()) + ") Client(s)");



    //this for printing the header.
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(22) << "Date & Time";
        cout << "| " << left << setw(11) << "S.Acct";
        cout << "| " << left << setw(11) << "D.Acct";
        cout << "| " << left << setw(11) << "Amount";
        cout << "| " << left << setw(11) << "S.Balance";
        cout << "| " << left << setw(11) << "D.Balance";
        cout << "| " << left << setw(11) << "User";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;



        if (vTransferHistoryData.size() == 0) {
        
            cout << "There is No Transfer Operation List Yet in the System!!";
        }
        else {

            for (clsBankClient::stTransferLogRecord& TransferData : vTransferHistoryData) {

                _PrintTransferData(TransferData);
                cout << endl;
            }
        }


        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;
    
    }



};

