#pragma once
#include <iostream>

using namespace std;

template<typename T>
class List
{
private:
	T* datas = new T[100];
	int size = 0;
public:
	void Add(T element);
	T Get(int index);
	int GetSize();
};

template<typename T>
inline void List<T>::Add(T element)
{
	datas[size++] = element;
}

template<typename T>
inline T List<T>::Get(int index)
{
	if (index >= size)
		throw out_of_range("out of range");
	return datas[index];
}

template<typename T>
inline int List<T>::GetSize()
{
	return this->size;
}
