// Vector Of Structure
/*
Vector is Dynamic Size Not fixed size .
*/
#include <iostream>
#include<vector>

using namespace std;

struct Employee {

	string FirstName  = " ";
	string LastName = " ";
	int Salary  = 0;

};

void ReadVectorEmployee(vector<Employee> &vEmployee) {

	char YesOrNo = ' ';
	do {
		Employee TempEmployee;

		cout << "Please Enter The First Name Of Employee :\n";
		cin >> TempEmployee.FirstName;

		cout << "Please Enter The Last Name Of Employee :\n";
		cin >> TempEmployee.LastName;

		cout << "Please Enter The Salary Of Employee :\n";
		cin >> TempEmployee.Salary;

		vEmployee.push_back(TempEmployee);
	
		cout << endl;
		cout << "Do You Want To Add More Employee Y/N ?\n";
		cin >> YesOrNo;

	} while (YesOrNo == 'Y' || YesOrNo == 'y');


}

void PrintEmployeeVector(vector<Employee> vEmployee) {


	//Ranged Loop
	for (Employee CounterEmployee : vEmployee) {
		cout << "First Name : ";
		cout << CounterEmployee.FirstName << endl;
		
		cout << "Last Name : ";
		cout << CounterEmployee.LastName << endl;
		cout << "The Salary : ";
		cout << CounterEmployee.Salary << endl;
		cout << endl;
	}


}
int main()
{


	vector <Employee> vEmployee;

	ReadVectorEmployee(vEmployee);
	

	PrintEmployeeVector(vEmployee);


	return 0;
}