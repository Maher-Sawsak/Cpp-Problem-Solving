// Lesson #50 - While Loop Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.

////The problem Number 26. 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int Number;
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//	int i = 1;
//	while (i <= Number)
//	{
//
//		cout << i <<endl;
//		i++;
//	}
//
//	return 0;
//}



////The problem Number 27. 
//#include <iostream>
//using namespace std;
//
//int main (){
//
//
//	int Number;
//	cout << "Please Enter The Number:\n";
//	cin >> Number;
//	
//
//	int i = 1;
//	while (Number >= i) {
//	
//		cout << Number << endl;
//		Number--;
//	}
//
//
//	return 0;
//
//}


////The problem Number 28 sum of odd Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//    int N, sum = 0;  // Declare variables: N (user input), sum (stores the total)
//
//    // Prompt user to enter N
//    cout << "Enter the number N: ";
//    cin >> N;
//    
//    int counter = 1;
//    while (counter <= N) {
//    
//    
//        if (counter % 2 != 0) {
//            sum += counter;  // Add the odd number to the sum
//        }
//        counter++;
//    
//    }
//
//    // Print the result
//    cout << "Sum of odd numbers from 1 to " << N << " is: " << sum << endl;
//
//    return 0;  // End of program
//}




////The problem Number 29 sum of Even Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//    int N, sum = 0;  // Declare variables: N (user input), sum (stores the total)
//
//    // Prompt user to enter N
//    cout << "Enter the number N: ";
//    cin >> N;
//
//    int counter = 1;
//    while (counter <= N) {
//
//
//        if (counter % 2 == 0) {
//            sum += counter;  // Add the odd number to the sum
//        }
//        counter++;
//
//    }
//
//    // Print the result
//    cout << "Sum of odd numbers from 1 to " << N << " is: " << sum << endl;
//
//    return 0;  // End of program
//}




//
////The problem Number 30 sum of Even Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int Number;
//	cout<< "Please Enter The Number :\n";
//	cin >> Number;
//
//	while (Number < 0) {
//		cout << "Please Enter The Number :\n";
//		cin >> Number;
//	}
//
//
//
//	int factor =1;
//	int i = Number + 1;
//
//	while (i != 1) {
//		i--;
//       factor *= i;
//	}
//	cout << factor;
//
//	return 0;
//}



////The problem Number 32 sum of Even Number. 
//#include <iostream >
//using namespace std;
//int main() {
//	int Number, M;
//	
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//
//	cout << "Please Enter The power : \n";
//	cin >> M;
//
//
//	int sum = 1;
//
//	int i = 1;
//	while (i <= M) {
//	
//		sum *= Number;
//		i++;
//	}
//	cout << sum;
//
//	return 0;
//}



////The problem Number 37 sum of Even Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int Number;
//	cout << "Please Enter The Number :\n";
//	cin >> Number;
//	
//	int sum = 0;
//	while ( Number != -99) {
//			sum += Number;
//		cout << "Please Enter The Number :\n";
//		cin >> Number;
//	
//	
//	}
//	cout << sum;
//
//	return 0;
//
//}



////The problem Number 46 sum of Even Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int i = 65;
//	while ( i<=90) {
//	
//		cout << char(i) <<endl;
//		i++;
//	
//	}
//	return 0;
//
//}



//////The problem Number 50 sum of Even Number. 
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int  AtmCode ,  Balance = 7500;
//	cout << "Please Enter The PIN Code :\n";
//	cin >> AtmCode;
//
//
//	int FailedCounter = 1;
//
//	if (AtmCode != 1234) 
//{
//	
//		cout << "Wrong Number!!\n";
//		while ( FailedCounter != 3) {
//			cout << "Please Enter The PIN Code Again :\n";
//			cin >> AtmCode;
//			FailedCounter++;
//		
//		}
//		cout << "Card Locked";
//	
//	
//	}
//	else {
//
//	cout << Balance;
//}
//
//
//	return 0;
//}





#include <iostream >
using namespace std;

int main() {


	int a = 10;

	int b = 9;

	if (a == 10 && b == 9)
	{
		cout << "yes\n";
	}

	

	cout << "the value is " << a <<endl;
	cout << "the value is " << b << endl;;
}