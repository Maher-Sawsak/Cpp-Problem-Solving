// Problems #16 to #20 Solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.



////Problem 16.
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void Read2Numbers(float &Number1, float &Number2) {
//	cout << "Please Enter The First Number which is A :\n";
//	cin >> Number1;
//
//	cout << "Please Enter The Second Number which is D :\n";
//	cin >> Number2;
//
//}
//
//float CalculateRectangleArea(int Number1, int Number2) 
//{
//	float Result = Number1 * sqrt(pow(Number2, 2) - pow(Number1, 2));
//
//	return Result;
//
//}
//void PrintTheResult(float Result) {
//
//	cout << "The Area is :" << Result << endl;
//}
//
//int main()
//{
//
//	float Number1, Number2;
//
//	Read2Numbers(Number1, Number2);
//	PrintTheResult(CalculateRectangleArea(Number1 , Number2));
//
//	return 0;
//}


////problem 17.
//
//#include<iostream>
//using namespace std;
//
//void Read2Numbers(float& a, float& h) {
//	cout << "Please Enter The First Number :\n";
//	cin >> a;
//
//	cout << "Please Enter The Second Number :\n";
//	cin >> h;
//}
//
//float CalculateTriangleArea(int a, int h) {
//	float Result = (a / 2) * h;
//	return Result;
//
//}
//
//void PrintTheResult(float Result){
//
//	cout << "The Triangle Area Is : " << Result;
//}
//
//
//
//
//int main() { 
//	float Number1, Number2;
//	
//	Read2Numbers(Number1, Number2);
//	
//	PrintTheResult(CalculateTriangleArea(Number1, Number2));
//	
//	return 0; }






////problem 18.
//
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//float ReadOneNumbers() {
//
//	float R;
//
//	cout << "Please Enter The radios R :\n";
//	cin >> R;
//	return R;
//}
//
//float CalculateCircleArea(float R) {
//	
//	const float Pi = 3.14159;
//	float Result = Pi * pow(R, 2);
//
//	return Result;
//}
//
//void PrintTheResult(float Result) 
//{
//	cout << "The Area For Circle Is : " << Result;
//
//
//}
//
//int main() { 
//	
//
//	
//	PrintTheResult(CalculateCircleArea(ReadOneNumbers()));
//	
//	
//	
//	return 0; 
//}







////problem 19.
//
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//float ReadOneNumbers() {
//
//	float D;
//
//	cout << "Please Enter The radios D :\n";
//	cin >> D;
//
//	return D;
//
//}
//
//float CircleAreaThroughDiameter(float D) {
//
//	const float Pi = 3.14159;
//
//	float Result = (Pi * pow(D, 2)) / 4;
//
//	return Result;
//}
//
//void PrintTheResult(float Result)
//{
//	cout << endl << "The Area For Circle Is : " << Result << endl;
//
//
//}
//
//int main() {
//
//
//
//	PrintTheResult(CircleAreaThroughDiameter(ReadOneNumbers()));
//
//
//
//	return 0;
//}


//problem 20.
//problem 19.

#include <iostream>
#include<cmath>
using namespace std;

float ReadSquareSide() {

	float A;

	cout << "Please Enter The Square Side A :\n";
	cin >> A;

	return A;

}

float CircleAreaInscribedInSquare(float A) {

	const float Pi = 3.14159;

	float Result = (Pi * pow(A, 2)) / 4;

	return Result;
}

void PrintTheResult(float Result)
{
	cout << endl << "The Circle Area Is : " << Result << endl;


}

int main() {



	PrintTheResult(CircleAreaInscribedInSquare(ReadSquareSide()));



	return 0;
}