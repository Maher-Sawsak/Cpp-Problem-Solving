// L_38_Structures_and_fnction_Re-usability.cpp 


#include <string>
#include <iostream>
using namespace std;

struct StrInfo
{

	string Name;
	int Age;
	string City;
	string Country;
	int Monthly_Salary;
	int Yearly_Salary;
	char Gender;
	bool Married;
};

void CinInfo(StrInfo &info) {

	cout << "Enter the name :\n";

	cin.ignore(1, '\n');
	getline (cin , info.Name);

	cout << "Enter the age :\n";
	cin >> info.Age;

	cout << "Enter the country :\n";
	cin >> info.Country;

	cout << "Enter your city : \n";
	cin >> info.City;

	cout << "Enter the monthly salary :\n";
	cin >> info.Monthly_Salary;

	cout << "Enter the yearly salary :\n";
	cin >> info.Yearly_Salary;

	cout << "Enter the gander M or F "<<endl;
	cin >> info.Gender;

	cout << "Enter the Married situates 1 or 0\n";
	cin >> info.Married;


}

void PrintInfo(StrInfo info) {
	cout << "************************" << endl;
	cout << "Name : " << info.Name <<"\n";
	cout << "Age : " << info.Age << "\n";
	cout << "City : " << info.City << "\n";
	cout << "Country : " << info.Country << "\n";
	cout << "Monthly Salary : " << info.Monthly_Salary <<"\n";
	cout << "Yearly Salary : " << info.Yearly_Salary << "\n";
	cout << "Gander : " << info.Gender << endl;
	cout << "Married : " << info.Married << endl;
	cout << "************************" << endl;

}




int main()
{
	StrInfo Person1;
	CinInfo(Person1);
	PrintInfo(Person1);

	StrInfo Person2;
	CinInfo(Person2);
	PrintInfo(Person2);
}