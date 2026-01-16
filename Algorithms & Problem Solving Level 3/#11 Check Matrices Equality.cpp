// #11 Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.


//The program generates two 3x3 matrices with random numbers, 
// calculates the sum of all elements in each matrix, and checks if these sums are equal (matrices are equivalent in sum).

#include <iostream>
#include "MaherLib.h"


bool Matrix_AreMatricesEqualInSum3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

    return MyArrayLib::Matrix_SumMatrix3x3(Matrix1, 3, 3) == MyArrayLib::Matrix_SumMatrix3x3(Matrix2, 3, 3);

}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix1, 3, 3);
    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix2, 3, 3);

    MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3, 3);

    cout << endl;
    MyArrayLib::Matrix_PrintThreeByThree(Matrix2, 3, 3, 3);



    if (Matrix_AreMatricesEqualInSum3x3(Matrix1, Matrix2, 3, 3)) {
        cout << "Yes Equivelent \n";
    }
    else {
    
        cout << "No ,The Are Not Equivelt.\n";
    }



        return 0;
}
