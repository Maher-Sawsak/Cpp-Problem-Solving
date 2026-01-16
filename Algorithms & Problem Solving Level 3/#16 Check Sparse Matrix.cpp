// #16 Problem.


#include <iostream>
#include "MaherLib.h"

using namespace std;

bool Matrix_IsSparce3x3(int Matrix[3][3] , int Rows , int Cols) {

	short MatrixSize = Rows * Cols;
	short ZeroNumbersInMatrix = MyArrayLib::Matrix_CountNumberFrequency3x3(Matrix, 3, 3, 0);
	return (ZeroNumbersInMatrix > (MatrixSize - ZeroNumbersInMatrix));

}

int main()
{

	int Matrix1[3][3] = {{0 ,0, 12},{0, 0,  1},{0, 0,  9}};

	MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3, 3);

	if (Matrix_IsSparce3x3(Matrix1, 3, 3)) {
	
		cout << "Yes , its Sparce Matrix.\n";
	
	}
	else {
	
		cout << "No , its not Sparce Matrix.\n";

	}

	return 0;
}
