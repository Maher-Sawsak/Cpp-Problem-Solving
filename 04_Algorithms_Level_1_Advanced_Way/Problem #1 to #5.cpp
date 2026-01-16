// Problem #1 to #5 Solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.

////problem number #1.
//#include <iostream>
//using namespace std;
//void PrintName(string Name) {
//
//    cout << "\n Your Name is : " << Name << endl;
//}
//
//int main()
//{
//
//    PrintName("Maher");
//
//    return 0;
//}


////problem number #2.
//#include <iostream>
//using namespace std;
//
//string ReadName(string Name) {
//
//		cout << "Please Enter Your Name: \n";
//		cin >> Name;
//
//		return Name;
//	}
//
//void PrintName(string Name) {
//	cout << "Your Name Is :" << Name << endl;
//
//}
//int main() {
//
//	string Name;
//
//
//	PrintName(ReadName(Name));
//
//
//
//	return 0;
//}



////problem number #3.
//
////My solution
//#include <iostream>
//using namespace std;
//int sum = 0;
//
//int ReadTheNumber(int Number) {
//
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//	return Number;
//}
//
//void CheckEvenOrOddNumber(int Number) {
//
//	
//
//		if (Number % 2 == 0) {
//
//			cout << "[" << Number << "] :" << " Is Even Number\n";
//
//		}
//		else {
//			cout<<"[" << Number <<"] :" << " Is Odd Number\n";
//		}
//	
//
//}
//
//int main() {
//	int Number = 0;
//	
//	CheckEvenOrOddNumber(ReadTheNumber(Number));
//
//	return 0;
//}





////problem number #3.
////Doctor's Solution.
//#include <iostream>
//using namespace std;
//
//enum enNumberType {Odd = 1, Even = 2};
//
//int ReadNumber()
//{
//	int Num;
//
//	cout << "Please Enter A Number :" << endl;
//	cin >> Num;
//
//	return Num;
//
//}
//
//enNumberType CheckNumberType(int Num) {
//
//	int Result = Num % 2;
//
//	if (Result == 0)
//    return enNumberType::Even;
//
//	else {
//		return enNumberType::Odd;
//	}
//}
//
//void PrintNumberType(enNumberType NumberType) {
//
//	if (NumberType == enNumberType::Even)
//		cout << "\n Number is Even. \n";
//	else 
//		cout << "\n Number is Odd. \n";
//	
//}
//
//
//int main() 
//{
//
//
//	PrintNumberType(CheckNumberType(ReadNumber()));
//
//	return 0;
//}







////problem number #4.
//#include <iostream>
//using namespace std;
//
//struct StInfo
//{
//	int Age;
//	bool HasDriveLicense;
//
//
//};
//
// StInfo ReadInfo() {
//	StInfo Info;
//	cout << "Please Enter The Age :\n";
//	cin >> Info.Age;
//
//	cout << "Please Enter The DriveLicense:\n";
//	cin >> Info.HasDriveLicense;
//
//	return Info;
//}
//
// bool IsAccepted(StInfo Info) {
//
//	 return (Info.Age > 21 && Info.HasDriveLicense);
// }
//
// void PrintResult(StInfo Info) {
// 
//	 if (IsAccepted(Info))
//		 cout << "\n Hired " << endl;
//	 else
//		 cout << "\n Rejected " << endl;
//
// }
//
// int main() {
// 
//	 PrintResult(ReadInfo());
// 
// }










//problem number #5.
#include <iostream>
using namespace std;

struct StInfo
{
	int Age;
	bool HasDriveLicense;
	bool HasRecommendation;

};

 StInfo ReadInfo() {
	StInfo Info;
	cout << "Please Enter The Age :\n";
	cin >> Info.Age;

	cout << "Please Enter The DriveLicense:\n";
	cin >> Info.HasDriveLicense;

	cout << "Please Enter if you have Recommendation :\n";
	cin >> Info.HasRecommendation;

	return Info;
}

 bool IsAccepted(StInfo Info) {
	 if (Info.HasRecommendation) {
		 return true;
	 }
	 else{
	 return (Info.Age > 21 && Info.HasDriveLicense);
	 }
 }

 void PrintResult(StInfo Info) {
 
	 if (IsAccepted(Info))
		 cout << "\n Hired " << endl;
	 else
		 cout << "\n Rejected " << endl;

 }

 int main() {
 
	 PrintResult(ReadInfo());
 
 }



































//problem number #5.
