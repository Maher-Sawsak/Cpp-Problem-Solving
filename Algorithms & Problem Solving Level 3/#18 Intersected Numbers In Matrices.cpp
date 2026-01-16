// #18 Problem.

#include <iostream>
#include "MaherLib.h"

void Matrix_PrintIntersectedNumbers3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {




	for (int i = 0;i < Rows;i++) {
	
		for (int j = 0;j < Cols;j++) {

			if (MyArrayLib::Matrix_IsNumberExist3x3(Matrix2, 3, 3, Matrix1[i][j])) {
			
				cout << Matrix1[i][j] << " ";
			
			}



		}
	}

}











using namespace std;

int main()
{
	srand((unsigned)time(NULL));


	int Matrix1[3][3], Matrix2[3][3];

	cout << "The First Matrix :\n";
	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix1, 3, 3);
	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix2, 3, 3);

	MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3, 3);

	cout << "\nThe Second Matrix :\n";
	MyArrayLib::Matrix_PrintThreeByThree(Matrix2, 3, 3, 3);


	Matrix_PrintIntersectedNumbers3x3(Matrix1, Matrix2, 3, 3);
	return 0;
}
