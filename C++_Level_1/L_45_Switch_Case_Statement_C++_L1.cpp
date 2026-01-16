//// L_45_Switch_Case_Statement_C++_L1.cpp : This file contains the 'main' function. Program execution begins and ends there.


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
//	int result;
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
//	switch (operation_type) {
//	case '*':
//		result = number1 * number2;
//		cout << result;
//		break;
//
//	case '+':
//		result = number1 + number2;
//		cout << result;
//		break;
//
//	case '-':
//		result = number1 - number2;
//		cout << result;
//		break;
//	case '/':
//		result = number1 / number2;
//		cout << result;
//		break;
//	
//	default:
//
//		cout << "Wrong operation or number\n";
//} 
// 
//
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
//	switch (day) {
//	case 1 :
//		cout << "Sunday\n";
//			break;
//	case 2 :
//		cout << "Monday\n";
//
//		break;
//	case 3:
//		cout << "Tuesday\n";
//			break;
//	case 4:
//		cout << "Wednesday\n";
//		break;
//	case 5:
//		cout << "Thursday" << endl;
//		break;
//	case 6:
//		cout << "Friday";
//		break;
//
//	case 7:
//		cout << "Saturday";
//		break;
//	default:
//		cout << "Not a week day!";
//
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



	switch (month)
	{
	case 1:
			cout << "January" << endl;
			break;
		case 2:
			cout << "February\n";
			break;
		case 3:
			cout << "March\n";
		case 4:
			cout << "April\n";

			break;
		case 5: 
			cout << "May\n";

			break;
		case 6:
			cout << "June\n";

			break;
		case 7:
			cout << "July\n";

			break;
		case 8:
			cout << "September\n";

			break;
		case 9:
			cout << "September\n";

			break;
		case 10:
			cout << "October\n";

			break;
		case 11:
			cout << "November\n";

			break;
    	case 12:
			cout << "December\n";

			break;

	default:
		cout << "Wrong Month\n";

		break;
	}


	system("pause");
	return 0;
}










