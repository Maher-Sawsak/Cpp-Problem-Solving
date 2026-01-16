// Lesson #50 - While Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.



//#include <iostream>
//using namespace std;
//int main()
//{
//// print from 1 to 5 by for loop
//
//	cout << "This by for loop:\n";
//	for (int i = 1; i <= 5; i++) {
//		cout << i << endl;
//	
//	}
//
//
//	//print from 1 to 5 by while loop
//	cout << "This by while loop : \n";
//	int i = 1;
//	while (i <= 5) {
//		cout << i << endl;
//		i++;
//	}
//
//	return 0;
//}


////The Second Code For Taken Just Positive Number.
//#include <iostream>
//using namespace std;
//
//int main() {
//	int Number;
//
//	cout << "Please Enter a positive Number: \n";
//	cin >> Number;
//
//	while (Number < 0) {
//		cout << "Wrong Number!!  Please Enter A Positive Number :\n";
//		cin >> Number;
//	}
//
//	cout << "The Number You Entered Is :" << "[" << Number << "]\n";
//
//	return 0;
//
//
//}



#include<iostream>
using namespace std;


int ReadIntNumberInRange(int From,int To) {

	int Number;
	cout << "Please Enter The Number Between : " << From << " & " << To << endl;
	cin >> Number;

	while (Number < From || Number > To) 
	{
		cout << "Please Enter A Valid Number :\n";
		cin >> Number;
	
	}
	return Number;

}

int main() {

	int Number;

	cout<<ReadIntNumberInRange(18,45);

	return 0;




}

















