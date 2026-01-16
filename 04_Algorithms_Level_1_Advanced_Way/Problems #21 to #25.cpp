// Problems #21 to #25.cpp : This file contains the 'main' function. Program execution begins and ends there.


////problem 21.
//#include <iostream>
//#include<cmath>
//using namespace std;
//float ReadOneNumber() {
//
//	float L;
//	cout << "Please Enter The Number which is L :\n";
//	cin >> L;
//
//	return L;
//}
//
//float CircleAreaAlongCircumference(float L) {
//
//	const float Pi = 3.14159;
//
//	float Area = pow(L,2) / (4*Pi);
//
//	return Area;
//}
//
//void PrintCircleArea(float Area) {
//
//	cout << "\nThe Circle Area Along Circumference Is :" << Area << endl;
//}
//
//int main()
//{
//	PrintCircleArea(CircleAreaAlongCircumference(ReadOneNumber()));
//
//	return 0;
//}


////problem 22.
//
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//void Read2Number(float &a, float &b) {
//
//	cout << "Please Enter The Number which is A:\n";
//	cin >> a;
//
//	cout << "Please Enter The Number which is B :\n";
//	cin >> b;
//
//	
//
//}
//
//float CircleAreaInscribedIsoscelesTriangle(float a , float b) {
//
//	const float Pi = 3.14159;
//	float Area = (Pi * (pow(b, 2) / 4)) * ((2 * a - b) / (2 * a + b));
//
//		return Area;
//}
//void PrintTheArea(float Area) {
//	cout << "\nThe Circle Area Inscribed Isosceles Triangle Is:" << Area << endl;
//
//}
//
//int main() {
//	float Number1, Number2;
//	Read2Number(Number1,Number2);
//
//	PrintTheArea(CircleAreaInscribedIsoscelesTriangle(Number1, Number2));
//
//
//	return 0;
//}



////problem 23.
//#include <iostream>
//#include<cmath>
//
//using namespace std;
//
//void Read3Numbers(float& a, float& b, float& c) {
//	cout << "Please Enter The Number Which Is A :\n";
//	cin >> a;
//
//	cout << "Please Enter The Number Which Is B :\n";
//	cin >> b;
//
//	cout << "Please Enter The Number which is C :\n";
//	cin >> c;
//
//}
//
//float CalculateCircleAreaDescribedAroundAnArbitraryTriangle(float a, float b, float c) {
//
//	const float Pi = 3.14159;
//
//	float P = (a + b + c) / 2;
//
//	float T;
//
//	T = ((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))));
//	
//	float Area = Pi * pow(T, 2);
//
//	return Area;
//}
//
//void PrintTheArea(float Area) {
//
//	cout << "Circle Area Described Around An Arbitrary Triangle :" << Area<<endl;
//
//}
//
//
//int main() {
//	float Number1, Number2,Number3;
//
//	Read3Numbers(Number1, Number2 , Number3);
//
//
//	PrintTheArea(CalculateCircleAreaDescribedAroundAnArbitraryTriangle(Number1, Number2, Number3));
//
//
//
//	return 0;
//}


////problem 24.
//// My Solution
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//enum enValidationAge {ValidAge = 1,InvalidAge = 2};
//
//int ReadAge() 
//{
//	int Age;
//	cout << "Please Enter Your Age : \n";
//	cin >> Age;
//
//	return Age;
//}
//
//enValidationAge CheckAge(int Age) {
//	if (Age >= 18 && Age <= 45)
//
//		return enValidationAge::ValidAge;
//	else
//		return enValidationAge::InvalidAge;
//}
//
//void PrintTheStatusOfAge(int Age) {
//
//	if (Age == enValidationAge::ValidAge)
//		cout << "\nValid Age \n";
//	else
//		cout << "\nInvalid Age \n";
//}
//
//
//int main() {
//	PrintTheStatusOfAge(CheckAge(ReadAge()));
//
//}





////problem 24.
////Doctor solution
//#include<iostream>
//using namespace std;
//
//int ReadAge() {
//	int Age;
//	
//	cout << "Please Enter Your Age :\n";
//	cin >> Age;
//
//	return Age;
//}
//
//bool ValidateAgeInRange(int Number,int From,int To) {
//
//	return (Number >= From && Number <= To);
//
//}
//void PrintResult(int Age) {
//
//	if (ValidateAgeInRange(Age, 18, 45))
//		cout << Age << "\nIs A Valid Age \n";
//	else
//		cout << Age << "\nIs Invalid Age \n";
//
//}
//
//int main() {
//
//	PrintResult(ReadAge());
//
//
//}




////problem 25.
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//enum enValidationAge {ValidAge = 1,InvalidAge = 2};
//
//int ReadAge() 
//{
//	int Age;
//	cout << "Please Enter Your Age : \n";
//	cin >> Age;
//
//	return Age;
//}
//int CheckReadingAgeCondition(int Age) {
//	while (Age < 18 || Age > 45)
//	{
//		cout << "Please Enter A valid Age :\n";
//		cin >> Age;
//	}
//
//	return Age;
//}
//
//enValidationAge CheckAge(int Age) {
//	if (Age >= 18 && Age <= 45)
//
//		return enValidationAge::ValidAge;
//	else
//		return enValidationAge::InvalidAge;
//}
//
//void PrintTheStatusOfAge(int Age) {
//
//	if (Age == enValidationAge::ValidAge)
//		cout << "\nValid Age \n";
//	else
//		cout << "\nInvalid Age \n";
//}
//
//
//int main() {
//	PrintTheStatusOfAge(CheckAge(CheckReadingAgeCondition(ReadAge())));
//
//}


//problem 25.
//Doctor solution
#include<iostream>
using namespace std;

int ReadAge() {
	int Age;

	cout << "Please Enter  Age Between 18 & 45 :\n";
	cin >> Age;

	return Age;
}

bool ValidateAgeInRange(int Number, int From, int To) {

	return (Number >= From && Number <= To);

}

int Re_askReadingAge(int From, int To) {
	
	int Age = 0;
	do {
		Age = ReadAge();
	} while (!ValidateAgeInRange(Age, From, To));

	return Age;
}

void PrintResult(int Age) {

	cout << "Your Age is :" << Age << endl;

}

int main() {

	PrintResult(Re_askReadingAge(18,45));


}