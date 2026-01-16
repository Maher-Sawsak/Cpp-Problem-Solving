// #05 Problem

/*
	Problem:
	Write a program to fill a 3x3 matrix with random numbers,
	calculate the sum of each column, store these sums in a 1D array,
	and print the results.
*/

#include <iostream>
#include "MaherLib.h"

using namespace std;

void Matrix_SumMatrixColsInArray(int Matrix[3][3], int DestinationArray[3], int Rows, int Cols) {
    for (int i = 0; i < Cols; i++) {
        DestinationArray[i] = MyArrayLib::Matrix_ColSum(Matrix, i, Rows);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    int ColsSumArray[3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);

    cout << "\nThe Matrix:\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    Matrix_SumMatrixColsInArray(Matrix, ColsSumArray, 3, 3);

    cout << "\nThe Sum of cols in 1D Array:\n";
    MyArrayLib::PrintArray(ColsSumArray, 3);

    return 0;
}