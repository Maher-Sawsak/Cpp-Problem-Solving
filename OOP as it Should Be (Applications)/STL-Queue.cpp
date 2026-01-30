// STL-Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;
int main()
{


	queue <int> qNumbers;

	qNumbers.push(10);
	qNumbers.push(20);
	qNumbers.push(30);
	qNumbers.push(40);
	qNumbers.push(50);


	cout << "Count : " << qNumbers.size();
	cout << "\nFront Of Queue is : " << qNumbers.front();
	cout << "\nBack Of Queue is : " << qNumbers.back();



	cout << "\n\nQueue Elements is  : ";
	while (!qNumbers.empty()) {
	
		cout << qNumbers.front()<< " ";
		qNumbers.pop();
	}




	return 0;
}

