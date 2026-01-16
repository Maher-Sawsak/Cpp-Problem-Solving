// Lesson_33_Solving_The_getline()_function.cpp 
//The Problem is when you assign a value for the Number in the console after you runing the code after assign
//a Number you will press a space that space will be assign in the Full_Name Varible to avoide this problem
// you must use a line of code befor the getline() that code is >>>>   cin.ignore(1,'\n');
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Number;
	string Country, Full_Name;


	

	cout << "Please enter the Number : ";
	cin >> Number;

	cout << "Please enter the  Full Name :";
	cin.ignore(1, '\n');// that is the solution for the probleam
	getline(cin, Full_Name);

	cout << "Enter The Country :";
	cin >> Country;




	cout << "The Number is : " << Number <<endl;

	cout << "The Full Name is : " << Full_Name << endl;

	cout << "The Country is : " << Country ;



	return 0;
}