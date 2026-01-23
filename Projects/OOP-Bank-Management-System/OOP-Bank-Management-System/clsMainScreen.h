#pragma once
#include <iostream>
#include "clsInputValidate.h"
#include"clsUtil.h"
#include "clsScreen.h"
#include <iomanip>
#include "clsClientListScreen.h"
#include "clsAddNewClientScreen.h"
using namespace std;
class clsMainScreen : protected clsScreen
{
    enum enMainMenueOptions {

        eListClients = 1, eAddNewClient = 2, eDeleteClient = 3,
        eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6,
        eManageUsers = 7, eExit = 8

    };


    static int _ReadChoiceNumber() {
        int Choice = clsInputValidate::ReadIntNumberBetween(1,8,"\t\t\t\t\tInvalid!! Enter Number Between 1 to 8 : " ,"\t\t\t\t\tPlease Enter Number Between 1 to 8 :");
    
        return Choice;
    
    }

    static void _GoBackToMenue() {
        cout << "\n\nPress AnyKeyTo Go Back To Main Menu.....\n";
        system("pause>0");
        ShowMainMenue();

    }

    static void _PerformMainMenueOption(enMainMenueOptions Choice) {

        switch (Choice) {

        case enMainMenueOptions::eListClients:
            system("cls");
            _ShowListClientScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eAddNewClient:
            system("cls");
            _ShowAddNewClientScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eDeleteClient:
            system("cls");
            _ShowDeleteScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eUpdateClient:
            system("cls");
            _ShowUpdateScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eFindClient:
            system("cls");
            _ShowFindScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eShowTransactionsMenue:
            system("cls");
            _ShowTransactionsMenueScreen();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eManageUsers:
            system("cls");
            _ShowManageUsers();
            _GoBackToMenue();
            break;

        case enMainMenueOptions::eExit:
            system("cls");
            _ShowEndScreen();
            break;

        }


    }



    //...It will be done soon all show will be here and will be full soon.
    static  void _ShowListClientScreen() {
        clsClientListScreen::ShowClientsList();

    }
    
    static  void _ShowAddNewClientScreen() {
        //cout << "Show Add New Client Screen Will Be Here ....";
        clsAddNewClientScreen::AddNewClient();
    }
    
    static  void _ShowDeleteScreen() {
        cout << "Show Delete Client Screen Will Be Here ....";

    }
    
    static void _ShowUpdateScreen() {
        cout << "Show Update Client Screen Will Be Here ....";

    }
    
    static  void _ShowFindScreen() {
        cout << "Show Find Client Screen Will Be Here ....";

    }
    
    static void _ShowTransactionsMenueScreen() {
        cout << "Show Show Transactions Menue Screen Will Be Here ....";

    }
    
    static  void _ShowManageUsers() {
        cout << "Show Manage Users Menue Screen Will Be Here ....";

    }

    static void _ShowEndScreen() {
    
        cout << "\n\nThe Programm Is End :-)\n\n";
    }

//--------- 


public:




	static void ShowMainMenue() {

        system("cls");

		_DrawScreenHeader("Main Menue");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
        cout << setw(37) << left << "" << "\t[2] Add New Client.\n";
        cout << setw(37) << left << "" << "\t[3] Delete Client.\n";
        cout << setw(37) << left << "" << "\t[4] Update Client Info.\n";
        cout << setw(37) << left << "" << "\t[5] Find Client.\n";
        cout << setw(37) << left << "" << "\t[6] Transactions.\n";
        cout << setw(37) << left << "" << "\t[7] Manage Users.\n";
        cout << setw(37) << left << "" << "\t[8] Logout.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformMainMenueOption((enMainMenueOptions)_ReadChoiceNumber());

	}




};

