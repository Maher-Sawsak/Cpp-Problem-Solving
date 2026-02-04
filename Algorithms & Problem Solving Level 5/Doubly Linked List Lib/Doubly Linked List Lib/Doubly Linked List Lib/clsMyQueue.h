#pragma once

#include <iostream>
#include"clsDblLinkedList.h"
using namespace std;


template <class T>
class clsMyQueue
{
protected :
	clsDblLinkedList <T> _MyListObj;


public:


	void push(T Value) {

		_MyListObj.InsertAtEnd(Value);
	}

	void pop() {

		_MyListObj.DeleteFirstNode();
	}

	void Print() {
	
		_MyListObj.PrintList();
	}

	int Size() {
		return _MyListObj.Size();
	}

	T front() {
		
	
    	return _MyListObj.GetItem(0);
	

	}

	T back() {
	
	
	return _MyListObj.GetItem((_MyListObj.Size() - 1));
	
	}

	bool IsEmpty() {
		return _MyListObj.IsEmpty();
	}

	T GetItem(int Index) {

		return _MyListObj.GetItem(Index);
	
	}

	void Reverse() {
	
		_MyListObj.Reverse();
	}
  
	void UpdateItem(int Index , T Value) {
	
		_MyListObj.UpdateItem(Index, Value);

	}

	void InsertAfter(int Index, T Value) {
		
		_MyListObj.InsertAfter(Index, Value);

	}

	void InsertAtFront(T Value) {

		_MyListObj.InsertAtBeginning(Value);

	}

	void InsertAtBack(T Value) {

		_MyListObj.InsertAtEnd(Value);

	}

	void Clear() {

		_MyListObj.Clear();

	}


};

