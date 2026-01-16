// #04 Problem

/*
	Problem:
	Write a program to fill a 3x3 matrix with random numbers,
	then calculate and print the sum of each column.
*/

#include <iostream>
#include "MaherLib.h"

using namespace std;

int Matrix_ColSum(int Matrix[3][3], int ColNumber, int Rows) {
    int Sum = 0;
    for (int i = 0; i < Rows; i++) {
        Sum += Matrix[i][ColNumber];
    }
    return Sum;
}

void Matrix_PrintEachColSum(int Matrix[3][3], int Rows, int Cols) {
    cout << "\nThe following are the sum of each column in the matrix:\n";
    for (int i = 0; i < Cols; i++) {
        cout << " Col " << i + 1 << " Sum = " << Matrix_ColSum(Matrix, i, Rows) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix[3][3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);

    cout << "\nThe Matrix:\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    Matrix_PrintEachColSum(Matrix, 3, 3);

    return 0;
}
