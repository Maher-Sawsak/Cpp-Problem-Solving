// Problem #11 to #15 Solutions.cpp 




////problem 11.
//#include<iostream>
//using namespace std;
//enum enPassFail { Pass = 1, Fail = 2};
//
//void ReadTheMarks(int& Mark1, int& Mark2, int& Mark3) {
//
//	cout << "Enter the first mark :\n";
//	cin >> Mark1;
//
//	cout << "Please enter the second mark :\n";
//	cin >> Mark2;
//
//	cout << "Please enter the third mark :\n";
//	cin >> Mark3;
//
//}
//
//int CalculateSumOfMarks(int Mark1, int Mark2, int Mark3) {
//	return Mark1 + Mark2 + Mark3;
//
//}
//
//float CalculateAverageOfMarks(int Mark1, int Mark2, int Mark3) {
//
//	return (float)CalculateSumOfMarks(Mark1, Mark2, Mark3) / 3;
//}
//
//enPassFail CheckTheAverage(float Average) {
//
//	if (Average >= 50)
//		return enPassFail::Pass;
//	else
//		return enPassFail::Fail;
//}
//
//void PrintTheResult(float Average) {
//
//	cout <<"Your Average is : " << Average << endl;
//	 
//	if (CheckTheAverage(Average) == enPassFail::Pass)
//		cout << "Pass \n";
//	else
//		cout << "Fail\n";
//}
//
//int main() {
//	int Mark1, Mark2, Mark3;
//	ReadTheMarks(Mark1, Mark2, Mark3);
//	PrintTheResult(CalculateAverageOfMarks(Mark1, Mark2, Mark3));
//	return 0;
//}



////problem 12.
//#include <iostream>   
//#include <string>     
//
//using namespace std;
//
//void ReadNumbers(int& Num1, int& Num2)
//{
//    cout << "Please enter Number 1 ? " << endl;
//    cin >> Num1;
//
//    cout << "Please enter Number 2 ? " << endl;
//    cin >> Num2;
//}
//
//int MaxOf2Numbers(int Num1, int Num2)
//{
//    if (Num1 > Num2)
//        return Num1;
//    else
//        return Num2;
//}
//
//void PrintResults(int Max)
//{
//    cout << "\n The Maximum Number is: " << Max << endl;
//}
//
//int main()
//{
//    int Num1, Num2;
//
//    ReadNumbers(Num1, Num2);
//
//    PrintResults(MaxOf2Numbers(Num1, Num2));
//
//    return 0;
//}







////problem 13
//#include <iostream>  
//#include <string>    
//
//using namespace std;  
//
//void ReadNumbers(int& A, int& B, int& C)
//{
//    cout << "Please enter Number A ? " << endl;
//    cin >> A;
//
//    cout << "Please enter Number B ? " << endl;
//    cin >> B;
//
//    cout << "Please enter Number C ? " << endl;
//    cin >> C;
//}
//
//int MaxOf3Numbers(int A, int B, int C)
//{
//    if (A > B)
//    {
//        if (A > C)
//            return A;
//        else
//            return C;
//    }
//    else  
//    {
//        if (B > C)
//            return B;  
//        else
//            return C;  
//    }
//}
//void PrintResults(int Max)
//{
//    
//    cout << "\n The Maximum Number is: " << Max << endl;
//}
//
//int main()
//{
//    int A, B, C; 
//
//    ReadNumbers(A, B, C);
//
//    PrintResults(MaxOf3Numbers(A, B, C));
//
//    return 0;  
//}



////problem 14
//#include <iostream>
//using namespace std;
//
//void Read2Numbers(int &Number1,int &Number2) {
//	cout << "Please Enter The First Number :\n";
//	cin >> Number1;
//
//	cout << "Please Enter The Second Number :\n";
//	cin >> Number2;
//
//}
//
//
//void Swap2Numbers(int &Number1,int &Number2) {
//
//	int Temp;
//	Temp = Number1;
//	Number1 = Number2;
//	Number2 = Temp;
//}
//
//void Print2Numbers(int Number1 , int Number2) {
//
//	cout << endl <<"Number [1] = " << Number1 << endl;
//	cout<<"Number [2] = " << Number2 << endl;
//
//}
//
//
//int main() {
//	
//	int Number1, Number2;
//
//	Read2Numbers(Number1 , Number2);
//	Print2Numbers(Number1,Number2);
//	Swap2Numbers(Number1 , Number2);
//	Print2Numbers(Number1 , Number2);
//
//	
//	return 0;
//
//}


//problem 15
#include <iostream>
using namespace std;

void Read2Numbers(float &Number1,float &Number2) 
{
	cout << "Please Enter The First Number :\n";
	cin >> Number1;

	cout << "Please Enter The Second Number :\n";
	cin >> Number2;
}

float CalculateRectangleArea(float A , float B) 
{
	return A * B;

}
void PrintTheRectangleArea(float Area) 
{
	cout << "The Rectangle Area Is : " << Area << endl;
}

int main() {
	float Number1, Number2;

	Read2Numbers(Number1 , Number2);

	PrintTheRectangleArea(CalculateRectangleArea(Number1 , Number2));
	return 0;
}