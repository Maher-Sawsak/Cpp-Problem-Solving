// Problems #36 to #40.cpp : This file contains the 'main' function. Program execution begins and ends there.


////problem #36
//// My Solution.
//#include <iostream>
//using namespace std;
//
//struct StNumberAndOperationType {
//	int Number1, Number2;
//
//	char OperationTypr;
//
//};
//
//StNumberAndOperationType ReadNumbers() {
//	StNumberAndOperationType NumbersAndOperationType;
//	cout << "Please Enter The First Number :\n";
//	cin >> NumbersAndOperationType.Number1;
//
//	cout << "Please Enter The Second Number :\n";
//	cin >> NumbersAndOperationType.Number2;
//
//	cout << "Please Enter The Operation Type :\n";
//	cin >> NumbersAndOperationType.OperationTypr;
//
//
//	return NumbersAndOperationType;
//}
//
//int CalculationAccordingToTheOperationType(StNumberAndOperationType NumbersAndOperationType) {
//
//	if (NumbersAndOperationType.OperationTypr == '+')
//		return NumbersAndOperationType.Number1 + NumbersAndOperationType.Number2;
//
//	else if (NumbersAndOperationType.OperationTypr == '-')
//	return NumbersAndOperationType.Number1 - NumbersAndOperationType.Number2;
//	
//	else if (NumbersAndOperationType.OperationTypr == '*')
//		return NumbersAndOperationType.Number1 * NumbersAndOperationType.Number2;
//	
//	else if (NumbersAndOperationType.OperationTypr == '/')
//		return NumbersAndOperationType.Number1 / NumbersAndOperationType.Number2;
//}
//
//void PrintTheResult(int Result) {
//
//	cout << "The Result Is : " << Result << endl;
//
//}
//
//
//
//int main()
//{
//
//	PrintTheResult(CalculationAccordingToTheOperationType(ReadNumbers()));
//
//	return 0;
//}


////problem #36
////Doctor's Solution.
//#include<iostream>
//using namespace std;
//
//enum enOperationType { Add = '+', Subtract = '-',
//                       Multiply = '*', Divide = '/'};
//
//float ReadNumber(string Message) {
//
//	float Number = 0;
//	
//	cout << Message << endl;
//	cin >> Number;
//
//	return Number;
//}
//
//enOperationType ReadOperationType() {
//
//	char OT;
//
//	cout << "Please Enter The Operation Type (+ , - , * , /)\n";
//	cin >> OT;
//
//	return (enOperationType)OT;
//}
//
//float Calculate(float Number1 , float Number2, enOperationType OpType) {
//
//	switch (OpType)
//	{
//	case enOperationType::Add:
//		return Number1 + Number2;
//
//	case enOperationType::Subtract:
//			return Number1 - Number2;
//
//	case enOperationType::Multiply:
//			return Number1 * Number2;
//		
//			case enOperationType::Divide:
//			return Number1 / Number2;
//
//			default:
//				return Number1 + Number2;
//	}
//
//}
//int main() {
//
//	float Number1 = ReadNumber("Please Enter The First Number :\n");
//	float Number2 = ReadNumber("Please Enter The Second Number:\n");
//
//	enOperationType OperationType = ReadOperationType();
//
//	cout << Calculate(Number1, Number2, OperationType);
//
//	return 0;
//}


//
////Problem #37.
//#include <iostream>
//#include<string>
//using namespace std;
//
//	float ReadNumber(string Message) {
//
//		float Number = 0;
//
//		cout << Message << endl;
//		cin >> Number;
//
//		return Number;
//}
//
//	int SumNumbers() {
//
//		int Number = 0, Sum = 0, Counter = 1;
//
//		do {
//			Number = ReadNumber("Please Enter The Number :" + to_string(Counter));
//
//			if (Number == -99)
//				break;
//
//			Sum += Number;
//
//			Counter++;
//
//		} while (Number != -99);
//
//		return Sum;
//	}
//int main(){
//
//	cout << SumNumbers();
//
//	return 0;
//}




////problem #38.
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2};
//
//float ReadOneNumber(string Message) {
//
//	float Number = 0;
//
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//
//	return Number;
//}
//
//enPrimeOrNotPrime CheckPrime(int Number) {
//
//
//	int M = round(Number / 2);
//	for (int counter = 2;counter <= M;counter++) {
//	
//		if (Number % counter == 0)
//
//			return enPrimeOrNotPrime::NotPrime;
//	
//	
//	}
//	return enPrimeOrNotPrime::Prime;
//
//
//}
//void PrintNumberType(int Number) {
//	
//
//	switch (CheckPrime(Number))
//	{
//	case enPrimeOrNotPrime::Prime:
//		cout << "The Number Is Prime\n";
//		break;
//	case enPrimeOrNotPrime::NotPrime:
//			cout << "The Number is Not Prime \n";
//			break;
//	}
//}
//
//int main() {
//
//	PrintNumberType(ReadOneNumber("Please Enter a Positive Number :"));
//
//
//	return 0;
//}





////problem #39.
/*#include <iostream>   
#include <string>     

using namespace std;  


float ReadPositiveNumber(string Message)
{
    float Number = 0; 

    
    do
    {
        cout << Message << endl;
        cin >> Number;    
    } while (Number <= 0);
                          
    return Number; 

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill; 
}

int main()
{
    
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

   
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid?");

    cout << endl; 

    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;

    cout << "***************************\n";   

  
    cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

    return 0; */ 



//
//problem #40.
#include <iostream>   
#include <string>     

using namespace std;  

float ReadPositiveNumber(string Message)
{
    float Number = 0;  
    do
    {
        cout << Message << endl;
        cin >> Number;  
    } while (Number <= 0);  

    return Number;  
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1; 
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

    cout << endl;  

    cout << "Total Bill = " << TotalBill << endl;

    cout << "Total Bill After Service and Tax = "
        << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;  
}
