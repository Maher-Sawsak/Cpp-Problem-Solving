// #10 Problem


#include <iostream>
#include "MaherLib.h"

using namespace std;



int Matrix_SumMatrix3x3(int Matrix[3][3], int RowsLength, int ColsLengt) {

	int sum = 0;
	for (int i = 0; i < RowsLength;i++) {
	
	
		for (int j = 0;j < ColsLengt;j++) {
		
		
			sum += Matrix[i][j];
		
		}
	
	
	}


	return sum;
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);
	MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);



	cout << "\nThe Sum Matrix : " << Matrix_SumMatrix3x3(Matrix,3,3);




}