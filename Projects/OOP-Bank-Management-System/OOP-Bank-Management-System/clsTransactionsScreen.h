#pragma once
#include <iostream>
#include"clsUtil.h"
#include"clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include"clsMainScreen.h"
#include <iomanip>
#include "clsDepositScreen.h"
#include "clsWithdrawScreen.h"
#include "clsTotalBalancesScreen.h"
#include "clsTransferScreen.h"
#include"clsTransferLogScreen.h"
class clsTransactionsScreen : protected clsScreen
{
    enum enTransactionMenueOption {

        Deposit = 1, Withdraw = 2, TotalBalance = 3, Transfer = 4 , TransferOperation = 5,GoBackToMainMenue = 6
    };

   static int _ReadTransactionsMenueOption() {
        int Choice = clsInputValidate::ReadIntNumberBetween(1, 8, "\t\t\t\t\tInvalid!! Enter Number Between 1 to 6 ? ", "\t\t\t\t\tPlease Enter Number Between 1 to 6 ? ");

        return Choice;

    }
    static void _GetDepositScreen() {
        clsDepositScreen::ShowDepositScreen();
    }

    static void _GetWithdrawScreen() {
        clsWithdrawScreen::ShowWithdrawScreen();

    }

    static void _ShowTotalBalanceScreen() {
        clsTotalBalancesScreen::ShowTotalBalances();
    }

    static void _GoBackToTransactionMenue() {
        cout << "\n\nPress any key to go back to transaction menue";
        system("Pause>0");
        ShowTransactionsMenue();

    }

    static void _ShowTotalTransferScreen() {
        clsTransferScreen::ShowTotalTransferScreen();
    }
    static void _ShowTransferLogScreen() {
    
        clsTransferLogScreen::ShowTransferLogScreen();
    }
    static void _PerformTransactionMenueOption(enTransactionMenueOption Choice) {

        switch (Choice)
        {

        case enTransactionMenueOption::Deposit:
            system("cls");
            _GetDepositScreen();
            _GoBackToTransactionMenue();
            break;



        case enTransactionMenueOption::Withdraw:
            system("cls");
            _GetWithdrawScreen();
            _GoBackToTransactionMenue();
            break;

        case enTransactionMenueOption::Transfer:
            system("cls");
            _ShowTotalTransferScreen();
            _GoBackToTransactionMenue();
            break;

        case enTransactionMenueOption::TotalBalance:
            system("cls");
            _ShowTotalBalanceScreen();
            _GoBackToTransactionMenue();
            break;
        case enTransactionMenueOption::TransferOperation:
            system("cls");
            _ShowTransferLogScreen();
            _GoBackToTransactionMenue();
            break;
        case enTransactionMenueOption::GoBackToMainMenue: {
            // we dont need any code here will handiling by the ShowMainMenue.
            }
           
        }





    }


public :
    static void ShowTransactionsMenue() {

        if (!CheckAccessRights(clsUser::enPermissions::pTranactions)) {
            return;
        }


        system("cls");
        _DrawScreenHeader("Transaction Screen");


        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;
        cout << setw(42) << " " << setw(37) << left << "   Transaction Menue." << endl;

        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

        cout << setw(42) << " " << setw(37) << left << "[1] Deposit ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[2] Withdraw ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[3] Total Balance ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[4] Transfer ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[5] Transfer Log ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[6] Main Menue ." << endl;
        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

        _PerformTransactionMenueOption((enTransactionMenueOption)_ReadTransactionsMenueOption());
    



    }




};

