// #08 Problem


#include <iostream>
#include"MaherLib.h"

using namespace std;


void Matrix_FillThreeByThreeRandomlyTo10(int arr[3][3], int rowLength, int ColomLength) {



	for (int i = 0; i < rowLength;i++) {


		for (int j = 0;j < ColomLength;j++) {

			arr[i][j] = MyInputLib::RandomNumberInRange(1, 10);

		}

	}


}


void Matrix_MultiplyElements3x3(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], int Rows, int Cols) {


	for (short i = 0;i < Rows;i++) {
	
	
		for (short j = 0;j < Cols;j++) {
		
		
			MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

int main()
{
	int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];

    Matrix_FillThreeByThreeRandomlyTo10(Matrix1, 3, 3);
	Matrix_FillThreeByThreeRandomlyTo10(Matrix2, 3, 3);

	cout << "\t\tThe Original Matrix :\n";
	MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3, 3);

	cout << endl ;
	MyArrayLib::Matrix_PrintThreeByThree(Matrix2, 3, 3, 3);


	cout << endl << endl;


	Matrix_MultiplyElements3x3(Matrix1, Matrix2, MatrixResult, 3, 3);
	MyArrayLib::Matrix_PrintThreeByThree(MatrixResult, 3, 3, 3);




	return 0;
}