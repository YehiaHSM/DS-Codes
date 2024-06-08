#pragma once
template <class T>
class ArrList
{

	T* arr;
	int size, count;
public:
	ArrList();
	int Length();
	void Append(T);
	void Expand();
	void display();
	T At(int);
	void insertAt(int, T);
	void deleteAt(int);
	void clear();
	~ArrList(void);
};

