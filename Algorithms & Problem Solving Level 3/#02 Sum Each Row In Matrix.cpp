#include <iostream>
#include <iomanip>
#include "MaherLib.h"

using namespace std;

void Fill2DArrayRandomly(int arr[3][3], int Rows, int Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            arr[i][j] = MyInputLib::RandomNumberInRange(1, 100);
        }
    }
}

int RowSum(int arr[3][3], int RowIndex, int Cols) {
    int Sum = 0;
    for (int j = 0; j < Cols; j++) {
        Sum += arr[RowIndex][j];
    }
    return Sum;
}

void PrintEachRowSum(int arr[3][3], int Rows, int Cols) {
    for (int i = 0; i < Rows; i++) {
        cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
    }
}

void Print2DArray(int arr[3][3], int Rows, int Cols, int SetwValue) {
    cout << "\nThe Matrix:\n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(SetwValue) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[3][3];

    Fill2DArrayRandomly(arr, 3, 3);
    Print2DArray(arr, 3, 3, 3);
    PrintEachRowSum(arr, 3, 3);

    return 0;
}