#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size;
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

	~clsDynamicArray()
	{
		delete [] OriginalArray;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	int Size()
	{
		return _Size;
	}

	bool SetItem(int index, T Value)
	{
		if (index >= _Size || index < 0)
			return false;

		OriginalArray[index] = Value;
		return true;
	}

	void PrintList()
	{
		for (int i = 0; i <= Size() - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		if (NewSize < _Size)
			_Size = NewSize;

		_TempArray = new T[NewSize];

		for (int i = 0; i <= _Size - 1; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[]OriginalArray;
		OriginalArray = _TempArray;
	}

	T GetItem(int index)
	{
		if (index < 0 || index >= Size())
			index = 0;

		return OriginalArray[index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		for (int i = 0; i <= _Size - 1 ; i++)
			_TempArray[i] = OriginalArray[(_Size - 1) - i];

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
			return false;

		_Size--;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		for (int i = index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;

		return true;
	}

	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}

	bool DeleteLastItem()
	{
		return DeleteItemAt(_Size - 1);
	}

	int Find(T Value)
	{
		for (short i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
			{
				return i;
			}
		}

		return -1;
	}

	bool DeleteItem(T Value)
	{
		int index = this->Find(Value);

		return (index != -1) ? DeleteItemAt(index) : false;
	}

	bool InsertAt(int index, T Value)
	{
		if (index < 0 || index > _Size)
			return false;

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
			_TempArray[i] = OriginalArray[i];

		_TempArray[index] = Value;

		for (int i = index; i < _Size - 1; i++)
			_TempArray[i + 1] = OriginalArray[i];

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	bool InsertAtBegining(T Value)
	{
		return InsertAt(0, Value);
	}

	void InsertAtEnd(T Value)
	{
		InsertAt(_Size, Value);
	}

	bool InsertAfter(int index,T Value)
	{
		if (index >= _Size)
			return InsertAt(_Size - 1, Value);

		else
			return InsertAt(index + 1, Value);
	}

	bool InsertBefore(int index,T Value)
	{
		if (index < 1)
			return InsertAt(0, Value);
		else
			return InsertAt(index - 1, Value);
		
	}

};

