// STL(Libraray) -Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <stack>
using namespace std;
int main()
{

	//Now I created a stack its same to the vector the creation.
	stack <int> stkNumbers;

	stkNumbers.push(10);
	stkNumbers.push(20);
	stkNumbers.push(30);
	stkNumbers.push(40);
	stkNumbers.push(50);

	//Now i will print the size for the stack now.

	cout << "The Size Of The Stack Is  : " << stkNumbers.size();

	//To print all the element by while loop and big o will be O(n).

	
	cout << "\nThe Number In Stack In : \n";
	while (!stkNumbers.empty()) {
	
		cout << stkNumbers.top() << endl;

		stkNumbers.pop();	
	}



}