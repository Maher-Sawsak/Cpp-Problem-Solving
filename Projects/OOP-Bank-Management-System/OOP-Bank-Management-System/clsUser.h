#pragma once
#include <iostream>
#include <iomanip>
#include "clsString.h"	
#include "clsInputValidate.h"
#include <fstream>
#include"clsUtil.h"
#include "clsScreen.h"
#include"clsPerson.h"

class clsUser : public clsPerson
{
	enum enMode { EmptyMode = 0, UpdateMode = 1, AddNewMode = 2 };

    enMode _Mode;
    string _UserName;
    string _Password;
    int _Permissions;

    bool _MarkedForDelete = false;





    static clsUser _ConvertLineToUserObject(string Line, string Seperator = "#//#")
    {
        vector<string> vUserData;
        vUserData = clsString::Split(Line, Seperator);

        return clsUser(enMode::UpdateMode, vUserData[0], vUserData[1], vUserData[2],
            vUserData[3], vUserData[4], vUserData[5], stoi(vUserData[6]));

    }

    static string _ConvertUserObjectToLine(clsUser User, string Separator = "#//#") {
        string Line = "";
        Line += User.FirstName + Separator;      // vClient[0]
        Line += User.LastName + Separator;       // vClient[1]
        Line += User.Email + Separator;          // vClient[2]
        Line += User.Phone + Separator;          // vClient[3]
        Line += User.UserName+ Separator;  // vClient[4]
        Line += User.Password + Separator;        // vClient[5]
        Line += to_string(User.Permissions);  // vClient[6]
        return Line;
    }


    static clsUser _GetEmptyUserObject() {
        return clsUser(enMode::EmptyMode, "", "", "", "", "", "", 0);
    }

    static void _SaveUsersDataToFile(vector<clsUser> ContainingUserData) {

        fstream MyFile;
        MyFile.open("Users.txt", ios::out);//Write mode it will delete all data and write new data the passes by vector.

        string DataLine;
        if (MyFile.is_open()) {


            for (clsUser& C : ContainingUserData) {
                //this will only write the marked as false and by default its false delete will mark the obj I want to delete as true so won't be written. 
                if (C._MarkedForDelete == false) {

                    DataLine = _ConvertUserObjectToLine(C, "#//#");
                    MyFile << DataLine << endl;
                }
            }
            MyFile.close();

        }

    }


    static vector<clsUser> _LoadUsersDataFromFile() {

        fstream MyFile;
        MyFile.open("Users.txt", ios::in);//Read Only Mode In file cuz just loading data.

        vector<clsUser> vUsers;


        if (MyFile.is_open()) {
            string Line;
            while (getline(MyFile, Line)) {

                clsUser Client = _ConvertLineToUserObject(Line);

                vUsers.push_back(Client);

            }

            MyFile.close();
        }

        return vUsers;
    }


    void _AddDataLineToFile(string UserDataByLine) {

        fstream MyFile;
        MyFile.open("Users.txt", ios::out | ios::app);//this mode if the file exist app mode will add to it without deleting all data.

        if (MyFile.is_open()) {


            MyFile << UserDataByLine << endl;
            MyFile.close();

        }
    }

    void _Update() {

        vector<clsUser> vUsers = _LoadUsersDataFromFile();

        for (clsUser& C : vUsers) {

            if (C.UserName == UserName) {
                C = *this;
                break; //I used break for time and also the Account Number Will be unique Number fro each client.
            }
        }
        _SaveUsersDataToFile(vUsers);
    }
    void _AddNew() {

        _AddDataLineToFile(_ConvertUserObjectToLine(*this));

    }





public:



    clsUser(enMode Mode, string FirstName, string LastName,
        string Email, string Phone, string UserName, string Password, int Permissions) : clsPerson(FirstName, LastName, Email, Phone)
    {
        _Mode = Mode;
        _UserName = UserName;
        _Password = Password;
        _Permissions = Permissions;
    
    }


    bool IsEmpty() {

        return (_Mode == enMode::EmptyMode);

    }



    void SetUserName(string UserName) {
        _UserName = UserName;
    }


    string GetUserName() {
        return _UserName;

    }

    _declspec(property(get = GetUserName, put = SetUserName)) string UserName;


    void SetPassword(string Password) {
        _Password = Password;
    }


    string GetPassword() {
        return _Password;

    }

    _declspec(property(get = GetPassword, put = SetPassword)) string Password;



    void SetPermissions(int Permissions) {
        _Permissions = Permissions;
    }


    int GetPermissions() {
        return _Permissions;
    }

    _declspec(property(get = GetPermissions, put = SetPermissions)) int Permissions;




    static clsUser Find(string UserName) {

        fstream MyFile;
        MyFile.open("Users.txt", ios::in);


        string Line;

        if (MyFile.is_open()) {

            while (getline(MyFile, Line)) {

                clsUser User = _ConvertLineToUserObject(Line);

                if (User.UserName == UserName) {

                    MyFile.close();
                    return User;
                }

            }

            MyFile.close();
        }
        //Here it will return enum failed .
        return _GetEmptyUserObject();
    }

    static clsUser Find(string UserName , string Password) {

        fstream MyFile;
        MyFile.open("Users.txt", ios::in);


        string Line;

        if (MyFile.is_open()) {

            while (getline(MyFile, Line)) {

                clsUser User = _ConvertLineToUserObject(Line);

                if (User.UserName == UserName && User.Password == Password) {

                    MyFile.close();
                    return User;
                }

            }

            MyFile.close();
        }
        //Here it will return enum failed .
        return _GetEmptyUserObject();
    }


    bool Delete() {

        vector<clsUser> vUsers;
        vUsers = _LoadUsersDataFromFile();

        for (clsUser& C : vUsers) {

            if (C.UserName == UserName) {

                C._MarkedForDelete = true;
                break;
            }

        }

        _SaveUsersDataToFile(vUsers);

        *this = _GetEmptyUserObject();
        return true;
    }

    static bool IsUserExist(string UserName) {

        clsUser User = clsUser::Find(UserName);

        //This Will cheek the mode is ot empty or not that comes from Find Method.
        return (!User.IsEmpty());

    }


    enum enSaveResult { svFailEmptyObject = 0, svSuccessed = 1, svFaildAccountNumberExists = 2 };


    //This method to save client data to file.
    enSaveResult Save() {


        switch (_Mode) {
            //If the User object empty i will not save it in the file cuz i dont want an empty User in file.
        case  enMode::EmptyMode:

            return enSaveResult::svFailEmptyObject;

        case enMode::UpdateMode:

            _Update();

            return enSaveResult::svSuccessed;

        case enMode::AddNewMode:
            //If The client accountnumber exist so i will return false he can't add client with same account number.
            if (IsUserExist(UserName)) {
                return enSaveResult::svFaildAccountNumberExists;
            }
            else {
                // Change mode to UpdateMode after successful creation to prevent 
               // creating duplicate records if Save() is called again.
                _AddNew();
                _Mode = enMode::UpdateMode;
                return enSaveResult::svSuccessed;
            }

        }

    }


    static clsUser GetAddNewUserObject(string UserName) {
        //This will take the Account Number And put The Mode for it, because i need it in the save method to know, which function should i use?.
        return clsUser(enMode::AddNewMode, "", "", "", "", UserName, "", 0);
    }


    static vector <clsUser> GetUsersList() {

        return _LoadUsersDataFromFile();
    }





};

