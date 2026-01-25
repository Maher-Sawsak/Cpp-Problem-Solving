#pragma once
#include <iostream>
#include"clsUtil.h"
#include"clsBankClient.h"
#include "clsScreen.h"
#include "clsInputValidate.h"
#include"clsMainScreen.h"
#include <iomanip>
#include"clsUsersListScreen.h"
#include "clsAddNewUserScreen.h"
#include "clsDeleteUserScreen.h"
#include "clsUpdateUserScreen.h"
class clsManageUsers : protected clsScreen
{



    enum enManageUsersMenueOptions {
        eListUsers = 1, eAddNewUser = 2, eDeleteUser = 3,
        eUpdateUser = 4, eFindUser = 5, eMainMenue = 6
    };


    static void _GoBackToManageUserMenue() {
        cout << "\n\nPress any key to go back to manage user menue...";
        system("pause>0");
        ShowManageUsersMenue();
    }

    static int ReadManageUsersMenueOption() {
        int Choice = clsInputValidate::ReadIntNumberBetween(1, 6, "\t\t\t\t\tInvalid!! Enter Number Between [1 to 6] ? ", "\t\t\t\t\tChoose what do you want to do ? [1 to 6] ? ");

        return Choice;

    }

    static void _ShowListUserScreen() {

       // cout << "List User Will Be Here :-) ";
        clsUsersListScreen::ShowUserListScreen();
    }

    static void _ShowAddNewUserScreen() {
        clsAddNewUserScreen::ShowAddNewUserScreen();

    }

    static void _ShowDeleteUserScreen() {
        clsDeleteUserScreen::ShowDeleteClient();

    }

    static void _ShowUpdateUserScreen() {
        //cout << "Update User Will Be Here : -) ";
        clsUpdateUserScreen::ShowUpdateClient();

    }

    static void _ShowFindUserScreen() {
        cout << "Find User Will Be Here :-) ";


    }


    static void _PerformManageUsersMenueOption(enManageUsersMenueOptions Choice) {

        switch (Choice) {

        case enManageUsersMenueOptions::eListUsers:
            system("cls");
            _ShowListUserScreen();
            _GoBackToManageUserMenue();
            break;

        case enManageUsersMenueOptions::eAddNewUser:
            system("cls");
            _ShowAddNewUserScreen();
            _GoBackToManageUserMenue();
            break;

        case enManageUsersMenueOptions::eDeleteUser:
            system("cls");
            _ShowDeleteUserScreen();
            _GoBackToManageUserMenue();
            break;

        case enManageUsersMenueOptions::eUpdateUser:
            system("cls");
            _ShowUpdateUserScreen();
            _GoBackToManageUserMenue();
            break;

        case enManageUsersMenueOptions::eFindUser:
            system("cls");
            _ShowFindUserScreen();
            _GoBackToManageUserMenue();
            break;

        // here without {} curly pracits will give us an error for mainMenue Be Carefull.
        case enManageUsersMenueOptions::eMainMenue: {
            //do nothing here the main screen will handle it :-) ;
            }
            

        }
        
    }














public:

    static void ShowManageUsersMenue() {

        system("cls");
        _DrawScreenHeader("Manage User Screen");

        cout << setw(39) << left << "" << "===========================================\n";
        cout << setw(39) << left << "" << "\t\t  Manage Users Menue\n";
        cout << setw(39) << left << "" << "===========================================\n";
        cout << setw(39) << left << "" << "\t[1] List Users.\n";
        cout << setw(39) << left << "" << "\t[2] Add New User.\n";
        cout << setw(39) << left << "" << "\t[3] Delete User.\n";
        cout << setw(39) << left << "" << "\t[4] Update User.\n";
        cout << setw(39) << left << "" << "\t[5] Find User.\n";
        cout << setw(39) << left << "" << "\t[6] Main Menue.\n";
        cout << setw(39) << left << "" << "===========================================\n";

        _PerformManageUsersMenueOption((enManageUsersMenueOptions)ReadManageUsersMenueOption());


    }







};
