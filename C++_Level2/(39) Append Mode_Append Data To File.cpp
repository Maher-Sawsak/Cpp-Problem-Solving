// Append Mode: Append Data To File

// ios::out | ios::app



#include <iostream>
#include<fstream>
#include<string>
using namespace std;


struct stPersonalInfo {


	string FirstName;
	string LastName;
	int PhoneNumber;


};

int main()
{
	
	stPersonalInfo stInformation;

	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out | ios::app);
	MyFile.clear();
	cout << "Please Enter You First Name: " << endl;
	cin >> stInformation.FirstName;

	cout << "Please Enter Your Last Name : " << endl;
	cin >> stInformation.LastName;

	cout << "Please Enter Your Phone Number :" << endl;
	cin >> stInformation.PhoneNumber;
	
	if (MyFile.is_open()) {
	
		
	
		MyFile << "The First Name is : " << stInformation.FirstName << endl;
		
		MyFile << "The Last Name is : " << stInformation.LastName << endl;

		MyFile << "The Phone Number is  " << stInformation.PhoneNumber << endl;
		MyFile.close();
	}



	return 0;
}
