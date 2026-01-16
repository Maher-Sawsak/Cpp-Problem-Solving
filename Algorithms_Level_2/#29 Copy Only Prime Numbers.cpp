//Copy Only Prime Number 

#include <iostream>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
   
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;  
    }

    return enPrimNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}


int CopyPrimeNumberArray(int arrSource[100], int arrDestination[100], int arrLength , int& arrLength2)
{
    int Counter = 0;
    for (int i = 0; i < arrLength; i++)
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime) {

            arrDestination[Counter] = arrSource[i];
            
            Counter++;
        }

     return arrLength2 = --Counter;
 }




int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arrLength2 = 0;

    FillArrayWithRandomNumbers(arr, arrLength);


    cout << "\nArray1  Elements: \n";
    PrintArray(arr, arrLength);



    int arr2[100];
    CopyPrimeNumberArray(arr, arr2, arrLength , arrLength2);



    cout << "\nPrime Numbers in Array2:\n";
    PrintArray(arr2, arrLength2);

    return 0;
}