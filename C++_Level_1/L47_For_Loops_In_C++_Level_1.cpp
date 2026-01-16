// L47_For_Loops_In_C++_Level_1.cpp : This file contains the 'main' function. Program execution begins and ends there.




 //problem number 32 for the small letters in algorithms course level 1 by c++
#include <iostream>
using namespace std;

int main() {


	for (int counter = 97; counter <= 122; counter++) {
		cout << char(counter) << endl;

	}
	return 0;

}


// //problem number 32 for the capital letters in algorithms course level 1 by c++
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	cout << "All capital letters :\n";
//	for (int counter = 65; counter <= 90; counter++) {
//	
//		cout<< char(counter)<<endl;
//	}
//
//
//	return 0;
//
//}





















//  //problem number 32 in algorithms course level 1 by c++
//#include <iostream>
//using namespace std;
//int main() {
//
//
//	int N, M, P = 1;
//	cout << "Enter The Number :\n";
//	cin >> N;
//	
//	cout << "Enter The Power Of Number :";
//	cin >> M;
//
//
//	if(M == 0){
//		cout << P;
//	}
//
//	else {
//		for (int counter = 0; counter != M; counter++) {
//
//			P *= N;
//
//		}
//
//		cout << P;
//	}
//	return 0;
//}



////  //problem number 30 in algorithms course level 1 by c++
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int Number, factor = 1;
//	cout << "Please Enter The Number : \n";
//	cin >> Number;
//
//
//	for (int counter = Number; counter >= 1; counter--) {
//
//		factor *= counter;
//
//	}
//
//
//	cout << factor;
//	return 0;
//}








  //  //problem number 29 in algorithms course level 1 by c++
//#include <iostream>
//using namespace std;
//int main() {
//
//    int N, sum = 0;
//
//    cout << "Enter the Number N :";
//    cin >> N;
//
//    for (int counter = 1; counter <= N; counter++) {
//        if (counter % 2 == 0) {
//            sum += counter;
//        }
//    
//    }
//    cout << sum;
//    return 0;
//}


//
//  //problem number 28 in algorithms course level 1 by c++
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
//    // Loop through numbers from 1 to N
//    for (int counter = 1; counter <= N; counter++) {
//        // Check if the number is odd (not divisible by 2)
//        if (counter % 2 != 0) {
//            sum += counter;  // Add the odd number to the sum
//        }
//    }
//
//    // Print the result
//    cout << "Sum of odd numbers from 1 to " << N << " is: " << sum << endl;
//
//    return 0;  // End of program
//}







////problem number 27 in algorithms course level 1 by c++
//#include<iostream>
//using namespace std;
//int main() {
//   
//    int Number;
//
//    cout << "Please Enter The Number :\n";
//    cin >> Number;
//
//    for (int i = Number; i >= 1; i--) {
//        cout << i<<endl;
//    
//    }
//
//    return 0;
//}










////problem number 26 in algorithms course by c++
//#include <iostream>
//using namespace std;
//int main()
//{
//    int Number;
//    cout << "Please Enter The Number :\n";
//    cin >> Number;
//
//    for (int i = 1; i <= Number;i++) {
//        cout << i << endl;
//    }
//    return 0;
//
//}


//