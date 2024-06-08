#include "QueueArr.h"
#include <iostream>
#include <assert.h>

template <class T>
QueueArr<T>::QueueArr(int cap)
{
	capacity=cap;
	elements=0;
	front=back=-1;
	arr=new T[capacity];
}

template <class T>
int QueueArr<T>::length()
{
	return elements;
}

template <class T>
void QueueArr<T>::enqueue(T val)
{
	if(elements==capacity)
		expand();
	if(elements==0)
		front=0;
	back=(back+1)%capacity;
	arr[back]=val;
	elements++;
}

template <class T>
void QueueArr<T>::dequeue()
{
	assert(!empty());
	if(elements==1)
		front=back=-1;
	else
		front=(front+1)%capacity;
	elements--;
}

template <class T>
void QueueArr<T>::expand()
{
	T* newarr=new T[capacity+5];
	int index=front;
	for(int i=0;i<elements;i++)
	{
		newarr[i]=arr[index];
		index=(index+1)%capacity;
	}
	capacity+=5;
	front=0;
	back=elements-1;
	delete[] arr;
	arr=newarr;
}

template <class T>
T QueueArr<T>::Front()
{
	assert(!empty());
	return arr[front];
}

template <class T>
bool QueueArr<T>::full()
{
	return (elements==capacity);
}

template <class T>
bool QueueArr<T>::empty()
{
	return (elements==0);
}


template <class T>
QueueArr<T>::~QueueArr(void)
{
	delete[] arr;
}
