#pragma once

#include <iostream>
#include "clsMyQueue.h"

using namespace std;

template <class T>
class clsMyStack : public clsMyQueue<T>
{
public:

	void push(T Item)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginning(Item);
	}

	void pop()
	{
		clsMyQueue<T>::_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return clsMyQueue<T>::size();
	}

	T Top()
	{
		return clsMyQueue <T>::front();
	}

	T Bottom()
	{
		return clsMyQueue<T>::back();
	}

	T GetItem(int index)
	{
		return clsMyQueue<T>::GetItem(index);
	}

	void Reverse()
	{
		clsMyQueue<T>::Reverse();
	}

	void UpdateItem(int index, T value)
	{
		clsMyQueue<T>::UpdateItem(index, value);
	}

	void InsertAfter(int index, T value)
	{
		clsMyQueue<T>::InsertAfter(index, value);
	}

	void InsertAtFront(T value)
	{
		clsMyQueue<T>::InsertAtFront(value);
	}

	void InsertAtBack(T value)
	{
		clsMyQueue<T>::InsertAtBack(value);
	}

	void Clear()
	{
		clsMyQueue<T>::Clear();
	}

	void Print()
	{
		clsMyQueue<T>::print();
	}
};