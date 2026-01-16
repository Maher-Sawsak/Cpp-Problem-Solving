//Add array element simi dynamic

#include <iostream>
#include <string>
using namespace std;

 int ReadNumber(string Message) {
     
     int Number;

     cout << Message << endl;
     cin >> Number;

     return Number;
}



 void AddElement(int Number ,int arr[100] , int &arrLength) {
 
     arrLength++;
     arr[arrLength -1] = Number;
 
 }

 void InputUser(int arr[100] , int &arrLength) {
 
 
     bool AddMore;
     do {
     
         AddElement(ReadNumber("Please Enter A Number :"), arr, arrLength);
         AddMore = (bool) ReadNumber("Do you want to add more numbers 0 [No]    1 [Yes] : ");
     
     } while (AddMore);
 
 
 
 }

 void PrintArray(int arr[100] ,int arrLength) {
 
 
     for (int i = 0;i < arrLength;i++) {
     
         cout << arr[i]<< " ";
     
     }
 
 }



int main()
{
    int arr[100];
    int arrLength = 0;


    InputUser(arr, arrLength);

    cout << "\n\nArray Length is : " << arrLength << endl;

    PrintArray(arr, arrLength);
    cout << endl << endl;



    return 0;
}