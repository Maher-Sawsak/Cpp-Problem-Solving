// #01 Problem
//Randomly Matrix3*3.
#include <iostream>
#include<random>
#include<ctime>
#include<iomanip>
#include "MaherLib.h"

using namespace std;



void Fill2DArrayRandomly(int arr[100][100], int rowLength, int ColomLength) {



	for (int i = 0; i < rowLength;i++) {


		for (int j = 0;j < ColomLength;j++) {

			arr[i][j] = MyInputLib::RandomNumberInRange(1,100);

		}

	}




}

void Print2DArray(int arr[100][100], int rowLength, int ColomLength , int setwValue) {


	for (int i = 0; i < rowLength;i++) {


		for (int j = 0;j < ColomLength;j++) {

			cout << setw(setwValue) << arr[i][j] << " ";

		}
		cout << endl;
	}





}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100][100];

	Fill2DArrayRandomly(arr, 3, 3);

	Print2DArray(arr, 3, 3 , 3);
}