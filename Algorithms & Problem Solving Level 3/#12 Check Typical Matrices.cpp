//Problem 11.
/*
* 
The program generates two 3x3 matrices with random numbers 
and checks if they are identical (comparing each element at the same position in both matrices).

*/
#include <iostream>
#include "MaherLib.h"
using namespace std;

bool Matrix_AreTypicalSame3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

	for (int i = 0;i < Rows;i++) {
	
		for (int j = 0; j < Cols;j++) {
		
			if (Matrix1[i][j] != Matrix2[i][j]) {
			
				return false;
			}
		}
	}

	return true;
}
int main()
{
	int Matrix1[3][3],Matrix2[3][3];
	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix1, 3, 3);
	MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix2, 3, 3);

	MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3,3);

	cout << endl;
	MyArrayLib::Matrix_PrintThreeByThree(Matrix2, 3, 3,3);

	if (Matrix_AreTypicalSame3x3(Matrix1, Matrix2, 3, 3))
	{
		cout << "Yes, They Are Typically The Same.\n";

	}
	else {
	
		cout << "No, They Are Not The Same.";
	}
		

}
