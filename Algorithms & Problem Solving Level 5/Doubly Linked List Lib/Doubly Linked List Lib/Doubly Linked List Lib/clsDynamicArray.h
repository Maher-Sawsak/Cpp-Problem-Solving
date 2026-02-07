#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;
    T* _TempArray;

public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];

    }
    //that is the destructor will delete the object after finish what he need.
    ~clsDynamicArray()
    {

        delete[]  OriginalArray;

    }

    bool SetItem(int index, T Value)
    {

        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;

    }


    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);

    }

    void PrintList()
    {
        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";

    }

    void Resize(int NewSize)
    {

        if (NewSize < 0)
        {
            NewSize = 0;
        };

        _TempArray = new T[NewSize];

        //limit the original size to the new size if it is less.this is for the counter in loop 
        //That is meaning it's temp value for _Size i will updated later after finishing the loop.
        if (NewSize < _Size)
            _Size = NewSize;

        //copy all data from original array to the new array until the size end for the new size it will be saved in the _Size.
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }
        //Update the size to the new size.
        _Size = NewSize;

        //here deleting the old array.
        delete[] OriginalArray;
        //here copy the array in the temp array to the original array.
        OriginalArray = _TempArray;

    }


    T GetItem(int Index) {

        return OriginalArray[Index];
    }
    void Reverse() {

        if (_Size <= 0) {
            return;
        }
        _TempArray = new T[_Size];
        int CounterSize = _Size - 1;
        for (int i = 0; i < _Size;i++) {
            _TempArray[i] = OriginalArray[CounterSize];
            CounterSize--;
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }


    bool DeleteItemAt(int Index) {

        if (Index >= _Size || Index < 0) {
            return false;
        }
        _Size--;
        _TempArray = new T[_Size ];
        //Copy all until befor Index itself.
        for (int i = 0;i < Index;i++) {
            _TempArray[i] = OriginalArray[i];
        }

        //Copy From index + 1  until end except the index itself.
        for (int i = Index + 1; i <= _Size;i++) {
            _TempArray[i - 1] = OriginalArray[i];
        }
        delete[]OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }


    void Clear() {
        _Size = 0;
        delete[]  OriginalArray;
        OriginalArray = nullptr;

    }



};

