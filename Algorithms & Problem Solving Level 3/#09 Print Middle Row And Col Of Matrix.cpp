// #09 Problem

#include <iostream>
#include "MaherLib.h"

using namespace std;



void Matrix_MiddleRow3x3(int Matrix[3][3], int RowsLength, int ColsLength) {

	short MiddleRow = RowsLength / 2;
	
	
	
		for (int j = 0;j < 3;j++) {


	cout <<" " << Matrix[MiddleRow][j] <<" ";
		}
	
	}

void Matrix_MiddleCols3x3(int Matrix[3][3], int RowsLength, int ColsLength) {

	short MiddleCols = RowsLength / 2;



	for (int j = 0;j < 3;j++) {


		cout << " " << Matrix[j][MiddleCols] << " ";
	}

}




int main()
{
	srand((unsigned)time(NULL));
	int Matrix[3][3];
	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix,3,3);
	MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

	cout << "\nThe Middle Row is :\n";
	Matrix_MiddleRow3x3(Matrix , 3,3);

	cout << endl;

	cout << "\nThe Middle Coolum is :\n";

	Matrix_MiddleCols3x3(Matrix, 3, 3);


	return 0;

}