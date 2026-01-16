//This solution For The Homework In C++ Level 1 Algorthims Lesson 31.

#include <iostream>

int main()
{
	using namespace std;

	int Number , power2 , power3 , power4;
	
	cout << "Please Enter The Number:" << endl;
	cin >> Number;

	power2 = Number * Number;

	power3 = Number * Number * Number;

	power4 = Number * Number * Number * Number;


	cout << power2 << endl << power3 << endl << power4 << endl;
		

	return 0;

}
