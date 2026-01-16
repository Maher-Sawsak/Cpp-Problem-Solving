//Max Random Array

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int ReadPositiveNumber(string Message) {

    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int RandomInRange(int From, int To) {

    int RandomNumber = rand() % (To - From + 1) - From;

    return RandomNumber;

}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

     for (int i = 0; i < arrLength;i++)
        arr[i] = RandomInRange(1, 100);

}

void PrintArray(int arr[100] ,int arrLength) {

    
    for (int i = 0;i < arrLength;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int MaxNumberInArray(int arr[100], int arrLength) {
    int sum = 0;

    for (int i = 0;i < arrLength;i++) {
    
            if (arr[i] > sum)
                sum = arr[i];
 }

    return sum;


}




int main()
{
    srand((unsigned)time(NULL));

    int arrLength = ReadPositiveNumber("Please Enter How Many Many Element You Want :");

    int arr[100];

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "Array Elements : ";
    PrintArray(arr , arrLength);




    cout << "Max is ";
    cout<< MaxNumberInArray(arr, arrLength);

    return 0;
}
