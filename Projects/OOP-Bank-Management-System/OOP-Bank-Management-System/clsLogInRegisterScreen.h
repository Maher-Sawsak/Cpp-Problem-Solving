#pragma once
#include "clsScreen.h"
#include "clsUser.h"

class clsLogInRegisterScreen : protected clsScreen
{

    static void PrintUserRecordLine(clsUser::stLoginRegisterRecord UserRegisterData)
    {

        cout << setw(8) << left << "" << "| " << setw(37) << left << UserRegisterData.DateAndTime;
        cout << "| " << setw(20) << left << UserRegisterData.UserName;
        cout << "| " << setw(25) << left << UserRegisterData.Password;
        cout << "| " << setw(20) << left << UserRegisterData.Permissions;

    }

    

public:
  
    static void ShowLoginRegisterScreen() {

        if (!CheckAccessRights(clsUser::enPermissions::pLoginRegister)) {
            return;
        }


        vector <clsUser::stLoginRegisterRecord> stRegisterUserData = clsUser::GetLoginRegisterList();


        _DrawScreenHeader("Login Register Screen   ", "(" + to_string(stRegisterUserData.size()) + " ) User(s)");

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(37) << "Date & Time";
        cout << "| " << left << setw(20) << "User Name";
        cout << "| " << left << setw(25) << "Password";
        cout << "| " << left << setw(20) << "Permissions";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        if (stRegisterUserData.size() == 0) {
            cout << "\t\t\t\tNo Register User Available In the System!";
        }
        else {

            for (clsUser::stLoginRegisterRecord RegUserData : stRegisterUserData)
            {

                PrintUserRecordLine(RegUserData);
                cout << endl;
            }

        }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;



    }
	
};

