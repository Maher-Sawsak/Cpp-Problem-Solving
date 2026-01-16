// Count Negative Numbers In Array

#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void AddElements(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		arr[i] = RandomNumber(-100, 100);
}

int CountNegativeNumsInArray(int arr[], int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) count++;
	return count;
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
	int arr[100], length;
	cout << "Number Of Elements: ";
	cin >> length;
	AddElements(arr, length);
	cout << "\nArray Elements:";
	PrintArray(arr, length);
	cout << "\nNegative Numbers Count In Array: " << CountNegativeNumsInArray(arr, length) << endl;
}