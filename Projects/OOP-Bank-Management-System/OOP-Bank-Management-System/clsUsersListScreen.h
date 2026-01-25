#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include "clsUser.h"
#include "clsPerson.h"
#include <vector>
#include <iomanip>

class clsUsersListScreen : protected clsScreen
{
    static void PrintUserRecordLine(clsUser User)
    {

        cout << setw(8) << left << "" << "| " << setw(15) << left << User.UserName;
        cout << "| " << setw(20) << left << User.FirstName + " " + User.LastName;
        cout << "| " << setw(12) << left << User.Phone;
        cout << "| " << setw(20) << left << User.Email;
        cout << "| " << setw(10) << left << User.Password;
        cout << "| " << setw(12) << left << User.Permissions;

    }


public :

    static void ShowUserListScreen() {
        vector <clsUser> vUsers;
        vUsers = clsUser::GetUsersList();

        _DrawScreenHeader("User List Screen","\t    (" + to_string(vUsers.size()) + ") User(s).");

         
    
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(12) << "UserName";
        cout << "| " << left << setw(25) << "Full Name";
        cout << "| " << left << setw(12) << "Phone";
        cout << "| " << left << setw(20) << "Email";
        cout << "| " << left << setw(10) << "Password";
        cout << "| " << left << setw(12) << "Permissions";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;
    
    
    
        if (vUsers.size() == 0) {
        
            cout << "\n\t\t\t\tNo Users A valiable in the system!! ";
        
        }
        else {
        
            for (clsUser& C : vUsers) {
                PrintUserRecordLine(C);
                cout << endl;
            }
        
        
        }
    
    
    
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "____________________________________________\n" << endl;

    
    
    }








};

