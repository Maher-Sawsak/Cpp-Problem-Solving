#pragma once
#include<cctype>
#include <iomanip>
#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include"MyInputLib.h"
#include "MyMathLib.h"
#include"MyStringLib.h"
using namespace std;

namespace MyArrayLib {

	void ReadArray(int arr[100], int& arrLength)
	{
		cout << "\nEnter number of elements:\n";
		cin >> arrLength;

		cout << "\nEnter array elements: \n";
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
		}
		cout << endl;
	}

	void PrintArray(int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";

		cout << "\n";
	}

	int Array_TimesRepeated(int Number, int arr[100], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
		{
			if (Number == arr[i])
			{
				count++;
			}
		}
		return count;
	}

	void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
	{
		cout << "\nEnter number of elements:\n";
		cin >> arrLength;

		for (int i = 0; i < arrLength; i++)
			arr[i] = MyInputLib::RandomNumberInRange(1, 100);
	}

	int MaxNumberInArray(int arr[100], int arrLength) {
		int sum = 0;

		for (int i = 0;i < arrLength;i++) {

			if (arr[i] > sum)
				sum = arr[i];
		}

		return sum;


	}

	int MinNumberInArray(int arr[100], int arrLength)
	{
		int Min = arr[0];

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < Min)
			{
				Min = arr[i];
			}
		}
		return Min;
	}

	int SumArray(int arr[100], int arrLength) {

		int sum = 0;

		for (int i = 0;i < arrLength;i++) {

			sum += arr[i];
		}
		return sum;
	}


	float AverageArray(int arr[100], int arrLength) {

		return  (float)SumArray(arr, arrLength) / arrLength;

	}


	void CopyArrayToAnotherArray(int arrSource[100], int arrDestination[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}




	int CopyPrimeNumberArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
			if (MyMathLib::CheckPrime(arrSource[i]) == 1) {

				arrDestination[Counter] = arrSource[i];

				Counter++;
			}

		return arrLength2 = --Counter;
	}


	void SumOf2ArraysToThirdArray(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arrSum[i] = arr1[i] + arr2[i];
		}
	}

	void ShuffleArray(int arr[100], int arrLength)
	{

		for (int i = 0;i < arrLength;i++) {

			MyInputLib::Swap(arr[MyInputLib::RandomNumberInRange(1, arrLength) - 1], arr[MyInputLib::RandomNumberInRange(1, arrLength) - 1]);

		}


	}


	void CopyArrayInReverseOrderToAnotherArray(int arrSource[100], int arrDestination[100], int arrLength)
	{

		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[arrLength - 1 - i];
	}


	void FillArrayWithKeys(string arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] =MyStringLib::GenerateKey();
	}


	short FindNumberIndexInArray(int Number, int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == Number)
				return i;
		}
		return -1;
	}


	bool IsNumberInArray(int Number, int arr[100], int arrLength)
	{
		return FindNumberIndexInArray(Number, arr, arrLength) != -1;
	}



	void AddArrayElement(int Number, int arr[100], int& arrLength) {

		arrLength++;
		arr[arrLength - 1] = Number;

	}

	void FillArrayByUser(int arr[100], int& arrLength) {


		bool AddMore;
		do {

			AddArrayElement(MyInputLib::ReadNumber("Please Enter A Number :"), arr, arrLength);
			AddMore = (bool)MyInputLib::ReadNumber("Do you want to add more numbers 0 [No]    1 [Yes] : ");

		} while (AddMore);



	}

	void CopyOddNumbersToArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arrSource[i] % 2 != 0)
			{
				AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
			}
		}
	}


	void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (MyMathLib::CheckPrime(arrSource[i]) == 1)
			{
				AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
			}
		}
	}

	bool IsPalindromeArray(int arr[], int length)
	{
		for (int i = 0; i < length / 2; i++)
			if (arr[i] != arr[length - i - 1]) return false;
	}

	int CountOddNumbersInArray(int arr[], int length)
	{
		int count = 0;
		for (int i = 0; i < length; i++)
			if (arr[i] % 2) count++;
		return count;
	}

	int CountEvenNumbersInArray(int arr[], int length)
	{
		int count = 0;
		for (int i = 0; i < length; i++)
			if (arr[i] % 2 == 0) count++;
		return count;
	}

	int CountPositiveNumsInArray(int arr[], int length)
	{
		int count = 0;
		for (int i = 0; i < length; i++)
			if (arr[i] >= 0) count++;
		return count;
	}

	int CountNegativeNumsInArray(int arr[], int length)
	{
		int count = 0;
		for (int i = 0; i < length; i++)
			if (arr[i] < 0) count++;
		return count;
	}

	void Matrix_FillThreeByThreeRandomly(int arr[3][3], int rowLength, int ColomLength) {



		for (int i = 0; i < rowLength;i++) {


			for (int j = 0;j < ColomLength;j++) {

				arr[i][j] = MyInputLib::RandomNumberInRange(1, 100);

			}

		}


	}


	void Matrix_PrintThreeByThree(int arr[3][3], int rowLength, int ColomLength, int setwValue) {


		for (int i = 0; i < rowLength;i++) {


			for (int j = 0;j < ColomLength;j++) {

				cout << setw(setwValue) << arr[i][j] << " ";

			}
			cout << endl;
		}
	}



	int Matrix_RowSum(int arr[3][3], int RowIndex, int Cols) {
		int Sum = 0;
		for (int j = 0; j < Cols; j++) {
			Sum += arr[RowIndex][j];
		}
		return Sum;
	}
	
	void Matrix_PrintEachRowSum(int arr[3][3], int Rows, int Cols) {
		for (int i = 0; i < Rows; i++) {
			cout << " Row " << i + 1 << " Sum = " << Matrix_RowSum(arr, i, Cols) << endl;
		}
	}


	void Matrix_SumMatrixRowsInArray(int Matrix[3][3], int DestinationArray[3], int Rows, int Cols) {
		for (int i = 0; i < Rows; i++) {
			DestinationArray[i] = MyArrayLib::Matrix_RowSum(Matrix, i, Cols);
		}
	}

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

	void Matrix_SumMatrixColsInArray(int Matrix[3][3], int DestinationArray[3], int Rows, int Cols) {
		for (int i = 0; i < Cols; i++) {
			DestinationArray[i] = MyArrayLib::Matrix_ColSum(Matrix, i, Rows);
		}
	}


	void Matrix_FillThreeByThreeOrdered(int Matrix[3][3], int Rows, int Cols) {

		int counter = 1;
		for (int i = 0;i < Rows;i++) {

			for (int j = 0;j < Cols;j++) {

				Matrix[i][j] = counter;
				counter++;

			}
		}

	}

	void Matrix_CopyMatrixTo1DArray(int Matrix[3][3], int Rows, int Cols, int arr[9]) {


		int counter = 0;
		for (int j = 0;j < Rows;j++) {
			for (int i = 0;i < Cols;i++) {

				arr[counter] = Matrix[j][i];
				counter++;


			}
		}

	}

	void Matrix_TransposeInPlace(int Matrix[3][3], int Rows, int Cols) {

		int arr[9];
		Matrix_CopyMatrixTo1DArray(Matrix, Rows, Cols, arr);

		int counter = 0;
		for (int i = 0; i < Rows; i++) {

			for (int j = 0;j < Cols;j++) {

				Matrix[j][i] = arr[counter];
				counter++;

			}

		}

	}

	void Matrix_TransposeCopy(int Matrix[3][3], int Rows, int Cols, int MatrixDestination[3][3]) {


		for (int i = 0; i < Rows; i++) {

			for (int j = 0;j < Cols;j++) {

				MatrixDestination[i][j] = Matrix[j][i];

			}

		}

	}

	
	//its constant cus (Read Only)
	//this function doesnt store any bit in memory its just print the transpose without storing values. 
	void PrintMatrixTransposed(const int Matrix[3][3], int Rows, int Cols) {

		for (short i = 0; i < Rows; i++) {
			for (short j = 0; j < Cols; j++) {

				cout << setw(3) << Matrix[j][i] << "   ";
			}
			cout << endl;
		}
	}

	//it will store the reult to onther matrix you must give an empthy matrix to store result.
	void Matrix_MultiplyElements3x3(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], int Rows, int Cols) {


		for (short i = 0;i < Rows;i++) {


			for (short j = 0;j < Cols;j++) {


				MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
			}
		}
	}




	void Matrix_MiddleRow3x3(int Matrix[3][3], int RowsLength, int ColsLength) {

		short MiddleRow = RowsLength / 2;



		for (int j = 0;j < 3;j++) {


			cout << " " << Matrix[MiddleRow][j] << " ";
		}

	}

	void Matrix_MiddleCols3x3(int Matrix[3][3], int RowsLength, int ColsLength) {

		short MiddleCols = RowsLength / 2;



		for (int j = 0;j < 3;j++) {


			cout << " " << Matrix[j][MiddleCols] << " ";
		}

	}

	int Matrix_SumMatrix3x3(int Matrix[3][3], int RowsLength, int ColsLengt) {

		int sum = 0;
		for (int i = 0; i < RowsLength;i++) {


			for (int j = 0;j < ColsLengt;j++) {


				sum += Matrix[i][j];

			}


		}

		
		return sum;
	}




	bool Matrix_AreTypicalSame3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

		for (int i = 0; i < Rows; i++) {
			for (int j = 0; j < Cols; j++) {
				if (Matrix1[i][j] != Matrix2[i][j]) {
					return false;
				}
			}
		}
		return true;
	}


	bool Matrix_AreMatricesEqualInSum3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

		return MyArrayLib::Matrix_SumMatrix3x3(Matrix1, 3, 3) == MyArrayLib::Matrix_SumMatrix3x3(Matrix2, 3, 3);

	}



	bool Matrix_IsIdentity3x3(int Matrix[3][3], int Rows, int Cols) {

		for (int i = 0;i < Rows;i++) {


			for (int j = 0;j < Cols;j++) {


				if (i == j && Matrix[i][j] != 1) {

					return false;

				}
				else if (i != j && Matrix[i][j] != 0)
				{

					return false;

				}
			}

		}

		return true;
	}


	bool Matrix_IsScalar3x3(int Matrix[3][3], short rows, short cols) {
		int FirstDiagElement = Matrix[0][0];

		for (short i = 0;i < rows;i++) {
			for (short j = 0;j < cols;j++) {
				if (i == j && Matrix[i][j] != FirstDiagElement) {

					return false;
				}
				else if (i != j && Matrix[i][j] != 0) {
					return false;

				}

			}

		}
		return true;

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




	bool Matrix_IsSparce3x3(int Matrix[3][3], int Rows, int Cols) {

		short MatrixSize = Rows * Cols;
		short ZeroNumbersInMatrix = MyArrayLib::Matrix_CountNumberFrequency3x3(Matrix, 3, 3, 0);
		return (ZeroNumbersInMatrix > (MatrixSize - ZeroNumbersInMatrix));

	}


	bool Matrix_IsNumberExist3x3(int Matrix[3][3], int Rows, int Cols, int NumberToCheck) {

		for (int i = 0; i < Rows; i++) {
			for (int j = 0; j < Cols; j++) {
				if (Matrix[i][j] == NumberToCheck) {
					return true;
				}
			}
		}

		return false;
	}


	void Matrix_PrintIntersectedNumbers3x3(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {




		for (int i = 0;i < Rows;i++) {

			for (int j = 0;j < Cols;j++) {

				if (MyArrayLib::Matrix_IsNumberExist3x3(Matrix2, 3, 3, Matrix1[i][j])) {

					cout << Matrix1[i][j] << " ";

				}



			}
		}

	}

	int Matrix_FindMaxNumber3x3(int Matrix[3][3], int Rows, int Cols) {

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



	bool Matrix_IsPalindrome3x3(int Matrix[3][3], int Rows, int Cols) {


		for (int i = 0;i < Rows;i++) {

			for (int j = 0;j < Cols / 2; j++) {

				if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {

					return false;

				}
			}
		}


		return true;

	}


	string JoinString(string S1[100], int arrLength, string Delim) {

		string TempString = "";
		for (int i = 0;i < arrLength;i++) {

			TempString += S1[i] + Delim;

		}

		return TempString.substr(0, TempString.length() - Delim.length());

	}



bool IsValidPassword(std::string password) {
    if (password.length() < 8) return false;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    std::string specialChars = "!@#$%^&*()-_=+";

    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (specialChars.find(c) != std::string::npos) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}



std::vector<int> RemoveDuplicates(std::vector<int> v) {
    std::vector<int> uniqueVector;

    for (int i = 0; i < v.size(); i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueVector.size(); j++) {
            if (v[i] == uniqueVector[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueVector.push_back(v[i]);
        }
    }
    return uniqueVector;
}


























}
			