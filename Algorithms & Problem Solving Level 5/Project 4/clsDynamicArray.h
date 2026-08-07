#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _space = 0;
	T* _TempArray;

public:

	T* _OriginalArray;

	clsDynamicArray(int size = 0)
	{
		if (size < 0)
			size = 0;

		_space = size;
		_OriginalArray = new T[_space];
	}

	~clsDynamicArray()
	{
		delete[] _OriginalArray;
	}

	bool SetItem(int index, T value)
	{
		if (index < 0 || index >= _space)
		{
			return false;
		}

		_OriginalArray[index] = value;
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
			cout << _OriginalArray[i] << " ";
		}
	}

	void Resize(int size)
	{
		if (size < 0)
		{
			size = 0;
		}

		_TempArray = new T[size];

		if (size < _space)
			_space = size;

		for (int i = 0; i < _space; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}
		
		_space = size;
		delete[]_OriginalArray;
		_OriginalArray = _TempArray;
	}

	T GetItem(int index)
	{
		return _OriginalArray[index];
	}

	void Reverse()
	{
		_TempArray = new T[_space];
		int counter = 0;

		for (int i = _space - 1; i >= 0; i--)
		{
			_TempArray[counter] = _OriginalArray[i];
			counter++;
		}
		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
	}
	
	void Clear()
	{
		_space = 0;
		_TempArray = new T[0];
		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
	}

	bool DeleteItem(int index)
	{
		if (index < 0 || index >= _space)
		{
			return false;
		}

		_space--;
		_TempArray = new T[_space];

		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}

		//copy all after index
		for (int i = index + 1; i < _space + 1; i++)
		{
			_TempArray[i - 1] = _OriginalArray[i];
		}

		delete[]_OriginalArray;
		_OriginalArray = _TempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItem(0);
	}

	void DeleteLastItem()
	{
		DeleteItem(_space - 1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _space; i++)
		{
			if (_OriginalArray[i] == value)
			{
				return i;
			}
		}
		return -1;
	}

	bool DeleteItemByValue(T value)
	{
		int ToDelete = Find(value);
		
		if (ToDelete == -1)
		{
			return false;
		}
		else
		{
			DeleteItem(ToDelete);
			return true;
		}
	}

	bool InsertAt(int index, T value)
	{
		if (index < 0 || index > _space)
		{
			return false;
		}

		_space++;
		_TempArray = new T[_space];

		//copy before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = _OriginalArray[i];
		}

		_TempArray[index] = value;

		//copy after index
		for (int i = index; i < _space - 1; i++)
		{
			_TempArray[i + 1] = _OriginalArray[i];
		}

		delete[] _OriginalArray;
		_OriginalArray = _TempArray;
		return true;
	}

	bool InsertAtBeginning(T value)
	{
		return InsertAt(0, value);
	}

	bool InsertBefore(int index, T value)
	{
		if (index < 1)
		{
			return InsertAt(0, value);
		}
		else
		{
			return InsertAt(index - 1, value);
		}
	}

	bool InsertAfter(int index, T value)
	{
		if (index >= _space)
		{
			return InsertAt(_space, value);
		}
		else
		{
			return InsertAt(index + 1, value);
		}
	}

	bool InsertAtEnd(T value)
	{
		return InsertAt(_space, value);
	}
};