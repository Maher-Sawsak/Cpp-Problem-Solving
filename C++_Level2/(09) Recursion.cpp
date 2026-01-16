// Recursion
//Recursion: is a programming technique where a function calls itself directly or indirectly to solve a problem.

//write a program tho print from M down to N By Recursion.





#include <iostream>

using namespace std;

void printDown(int N ,int M) {

	cout << endl;
	cout << M;
	if (M > N) {
	
	
	

	 printDown(N, M - 1);
	
	}

}

int main()
{


	printDown(1, 10);

}
