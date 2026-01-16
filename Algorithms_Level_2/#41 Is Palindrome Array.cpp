// Is Palindrome Array

#include <iostream>

using namespace std;

bool IsPalindromeArray(int arr[], int length)
{
	for (int i = 0; i < length / 2; i++)
		if (arr[i] != arr[length - i - 1]) return false;
}

void PrintArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

int main()
{
	int arr[] = { 10,20,30,40,30,20,10 };
	int length = 7;
	PrintArray(arr, length);
	if (IsPalindromeArray(arr, length))
		cout << "\nYes, Array Is Palindrome\n";
	else cout << "\nNo, Array Is Not Palindrome\n";
}