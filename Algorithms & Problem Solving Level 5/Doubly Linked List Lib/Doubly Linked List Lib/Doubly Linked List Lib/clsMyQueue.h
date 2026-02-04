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


};

