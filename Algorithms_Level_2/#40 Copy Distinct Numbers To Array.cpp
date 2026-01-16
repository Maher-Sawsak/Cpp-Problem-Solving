// Copy Distinct Numbers To Array

#include <iostream>

using namespace std;

void AddArrayElement(int num, int arr[], int& length)
{
	arr[length++] = num;
}

int CheckNumIndexInArr(int arr[], int length, int n)
{
	for (int i = 0; i < length; i++)
		if (arr[i] == n) return i;
	return -1;
}

bool CheckNumInArr(int arr[], int length, int n)
{
	return CheckNumIndexInArr(arr, length, n) != -1;
}

void CopyDistinctArray(int src[], int dest[], int srcLength, int& destLength)
{
	for (int i = 0; i < srcLength; i++)
		if (!CheckNumInArr(dest, destLength, src[i])) AddArrayElement(src[i], dest, destLength);
}

void PrintArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[] = { 10,10,10,50,50,70,70,70,70,90 };
	int arr1Length = 10;
	int arr2[100];
	int arr2Length = 0;

	CopyDistinctArray(arr1, arr2, arr1Length, arr2Length);
	cout << "Array 1 Elements:\n";
	PrintArray(arr1, arr1Length);
	cout << "\nArray 2 Distinct Elements:\n";
	PrintArray(arr2, arr2Length);
}