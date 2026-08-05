#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T> _MyList;

public:

	void push(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	void print()
	{
		_MyList.Print();
	}

	int size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(size() - 1);
	}

	//Extension 1
	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	//Extension 2
	void Reverse()
	{
		_MyList.Reverse();
	}

	//Extension 3
	void UpdateItem(int index, T value)
	{
		_MyList.UpdateItem(index, value);
	}

	//Extension 4
	void InsertAfter(int index, T value)
	{
		_MyList.InsertAfter(index, value);
	}

	//Extension 5
	void InsertAtFront(T value)
	{
		_MyList.InsertAtBeginning(value);
	}

	//Extension 6
	void InsertAtBack(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	//Extension 7
	void Clear()
	{
		_MyList.Clear();
	}
};