// C++_Level_1_Lesson_43_Else_If_Statment.cpp : This file contains the 'main' function. Program execution begins and ends there.

////problem number 33 in algorithms level 1 .
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int Grade;
//
//	cout << "Please enter the grade :" << endl;
//	cin >> Grade;
//
//	if (Grade <= 100 && Grade >= 90) {
//		cout << "A" << endl;
//	}
//	else if (Grade >= 80 && Grade <= 89) {
//
//		cout << "B" << endl;
//	}
//	else if (Grade <= 79 && Grade >= 70) {
//		cout << "C" << endl;
//	}
//	else if (Grade >= 60 && Grade <= 69) {
//		cout << "D" << endl;
//	}
//	else if (Grade >= 50 && Grade <= 59) {
//		cout << "E" << endl;
//	}
//	else {
//		cout << "F" << endl;
//	}
//	system("pause");// Prevents the console window from closing automatically
//
//	return 0;
//}










////problem number 34 in algorithms level 1 .
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int total_sales;
//	float percentage;
//	
//	cout << "Enter the totale sales amount :" << endl;
//	cin >> total_sales;
//
//	if (total_sales >= 1000000) {
//
//		percentage = 0.01;
//	}
//	else if (total_sales >=500000 ) {
//		percentage = 0.02;
//	}
//	else if (total_sales >= 100000) {
//		percentage = 0.03;
//	
//	}
//	else if(total_sales >= 50000)
//	{
//		percentage = 0.05;
//	}
//
//	else {
//		percentage = 0;
//	
//	}
//
//	int TotalCommission = percentage * total_sales;
//
//	cout << TotalCommission << endl;;
//
//	system("pause");
//
//	return 0;
//}







////problem number 36 in algorithms level 1 .
//#include <iostream>
//
//
//using namespace std;
//int main() {
//
//
//	char operation_type;
//	int number1, number2;
//
//	cout << "Please enter the operation type :\n";
//	cin >> operation_type;
//
//	cout << "Please enter the Number 1:\n";
//	cin >> number1;
//
//	cout << "Please enter the number 2 :" << endl;
//	cin >> number2;
//
//	if (operation_type == '*') {
//		int result;
//		result = number1 * number2;
//		cout << result ;
//	
//	}
//	else if (operation_type == '+') {
//		int result;
//		result = number1 + number2;
//		cout << result;
//	
//	}
//	else if (operation_type == '-') {
//		int result;
//		result = number1 - number2;
//		cout << result;
//	}
//	else if (operation_type == '/') {
//	
//		int result;
//		result = number1 / number2;
//		cout <<  result;
//
//	}
//	else {
//	
//	
//		cout << "wrong operation" << endl;
//	}
//
//	return 0;
//}









//
////problem number 44 in algorithms level 1 .
//
//#include <iostream>
//using namespace std;
//int main() {
//	int day;
//
//	cout << "Enter the day please :\n";
//	cin >> day;
//
//	if (day == 1) {
//		cout << "Sunday\n";
//	}
//	else if (day == 2) {
//
//		cout << "Monday" << endl;
//	}
//
//	else if (day == 3) {
//
//		cout << "Tuesday\n";
//	}
//	else if (day == 4) {
//		cout << "Wednesday\n";
//
//	}
//	else if (day == 5) {
//		cout << "Thursday" << endl;
//
//	}
//	else if (day == 6) {
//
//		cout << "Friday\n";
//
//	}
//	else if (day == 7)
//	{
//		cout << "Saturday" << endl;
//	}
//
//	else {
//	
//		cout << "Wrong Number " << endl;
//	
//	}
//
//
//	system("pause");
//
//	return 0;
//}













//problem number 45 in algorithms level 1 .
#include <iostream>
using namespace std;
int main() {

	int month;

	cout << "Enter the month :" << endl;
	cin >> month;


	if (month == 1) {
		cout << "January" << endl;

	}
	else if (month == 2) {
		cout << "February\n";

	}
	else if (month == 3) {
	
		cout << "March\n";
	}
	else if (month == 4) {
		cout << "April\n";
	}
	else if (month == 5) {
	
		cout << "May\n";
	
	}
	else if (month == 6 ) {

		cout << "June\n";

	}

	else if (month == 7 ) {

		cout << "July\n";
	}
	else if (month == 8 ) {

		cout << "August\n";

	}
	else if (month == 9) {

		cout << "September\n";

	}
	else if (month == 10) {

		cout << "October\n";

	}

	else if (month == 11 ) {

		cout << "November\n";

	}

	else if (month == 12) {

		cout << "December\n";

	}

	else {

		cout << "Wrong Month\n";

	}

	system("pause");
	return 0;
}



















