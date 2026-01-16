// #14 Problem


// Problem 14: Write a program to check if a 3x3 Matrix is a Scalar Matrix.
// A Scalar Matrix is a matrix where all diagonal elements are equal and all off-diagonal elements are zero.

#include<iostream>
#include "MaherLib.h"

using namespace std;
bool Matrix_IsScalar3x3(int Matrix[3][3], short rows, short cols) {
    int FirstDiagElement = Matrix[0][0];

    for (short i = 0;i < rows;i++) {
        for (short j = 0;j < cols;j++) {
            if (i == j && Matrix[i][j] != FirstDiagElement) {
            
                return false;
            }else if(i != j && Matrix[i][j] != 0) {
                return false;
            
            }
 
        }

    }
    return true;

}


int main()
{
    
    int Matrix[3][3] = { {9,0,0} , {0,9,0},{0,0,9} };
    cout << "The Original Matrix :\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    if (Matrix_IsScalar3x3(Matrix, 3, 3)) {
    
        cout << "\nYes, its Scalar Matrix.\n";
    
    }
    else {
    
        cout << "\nNo , Its not Scalar Matrix.\n";
    }




}