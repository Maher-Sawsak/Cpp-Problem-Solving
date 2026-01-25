#pragma once
#include<iostream>
#include<iomanip>
#include <vector>
#include "clsUser.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
class clsUpdateUserScreen : protected clsScreen
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

        cout << "\nShow User List? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {


            Permissions += clsUser::enPermissions::pListClients;
        }

        cout << "\nAdd New User? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pAddNewClient;
        }

        cout << "\nDelete User? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pDeleteClient;
        }

        cout << "\nUpdate User? y/n? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            Permissions += clsUser::enPermissions::pUpdateClients;
        }

        cout << "\nFind User? y/n? ";
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







public :
	static void ShowUpdateClient() {


		_DrawScreenHeader("Update User Screen");

		string UserName = " ";

		UserName = clsInputValidate::ReadString("Please Enter The User Name : ");

		while (!clsUser::IsUserExist(UserName)) {

			UserName = clsInputValidate::ReadString("Invalid User Name!! Please Enter Again : ");

		}
        clsUser User = clsUser::Find(UserName);
        _PrintUser(User);


		char Answer = 'n';

		cout << "Are you sure you want to update this user data ? y/n? ";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y') {
			cout << "\n---------------------------------\n";
			cout << "          Update User            ";
			cout << "\n---------------------------------\n";
			_ReadUserInfo(User);


            clsUser::enSaveResult SaveResult;

			//Save will Return enum if failed to save data in the file or done successfully. 
			SaveResult = User.Save();


			switch (SaveResult)
			{
			case clsUser::enSaveResult::svSuccessed:
				cout << "\nUpdate Done Successfully , Thanks :-) \n";
				break;
			case  clsUser::enSaveResult::svFailEmptyObject:
				cout << "\nUpdate Failed, Maybe The User Data Is Empty\n";
				break;
			}

		}



	}
};

