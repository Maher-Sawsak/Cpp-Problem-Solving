// #19 Problem.
//Write a program to find the max and min Number in matrix.

#include <iostream>
#include "MaherLib.h"

using namespace std;

int Matrix_FindMaxNumber3x3(int Matrix[3][3], int Rows ,int Cols) {

    int MaxNumber = Matrix[0][0];
    for (int i = 0;i < Rows;i++) {
        
        
        for (int j = 0;j < Cols;j++) {
        
            if (Matrix[i][j] > MaxNumber) {
            
                MaxNumber = Matrix[i][j];
            } 
        
        }
    
    }
    return MaxNumber;

}

int Matrix_FindMinNumber3x3(int Matrix[3][3], int Rows, int Cols) {

    int MinNumber = Matrix[0][0];
    for (int i = 0;i < Rows;i++) {


        for (int j = 0;j < Cols;j++) {

            if (Matrix[i][j] < MinNumber) {

                MinNumber = Matrix[i][j];
            }


        }



    }
    return MinNumber;

}


int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);


    cout << "\nThe Maximum Number is : " << Matrix_FindMaxNumber3x3(Matrix, 3, 3);


    cout << "\nThe Minimum Number is : " << Matrix_FindMinNumber3x3(Matrix, 3, 3);





    return 0;
}
