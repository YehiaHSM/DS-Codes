#pragma once
//#include "QueueArr.cpp"

template <class T>
class QueueArr
{
	T* arr;
	int elements, capacity;
	int front, back;
public:
	QueueArr(int);
	int length();
	void enqueue(T);
	void dequeue();
	T Front();
	void expand();
	bool empty();
	bool full();
	~QueueArr(void);
};

