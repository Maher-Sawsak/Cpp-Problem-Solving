
//Problem 3.

/*
    Problem:
    Write a program to fill a 3x3 matrix with random numbers,
    calculate the sum of each row, store these sums in a 1D array,
    and print the results.
*/
#include <iostream>
#include "MaherLib.h"

using namespace std;

void Matrix_SumMatrixRowsInArray(int Matrix[3][3], int DestinationArray[3],int Rows, int Cols) {
    for (int i = 0; i < Rows; i++) {
        DestinationArray[i] = MyArrayLib::Matrix_RowSum(Matrix, i, Cols);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    int RowsSumArray[3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);

    cout << "\nThe Matrix:\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    Matrix_SumMatrixRowsInArray(Matrix, RowsSumArray, 3, 3);

    cout << "\nThe Sum of rows in 1D Array:\n";
    MyArrayLib::PrintArray(RowsSumArray, 3);

    return 0;
}