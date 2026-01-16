// #06 Problem


/*
Problem Description:
Write a program to fill a 3x3 matrix with ordered numbers (from 1 to 9), then print it.
*/

#include <iostream>
#include "MaherLib.h"

using namespace std;


void Matrix_FillThreeByThreeOrdered(int Matrix[3][3], int Rows,int Cols) {

	int counter =1;
	for (int i = 0;i < Rows;i++) {
	
		for (int j = 0;j < Cols;j++) {
		
			Matrix[i][j] = counter;
			counter++;
		
		}
	}

}


int main()
{


	int Matrix[3][3];

	Matrix_FillThreeByThreeOrdered(Matrix, 3, 3);

	MyArrayLib::Matrix_PrintThreeByThree(Matrix,3,3,3);



	return 0;
}
