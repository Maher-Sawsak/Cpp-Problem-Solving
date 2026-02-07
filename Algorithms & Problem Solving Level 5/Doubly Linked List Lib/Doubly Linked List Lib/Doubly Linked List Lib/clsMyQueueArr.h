#pragma once
#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray <T> _MyDyArr;

public:

	void push(T Value) {
	
		_MyDyArr.InsertAtEnd(Value);
	}

	void pop() {
	
		_MyDyArr.DeletingFirstItem();
	}

	void Print() {
		_MyDyArr.PrintList();
	}

	int Size() {
		return _MyDyArr.Size();
	}
	

	T front() {
	
		return _MyDyArr.GetItem(0);
	}

	T back() {
		return _MyDyArr.GetItem(_MyDyArr.Size() - 1);
	}

	T GetItem(int Index) {
		return _MyDyArr.GetItem(Index);
	}

	void Reverse() {
	
		_MyDyArr.Reverse();
	}

	void UpdateItem(int Index , T Value) {
	
		_MyDyArr.SetItem(Index, Value);
	}

	void InsertAfter(int Index, T Value) {
	
		_MyDyArr.InsertAfter(Index, Value);

	}

	void InsertAtFront(T Value) {
		_MyDyArr.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value) {
	
		_MyDyArr.InsertAtEnd(Value);
	}

	void Clear() {
		_MyDyArr.Clear();
	}
};

