// Lesson #52 ____Break Statement.cpp : This file contains the 'main' function. Program execution begins and ends there.

//this homework in 52 in the middle of lesson

#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100};

	for (int i = 0;i <= 10; i++) {

		cout << "we are in iteration " << i + 1 << endl;
	
		if (arr[i] == 20) 
		{
			cout << arr[i];
		
			 break;
		}
	}

	return 0;
}
