#pragma once
#include<iostream>
#include<iomanip>
#include <vector>
#include "clsUser.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
class clsAddNewUserScreen : protected clsScreen
{

	static void _ReadUserInfo(clsUser& User) {
	
		 
		 User.FirstName = clsInputValidate::ReadString("\nPlease Enter The First Name : ");
		 User.LastName = clsInputValidate::ReadString("\nPlease Enter The Last Name : ");
		 User.Email = clsInputValidate::ReadString("\nPlease Enter The Email  : ");
		 User.Phone = clsInputValidate::ReadString("\nPlease Enter The Phone : ");
         User.Password = clsInputValidate::ReadString("\nPLease Enter The Password : ");
		 User.Permissions = _ReadPermissionsAndSet();
	
	
	
	}
	static int _ReadPermissionsAndSet() {
        int Permissions = 0;
        char Answer = 'n';


        cout << "\nDo you want to give full access? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            return -1;
        }

        cout << "\nDo you want to give access to : \n ";

        cout << "\nShow Client List? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {


            Permissions += clsUser::enPermissions::pListClients;
        }

        cout << "\nAdd New Client? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pAddNewClient;
        }

        cout << "\nDelete Client? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pDeleteClient;
        }

        cout << "\nUpdate Client? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pUpdateClients;
        }

        cout << "\nFind Client? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pFindClient;
        }

        cout << "\nTransactions? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pTranactions;
        }

        cout << "\nManage Users? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pManageUsers;
        }

        cout << "\nLogin Register? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pLoginRegister;
        }

        return Permissions;

    }
    static void _PrintUser(clsUser User)
    {
        cout << "\nUser Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << User.FirstName;
        cout << "\nLastName    : " << User.LastName;
        cout << "\nFull Name   : " << User.FirstName + " " + User.LastName;
        cout << "\nEmail       : " << User.Email;
        cout << "\nPhone       : " << User.Phone;
        cout << "\nUser Name   : " << User.UserName;
        cout << "\nPassword    : " << User.Password;
        cout << "\nPermissions : " << User.Permissions;
        cout << "\n___________________\n";

    }

public:


    static void ShowAddNewUserScreen() {
    
        _DrawScreenHeader("Add User Screen");
    
        string UserName = "";
    
        UserName = clsInputValidate::ReadString("\nPlease Enter The Username : ");
        
        while(clsUser::IsUserExist(UserName)){
             
           UserName = clsInputValidate::ReadString("The user is already exist. please choose another user name : ");
             
        }
       //I used this because i can't create an empty object to read ingo so this is return an  empty object just containing the username and the mode.
        clsUser NewUser = clsUser::GetAddNewUserObject(UserName);

        //This is filling the object by refrence.
       _ReadUserInfo(NewUser);

       clsUser::enSaveResult SaveResult;

        SaveResult = NewUser.Save();
    
        switch (SaveResult) {
        
        case clsUser::enSaveResult::svSuccessed:
            cout << "\nUser Addeded Successfully :-)\n";
            _PrintUser(NewUser);
            break;
        case clsUser::enSaveResult::svFailEmptyObject:
            cout << "\nError User was not saved because it's Empty.";
            break;
        case clsUser::enSaveResult::svFaildUserNameExists:
            cout << "\nError User was not saved because user name is exist.";
            break;
        }
    
    
    
    }




};

