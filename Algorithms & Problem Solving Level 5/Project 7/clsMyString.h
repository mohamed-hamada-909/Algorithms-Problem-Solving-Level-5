#pragma once

#include <iostream>
#include <stack>

using namespace std;

class clsMyString
{
private:

	string _Value;
	stack <string> _Undo;
	stack <string> _Redo;

public:

	void SetValue(string value)
	{
		_Undo.push(value);
		_Value = value;
	}

	string GetValue()
	{
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue))string Value;

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Value = _Undo.top();
			_Redo.push(_Value);
			_Undo.pop();
		}
	}

	void Redo()
	{
		if (!_Redo.empty())
		{
			_Value = _Redo.top();
			_Undo.push(_Value);
			_Redo.pop();
		}
	}
};