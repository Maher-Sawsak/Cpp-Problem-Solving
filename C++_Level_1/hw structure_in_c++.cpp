// hw structure_in_c++.cpp

#include <iostream>
using namespace std;

struct contact_inf
{
	int phone_number;
	string email;
	string instgram;
	string facebook;

};



struct per_inf
{
	string Name;
	int date_of_birth;
	int Age , mothly_salary , yearly_salary;
	string country;
	string father_name;
	string mother_name;
	contact_inf contact;
	char gender;
	bool married;
};



int main()
{
	per_inf Maher;
	cout << "please enter the name :";
	cin >> Maher.Name;

	cout << "please enter your age :";
	cin >> Maher.Age;


	cout << "please enter you nationality :";
	cin >> Maher.country;

	cout << "please enter your monthly salary :";
	cin >> Maher.mothly_salary;

	cout << "Please enter your yearly salary :";
	cin >> Maher.yearly_salary;

	cout << "Please enter your gender Male = M Female = F  :";
	cin >> Maher.gender;

	cout << "please enter 1 if your are married and 0 if you are not :";
	cin >> Maher.married;

	cout << "please enter your date of birth :";
	cin >> Maher.date_of_birth;

	cout << "please enter you father's name :";
	cin >> Maher.father_name;

	cout << "please enter you mother's name :";
	cin >> Maher.mother_name;

	cout << "please enter your phone number :";
	cin >> Maher.contact.phone_number;

	cout << "please enter your email :";
	cin >> Maher.contact.email;

	cout << "Name: " << Maher.Name << endl << "Age: " << Maher.Age << endl << "nationality: " << Maher.country << endl;
		
		cout<< "Monthly Salary: " << Maher.mothly_salary << endl << "Yearly Salary: " << Maher.yearly_salary << endl;
		cout << "Gender: " << Maher.gender << endl << "Married" << Maher.married << endl << "date of birth: " << Maher.date_of_birth << endl;
		
		cout<< "father's name : " << Maher.father_name << endl << "Monther's name: " << Maher.mother_name << endl;

	cout << "phone number: " << Maher.contact.phone_number << endl << "email: " << Maher.contact.email << endl;
			

	return 0;






}
