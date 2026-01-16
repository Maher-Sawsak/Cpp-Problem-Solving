// Problem #06 to #10.cpp 




//// Problem #6. 
//#include <iostream>
//using namespace std;
//
//struct StInfo {
//	string FirstName;
//	string LastName;
//};
//
//StInfo ReadFirstAndLastName() {
//	StInfo Info;
//	cout << "Please Enter The First Name:\n";
//	cin >> Info.FirstName;
//
//	cout << "Please Enter The Last Name :\n";
//	cin >> Info.LastName;
//
//	return Info;
//
//}
//
//string GetFullName(StInfo Info, bool Reversed) {
//	
//string FullName = "";
//
//if (Reversed == true)
//FullName = Info.LastName + " " + Info.FirstName;
//
//else {
//	FullName = Info.FirstName + " " + Info.LastName;
//}
//
//	return FullName;
//
//}
//
//void PrintFullName(string FullName) {
//
//	cout << "\n Your Full Name Is : " << FullName << endl;
//
//}
//
//
//int main()
//{
//
//PrintFullName(GetFullName(ReadFirstAndLastName(), true));
//
//}




//// Problem #7. 
//#include <iostream>   
//#include <string>     
//
//using namespace std;  
//
//int ReadNumber()
//{
//    int Num;  
//
//    cout << "Please enter a number? " << endl;
//
//    cin >> Num;  
//
//    return Num;  
//}
//
//
//float CalculateHalfNumber(int Num)
//{
//    return (float)Num / 2;  // Perform division and return the result as a float.
//}
//
//// Function: PrintResults
//// Purpose: Constructs and displays a message showing half of the given number.
//// Parameter: Num - the original integer number.
//void PrintResults(int Num)
//{
//    // Construct the output message showing the original number and its half value.
//    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
//
//    // Print the result message.
//    cout << endl << Result << endl;
//}
//
//// Main function: Program entry point.
//int main()
//{
//    // Read a number from the user, calculate its half, and print the result.
//    PrintResults(ReadNumber());
//
//    return 0;  // Return 0 to indicate successful execution.
//}




//// Problem #8
//#include<iostream>
//using namespace std;
//
//enum enPassFail { pass = 1, Fail = 2 };
//
//int ReadMark() {
//	int mark;
//	cout << "Please enter the mark: \n";
//	cin >> mark;
//
//	return mark;
//}
//
//enPassFail MarkComparison(int mark) {
//
//
//	if (mark >=50) {
//
//		return enPassFail::pass;
//	
//	}
//	else {
//
//		return enPassFail::Fail;
//	
//	}
//
//
//}
// 
//void PrintResult(int mark) {
//
//	if (MarkComparison(mark) == enPassFail::pass)
//		cout << "Pass\n";
//	else
//		cout << "Failed\n";
//}
//
//
//int main() { 
//
//	PrintResult(ReadMark());
//	
//	return 0;
//}




//// Problem #9.
////My Solution.

//#include <iostream>
//using namespace std;
//
//struct stNumber {
//	int Num1;
//	int Num2;
//	int Num3;
//};
//
//stNumber ReadNumber() {
//	stNumber Numbers;
//	cout << "Please enter the first number :\n";
//	cin >> Numbers.Num1;
//
//	cout << "Please enter the second number :\n";
//	cin >> Numbers.Num2;
//
//	cout << "Please enter the third number :\n";
//	cin >> Numbers.Num3;
//
//	return Numbers;
//}
//
//int SumOfNumbers(stNumber Numbers) {
//
//	 int Result = Numbers.Num1 + Numbers.Num2 + Numbers.Num3;
//
//	 return Result;
//}
//
//void PrintTheResult(int Result) {
//
//	cout << "The Sum Is :" << Result;
//
//}
//
//
//
//int main() {
//
//
//	PrintTheResult(SumOfNumbers(ReadNumber()));
//
//	return 0;
//}


//
//// Problem #9.
////Doctor's Solution 
//
//#include<iostream>
//using namespace std;
//void ReadNumbers(int &Num1, int &Num2, int &Num3)
//{
//
//	cout << "Please enter the first number :\n";
//	cin >> Num1;
//
//	cout << "Please enter the second number :\n";
//	cin >> Num2;
//
//	cout << "Please enter the third number :\n";
//	cin >> Num3;
//
//}
//
//int SumOfNumbers(int Num1,int Num2,int Num3) {
//	return Num1 + Num2 + Num3;
//}
//void PrintTotal(int Total) {
//	cout << "The Total Number Is :" << Total << endl;
//
//}
//
//
//int main() {
//	int Num1, Num2, Num3;
//	ReadNumbers(Num1, Num2, Num3);
//	PrintTotal(SumOfNumbers(Num1, Num2, Num3));
//	return 0;
//}



//problem 10.
#include<iostream>
using namespace std;

void ReadTheMarks(int& Mark1, int& Mark2, int& Mark3) {

	cout << "Enter the first mark :\n";
	cin >> Mark1;

	cout << "Please enter the second mark :\n";
	cin >> Mark2;

	cout << "Please enter the third mark :\n";
	cin >> Mark3;

}

int CalculateSumOfMarks(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;

}

float CalculateAverageOfMarks(int Mark1, int Mark2, int Mark3) {

	return (float)CalculateSumOfMarks(Mark1, Mark2, Mark3) / 3;
}

void PrintTheResult(float Average) {

	cout << "The Average is : " << Average << endl;

}

int main() {
	int Mark1, Mark2, Mark3;
	ReadTheMarks(Mark1, Mark2, Mark3);

	PrintTheResult(CalculateAverageOfMarks(Mark1, Mark2, Mark3));
	return 0;
}



