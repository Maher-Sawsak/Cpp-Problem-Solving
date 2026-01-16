//// L_44_Enums _With_If_Statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//
//
//enum enCountryChoice { syria = 1, jordan = 2, saudi = 3};
//
//
//int main()
//{
//	cout << "*******************************\n";
//	cout << "Please Enter your choice \n";
//	cout << "(1) Syria \n";
//	cout << "(2) Jordan \n";
//	cout << "(3) Saudi" << endl;
//	cout << "Please Enter Your Choice :" << endl;
//
//	int c;
//	enCountryChoice country;
//	cin >> c;
//	country = (enCountryChoice)c;////that is casting to stor the int in enum.
//
//	if (country == enCountryChoice::syria) {
//		cout << "Syria\n";
//
//	}
//
//	else if (country == enCountryChoice::jordan)
//	{
//		cout << "Jourdan\n";
//	}
//	else if (country == enCountryChoice::saudi) {
//
//		cout << "Saudi\n";
//	}
//	else {
//		cout << "Wrong Choice\n";
//	};
//
//	system("pause");
//	return 0;
//}




//
////the color code 
//#include <iostream>
//using namespace std;
//
//enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };
//
//
//int main() {
//
//	cout << "************************************\n";
//
//	cout << "please chose the number of your color :\n";
//	cout << "(1)Red\n";
//	cout << "(2)Blue\n";
//	cout << "(3)Green\n";
//	cout << "(4)Yellow\n";
//
//	cout << "************************************\n";
//
//	cout << "Your choise?\n";
//
//	int c;
//	enScreenColor Color;
//
//	cin >> c;
//
//	Color = (enScreenColor)c;//that is casting take the integer the casting to enum.
//
//
//	if (Color == enScreenColor::Red) {
//	
//	
//	
//		system("color 4f");
//	
//	
//	}
//	else if (Color == enScreenColor::Blue) {
//		system("color 1f");
//	}
//
//
//	else if (Color == enScreenColor::Yellow) {
//		system("color 6f");
//	
//	
//	}
//	else if (Color == enScreenColor::Green) {
//		system("color 2f");
//	}
//
//	else {
//		system("color 4f");
//	}
//
//	return 0;
//}