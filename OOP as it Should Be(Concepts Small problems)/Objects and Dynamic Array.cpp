// Objects and Dynamic Array.


#include <iostream>

using namespace std;
class clsA {


public:
    int x;
    //Here I need the empty constructor to create an dynamic array with object but it will be empty
    clsA() {

    }
    clsA(int Value) {
    
        x = Value;
    }

    void Print() {
    
        cout << x;
    }

};
int main()
{
    short NumberOfObject = 5;

    //here the pointer will point at the first index in the araay cuz its dynamic array in the heap.
    //look now i created an array with constant size 5 but i didn't assign any value for it just array[5].
    //because in dynamic array u can't give size in the same step give the value.
    clsA* PointerArr = new clsA[NumberOfObject];


    //Now I need to assign values for the array b y for loop.
    //clsA(i) its temp object just with value i will copy to array;
    for (int i = 0; i < NumberOfObject;i++) {
    
        PointerArr[i] = clsA(i);
    }


    //Now I want to print the object that is in the array.
    for (int i = 0;i < NumberOfObject;i++) {
    //The Object in the array at index (..) its object so i cam access the method and print it.
        PointerArr[i].Print();   
        cout << endl;
    }

    // here i must use delete to delete the dynamic array after the user finish.
    //if i used just delete PonterArr it will delete the poiter itself not the array.
    delete[] PointerArr;
}
