// Problems #31 to #35.cpp : This file contains the 'main' function. Program execution begins and ends there.


////problem #31.
//#include <iostream>
//using namespace std;
//
//
//int ReadOneNumber() {
//	int Number;
//
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//
//	return Number;
//}
//
//void PowersOf2_3_4(int Number) {
//
//	int a = Number * Number;
//
//	int b = a * Number;
//
//	int c = b * Number;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//}
//
//
//
//int main()
//{
//	PowersOf2_3_4(ReadOneNumber());
//
//	return 0;
//}


////problem #32.
//#include<iostream>
//using namespace std;
//
//int ReadNumber() {
//
//	int Number;
//
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//
//	return Number;
//}
//
//int ReadPower() {
//
//	int M;
//	cout << "Please Enter The Power :\n";
//	cin >> M;
//
//	return M;
//}
//
//
//int CalculateThePowerOfNumber(int Number ,int M) {
//
//	//M it's the Power value.
//	if (M == 0)
//	{
//		return 1;//if the return executed will be out of the function not continue.
//
//	}
//
//
//	int sum = 1;
//
//	for (int i = 1;i <= M;i++) {
//	
//		sum = sum * Number;
//	}
//
//	return sum;
//}
//
//
//void PrintTheResult(int Result) {
//
//	cout << "The Result Is :\n" << Result;
//
//}
//int main() {
//	int Number = 0, M = 0;
//	
//	
//
//	PrintTheResult(CalculateThePowerOfNumber(ReadNumber(),ReadPower()));
//
//	return 0;
//}



////problem #33.
////My Solution
//
//#include<iostream>
//using namespace std;
//
//enum enStatusGrade { A = 1, B = 2, C = 3, D = 4, E = 5, F = 6};
//
//
//int ReadGrade(){
//
//	int Grade;
//	cout << "PLease Enter The Grade :\n";
//	cin >> Grade;
//
//	return Grade;
//
//}
//
//
//enStatusGrade CalculateGrade(int Grade) {
//
//	if (Grade <= 100 && Grade >= 90)
//		return enStatusGrade::A;
//
//	else if (Grade <= 89 && Grade >= 80)
//		return enStatusGrade::B;
//
//	else if (Grade <= 79 && Grade >= 70)
//		return enStatusGrade::C;
//
//	else if (Grade <= 69 && Grade >= 60)
//		return enStatusGrade::D;
//
//	else if (Grade <= 59 && Grade >= 50)
//		return enStatusGrade::E;
//
//	else
//		return enStatusGrade::F;
//
//}
//
//void PrintTheNumber(int Grade) {
//
//     if (CalculateGrade(Grade) == enStatusGrade::A)
//		cout << "A" << endl;
//
//
//	 else if (CalculateGrade(Grade) == enStatusGrade::B)
//		 cout << "B" << endl;
//
//	 else if (CalculateGrade(Grade) == enStatusGrade::C)
//		 cout << "C" << endl;
//
//	 else if (CalculateGrade(Grade) == enStatusGrade::D)
//		 cout << "D" << endl;
//
//	 else if (CalculateGrade(Grade) == enStatusGrade::E)
//		 cout << "E" << endl;
//
//	 else 
//		 cout << "F" << endl;
//
//
//
//
//}
//
//int main() {
//
//	
//
//	PrintTheNumber(ReadGrade());
//
//	return 0;
//
//}



////problem #33.
////Doctor's Solution 
//#include<iostream>
//using namespace std;
//
//int ReadNumberInRange(int From, int To) {
//
//	int Grade;
//	do {
//		cout << "Please Enter The Grade Between " << From << " And " << To <<" : " << endl;
//		cin >> Grade;
//	
//	} while (Grade < From || Grade > To);
//
//	return Grade;
//
//}
//
//char GetGradeLetter(int Grade) 
//{
//	if (Grade >= 90)
//		return  'A';
//	else if (Grade >= 80)
//		return 'B';
//	else if (Grade >= 70)
//		return 'C';
//	else if (Grade >= 60)
//		return 'D';
//	else if (Grade >= 50)
//		return 'E';
//	else
//		return 'F';
//}
//
//int main() {
//	cout <<"Result = " << GetGradeLetter(ReadNumberInRange(0, 100));
//
//	return 0;
//}







////problem #34.
//#include <iostream>
//using namespace std;
//
//
//int ReadTotalSales() {
//
//	int TotalSales;
//
//	cout << "Please Enter The Total Sales :\n";
//	cin >> TotalSales;
//
//	return TotalSales;
//}
//
//float CommissionPercentage(int TotalSales) {
//
//	float Commission;
//
//	if (TotalSales > 1000000)
//		return Commission = 0.01 * TotalSales;
//
//	else if (TotalSales > 500000)
//		return Commission = 0.02 * TotalSales;
//
//	else if (TotalSales > 100000)
//		return Commission = 0.03 * TotalSales;
//
//	else if (TotalSales > 50000)
//		return Commission = TotalSales * 0.05;
//
//	else
//	return 	Commission = TotalSales * 0;
//
//
//}
//
//void PrintTheCommission(int Commission) 
//{
//
//	cout << "The Commission Is : " << Commission << endl;
//
//}
//
//
//int main() {
//	
//	
//	cout<< CommissionPercentage(ReadTotalSales());
//
//	return 0;
//}





////problem #34.
////Doctor's Solution.
//#include <iostream>
//using namespace std;
//
//
//float ReadTotalSales() {
//
//	float TotalSales;
//
//	cout << "Please Enter The Total Sales :\n";
//	cin >> TotalSales;
//
//	return TotalSales;
//}
//
//
////This function will Give us just The Percentage. 
//float GetPercentage(int TotalSales) {
//
//	float Percentage;
//
//	if (TotalSales > 1000000)
//		return Percentage = 0.01 ;
//
//	else if (TotalSales > 500000)
//		return Percentage = 0.02 ;
//
//	else if (TotalSales > 100000)
//		return Percentage = 0.03 ;
//
//	else if (TotalSales > 50000)
//		return Percentage = 0.05;
//
//	else
//		return 	Percentage = 0;
//
//
//}
//
////This function will Give us The Total Commission Value. 
//float CalculateTotalCommission(float TotalSales) {
//	
//	return  GetPercentage(TotalSales) * TotalSales;
//		
//
//	
//
//}
//
//
//
//
//int main() {
//
//	float TotalSales = ReadTotalSales();
//
//	cout <<"The Percentage Is : " << GetPercentage(TotalSales) << endl;
//
//
//	cout <<"The Total Commission Is :" << CalculateTotalCommission(TotalSales) << endl;
//
//	return 0;
//}



//problem #35.
#include <iostream>
using namespace std;

struct StPennies{

	int Penny;
	int Nickel;
	int Dime;
	int Quarter;
	int Dollar;
};


StPennies ReadingCoins() 
{
	StPennies Coins;

	cout << "Please Enter Penny :\n";
	cin >> Coins.Penny;

	cout << "Please Enter Nickel :\n";
	cin >> Coins.Nickel;

	cout << "Please Enter Dime :\n";
	cin >> Coins.Dime;

	cout << "Please Enter Quarter :\n";
	cin >> Coins.Quarter;

	cout << "Please Enter Dollar :\n";
	cin >> Coins.Dollar;

	return Coins;
}


float CalculateSumOfPenny(StPennies coin) {

	float Pennies = 0;

	Pennies = (coin.Penny * 1) + (coin.Nickel * 5) + (coin.Dime * 10) + (coin.Quarter * 25) + (coin.Dollar * 100);

	return Pennies;

}



int main() {

	int TotalPennies =  CalculateSumOfPenny(ReadingCoins());

	cout << endl << "Total Pennies = " << TotalPennies << endl;

	cout << endl << "Total Dollars = " << ((float)TotalPennies / 100) << endl;

	return 0;
}