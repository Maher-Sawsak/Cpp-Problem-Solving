// L41_Array_of_structure_C++_Lev1.cpp

#include <iostream>
#include <string>


using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo& Info)
{


    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;


    cout << "Please enter LastName?\n";
    cin >> Info.LastName;


    cout << "Please enter Age?\n";
    cin >> Info.Age;


    cout << "Please enter Phone?\n";
    cin >> Info.Phone;


}

void PrintInfo(strInfo Info)
{


    cout << "\n**********************************\n";


    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;


    cout << "\n**********************************\n";




}

void ReadPersonsInfo(strInfo Persons[100], int &NumberOfPersons)
{

    for (int i = 0; i <= NumberOfPersons - 1;i++) {
       ReadInfo(Persons[i]);

    }
}

void PrintPersonsInfo(strInfo Persons[100] , int &NumberOfPersons)
{
    for (int i = 0; i <= NumberOfPersons - 1; i++) {
    
        PrintInfo(Persons[i]);
    
    }
}

int main()
{

    int NumberOfPersons;
    cout << "Enter The Number Of Persons :\n";
    cin >> NumberOfPersons;
    strInfo Persons[100];


    ReadPersonsInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);

    return 0;
}