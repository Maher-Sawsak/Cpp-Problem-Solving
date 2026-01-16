// #17 Problem.
/*
    Date: 25/11/2025
     Check if a given number exists in the 3x3 Matrix.
*/

#include <iostream>
#include "MaherLib.h"

using namespace std;


bool Matrix_IsNumberExist(int Matrix[3][3], int Rows, int Cols, int NumberToCheck) {

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] == NumberToCheck) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    MyArrayLib::Matrix_FillThreeByThreeRandomly(Matrix, 3, 3);

    cout << "\nThe Matrix:\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    int NumberToSearch = MyInputLib::ReadNumber("\nPlease Enter The Number To Search: ");

    if (Matrix_IsNumberExist(Matrix, 3, 3, NumberToSearch)) {
        cout << "\nYes, the number exists.\n";
    }
    else {
        cout << "\nNo, the number does not exist.\n";
    }

    return 0;
}