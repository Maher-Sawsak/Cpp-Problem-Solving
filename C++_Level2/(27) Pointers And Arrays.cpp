// Pointers And Arrays


#include <iostream>


using namespace std;


int main()
{
	int arr[] = { 2,4,6,8,10 };


	int* ptr;
	ptr = arr;
	cout << "Address of Array's Elements :\n";
	
	/* Notes:
	ptr is equivalent to &arr[0];
	ptr + 1 is equivalent to &arr[1];
	ptr + 2 is equivalent to &arr[2];
	ptr + 3 is equivalent to &arr[3];
	*/
	for (int i = 0;i < 5;i++) {
		cout << ptr + i << endl;
	}


	cout << "The Values by pointer :\n";
	for (int i = 0;i < 5;i++)
	{
		cout << *(ptr + i) << endl;

	}



	return 0;
}
