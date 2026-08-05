#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _space = 0;

public:

	T* _Array;

	clsDynamicArray(int size = 0)
	{
		if (size < 0)
			size = 0;

		_space = size;
		_Array = new T[_space];
	}

	~clsDynamicArray()
	{
		delete[] _Array;
	}

	bool SetItem(int index, T value)
	{
		if (index < 0 || index >= _space)
		{
			return false;
		}

		_Array[index] = value;
		return true;
	}

	bool IsEmpty()
	{
		return (_space == 0 ? true : false);
	}

	int Size()
	{
		return _space;
	}

	void Print()
	{
		for (short i = 0; i < _space; i++)
		{
			cout << _Array[i] << " ";
		}
	}
};