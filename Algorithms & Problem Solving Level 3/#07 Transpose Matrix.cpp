// #07 Problem.

/*Problem:
Write a program to fill a 3x3 matrix with ordered numbers,
transpose the matrix(swap rows with columns) using an auxiliary 1D array,
and print the result.*/

#include <iostream>
#include "MaherLib.h"

using namespace std;

void Matrix_TransposeCopy(int Matrix[3][3], int Rows, int Cols, int MatrixDestination[3][3]) {


	for (int i = 0; i < Rows; i++) {
	
		for (int j = 0;j < Cols;j++) {
		
			MatrixDestination[i][j] = Matrix[j][i];
		
		}

	}

}

int main()
{
	int Matrix[3][3], TransposeMatrix[3][3];

	MyArrayLib::Matrix_FillThreeByThreeOrdered(Matrix,3,3);
	MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

	cout << "\nNow For Transpose The Matrix To Another Matrix :\n";

	Matrix_TransposeCopy(Matrix, 3, 3, TransposeMatrix);
	MyArrayLib::Matrix_PrintThreeByThree(TransposeMatrix, 3, 3, 3);

	return 0;
}
