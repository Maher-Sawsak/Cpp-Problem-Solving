#pragma once
#include <iostream>
#include"clsUtil.h"
#include"clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include"clsMainScreen.h"
#include <iomanip>
#include "clsDepositScreen.h"
class clsTransactionsScreen : protected clsScreen
{
    enum enTransactionMenueOption {

        Deposit = 1, Withdraw = 2, TotalBalance = 3, GoBackToMainMenue = 4
    };

   static int ReadTransactionsMenueOption() {
        int Choice = clsInputValidate::ReadIntNumberBetween(1, 8, "\t\t\t\t\tInvalid!! Enter Number Between 1 to 4 ? ", "\t\t\t\t\tPlease Enter Number Between 1 to 4 ? ");

        return Choice;

    }
    static void _GetDepositScreen() {
        clsDepositScreen::ShowDepositScreen();
    }

    static void _GetWithdrawScreen() {
        cout << "\nWithdraw Screen Will Be here...\n";
    }

    static void _ShowTotalBalanceScreen() {
        cout << "\Total Balance Screen Will Be here...\n";
    }

    static void _GoBackToTransactionMenue() {
        cout << "\n\nPress any key to go back to transaction menue";
        system("Pause>0");
        ShowTransactionsMenue();

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



        case enTransactionMenueOption::TotalBalance:
            system("cls");
            _ShowTotalBalanceScreen();
            _GoBackToTransactionMenue();
            break;

        case enTransactionMenueOption::GoBackToMainMenue:
            cout << "do nothing here the main screen will handle it :-) ";
            break;
        }





    }


public :
    static void ShowTransactionsMenue() {

        system("cls");
        _DrawScreenHeader("Transaction Screen");


        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;
        cout << setw(42) << " " << setw(37) << left << "   Transaction Menue." << endl;

        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

        cout << setw(42) << " " << setw(37) << left << "[1] Deposit ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[2] Withdraw ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[3] Total Balance ." << endl;
        cout << setw(42) << " " << setw(37) << left << "[4] Main Menue ." << endl;
        cout << setw(42) << " " << setw(37) << left << "------------------------------" << endl;

        _PerformTransactionMenueOption((enTransactionMenueOption)clsInputValidate::ReadIntNumberBetween(1, 8, "\t\t\t\t\tInvalid!! Enter Number Between 1 to 4 : ", "\t\t\t\t\tPlease Enter Number Between 1 to 4 : "));



    }




};

