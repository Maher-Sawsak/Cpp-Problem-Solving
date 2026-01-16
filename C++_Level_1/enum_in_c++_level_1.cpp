#include <iostream>


enum enColor { Red, Green, Yellow, Blue };
enum enGendor { Male, Female };
enum enMaritalStatus { Single, Married };






struct  stAddress {
	
	string StreatName;
	string BuildingNo;
	string	ApartmentNo;
	string ZipCode;

};
struct stContactInfo {

	int PhoneNumber;
	string Email;
	string Insta;
	stAddress Address;
};

struct stPersonalInfo {

	string FirstName;
	string LastName;
	string Country;
	enMaritalStatus MaritalStatus;
	stContactInfo ContactInfo;
};



using namespace std;


int main() {



	stPersonalInfo  Person1;


	Person1.ContactInfo.Address.ApartmentNo = "232";


	Person1.ContactInfo.Email = "mahersawsak@gmail.com";

	Person1.ContactInfo.Address.StreatName = "King Kaled ";

			Person1.MaritalStatus = enMaritalStatus::Married;;




	cout << Person1.ContactInfo.Address.ApartmentNo << endl ;

	cout <<  Person1.ContactInfo.Email << endl;

	cout << Person1.ContactInfo.Address.StreatName;

	cout << (Person1.MaritalStatus == enMaritalStatus::Married ? "Married" : "Single") << endl;
	return 0;
}