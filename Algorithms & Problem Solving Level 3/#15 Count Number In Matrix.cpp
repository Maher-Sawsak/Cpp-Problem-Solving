// #15 Problem.
// Write a program to count the frequency of a given number in a 3x3 matrix.
#include <iostream>
#include "MaherLib.h"

using namespace std;

void Matrix_FillRandomly_1_To_10(int Matrix[3][3], short Rows, short Cols) {

    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            Matrix[i][j] = MyInputLib::RandomNumberInRange(1, 10);
        }
    }
}

short Matrix_CountNumberFrequency3x3(int Matrix[3][3], short Rows, short Cols, int NumberToCount) {

    short Counter = 0;

    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {

            if (Matrix[i][j] == NumberToCount) {
                Counter++;
            }
        }
    }

    return Counter;
}

int main() {

    srand((unsigned)time(NULL));

    int Matrix[3][3];
    short NumberToCount = MyInputLib::ReadNumber("Please Enter A Number To Find Frquency Count :");

    Matrix_FillRandomly_1_To_10(Matrix, 3, 3);

    cout << "\nThe Matrix (3x3):\n";
    MyArrayLib::Matrix_PrintThreeByThree(Matrix, 3, 3, 3);

    short RepeatedTimes = Matrix_CountNumberFrequency3x3(Matrix, 3, 3, NumberToCount);

    cout << "\nThe Number " << NumberToCount << " is repeated: " << RepeatedTimes << " Time(s).\n";

    return 0;
}